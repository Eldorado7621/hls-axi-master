############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_axi_master
set_top setMem
add_files main.cpp
add_files main.h
add_files -tb test_main.cpp
open_solution "solution1" -flow_target vivado
set_part {xc7z010clg400-1}
create_clock -period 10 -name default
#source "./hls_axi_master/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
