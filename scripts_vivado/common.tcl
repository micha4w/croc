# Set common variables 
set root_dir    [file normalize [pwd]/..]

set numjobs     12  ;#set to number of cores

set project_name croc-sd-fpga ;# set project name

set vivado_dir  ${root_dir}/vivado
set constr_dir  ${vivado_dir}/constraints
set scripts_dir ${root_dir}/scripts_vivado
set sources_dir ${root_dir}/rtl

set top croc_xilinx

set board  digilentinc.com:zybo-z7-20:part0:1.1
set device xc7z020clg400-1

proc insert_ilas {clk_net_name} {
    global project_root
    # Get nets to debug
    set debug_nets [lsort -dictionary [get_nets -hier -filter {MARK_DEBUG == 1}]]
    # Create debug core only if there are probes
    if { ![llength $debug_nets] } { return }
    # Create and configure debug core
    create_debug_core i_ila ila
    set_property -dict [list \
        ALL_PROBE_SAME_MU {true} ALL_PROBE_SAME_MU_CNT {4} C_ADV_TRIGGER {true} \
        C_DATA_DEPTH {16384} C_EN_STRG_QUAL {true} C_INPUT_PIPE_STAGES {0} \
        C_TRIGIN_EN {false} C_TRIGOUT_EN {false} \
        ] [get_debug_cores i_ila]
    # Connect SoC clock
    set_property port_width 1 [get_debug_ports i_ila/clk]
    connect_debug_port i_ila/clk [get_nets $clk_net_name]
    # Loop through debug nets (add extra list element to ensure last net is processed)
    set net_name_last ""
    set i 0
    foreach net [concat $debug_nets {""}] {
        # Remove trailing array index
        regsub {\[[0-9]*\]$} $net {} net_name
        # Create probe after all signals with the same name have been collected
        if { $net_name_last != $net_name } {
            if { $net_name_last != "" } {
                puts "Creating probe $i of width [llength $sig_list] for `$net_name_last`."
                # probe0 already exists, and does not need to be created
                if { $i != 0 } { create_debug_port i_ila probe }
                set_property port_width [llength $sig_list] [get_debug_ports i_ila/probe$i]
                set_property PROBE_TYPE DATA_AND_TRIGGER [get_debug_ports i_ila/probe$i]
                connect_debug_port i_ila/probe$i [get_nets $sig_list]
                incr i
            }
            set sig_list ""
        }
        lappend sig_list $net
        set net_name_last $net_name
    }
    # Save constraints, then implement the debug core
    save_constraints -force
    implement_debug_core
}