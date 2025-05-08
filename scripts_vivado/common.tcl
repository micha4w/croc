# Set common variables 
set root_dir    /scratch/bsc25f14/croc_sdio/croc

set numjobs     12  ;#set to number of cores

set project_name croc-sd-fpga ;# set project name

set vivado_dir  ${root_dir}/vivado
set constr_dir  ${vivado_dir}/constraints
set scripts_dir ${root_dir}/scripts_vivado
set sources_dir ${root_dir}/rtl

set top croc_xilinx

set board  digilentinc.com:zybo-z7-20:part0:1.1
set device xc7z020clg400-1
