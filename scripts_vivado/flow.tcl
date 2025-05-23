# Define common variables
source ../scripts_vivado/common.tcl

# Create project
source ${scripts_dir}/init.tcl

# Add and compile clock wizard IP
source ${scripts_dir}/clkwiz.tcl

# Elaborate
synth_design -top ${top} -part ${device} -lint
synth_design -rtl -rtl_skip_mlo -name rtl_1

# Synthesize
# set synth_strategy Flow_RuntimeOptimized
launch_runs synth_1 -jobs ${numjobs}
wait_on_run synth_1

# Add the debug signals
open_run synth_1
insert_ilas [list i_clkwiz/inst/clk_out1]

# Implement
# set impl_strategy Flow_RuntimeOptimized
launch_runs impl_1 -jobs ${numjobs}
wait_on_run impl_1

# Generate bitstream
launch_runs impl_1 -to_step write_bitstream -jobs ${numjobs}
wait_on_run impl_1
