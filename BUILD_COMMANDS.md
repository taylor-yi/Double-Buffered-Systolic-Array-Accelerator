verilator --lint-only Processing_Element.sv --top-module PE
verilator --binary --trace --assert -j 0 Processing_Element.sv PE_tb.sv --top-module PE_tb
./obj_dir/VPE_tb
surfer dump.vcd &