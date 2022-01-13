# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\psoc codes\adc16\DelSig_16Channel01\DelSig_16Channel01.cydsn\DelSig_16Channel01.cyprj
# Date: Fri, 07 Jan 2022 07:11:46 GMT
#set_units -time ns
create_clock -name {ADC_Ext_CP_Clk(routed)} -period 30.303030303030305 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 30.303030303030305 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 30.303030303030305 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_clock -name {ADC_Ext_CP_Clk} -period 30.303030303030305 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {ADC_theACLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 11 23} [list [get_pins {ClockBlock/aclk_glb_0}]]


# Component constraints for D:\psoc codes\adc16\DelSig_16Channel01\DelSig_16Channel01.cydsn\TopDesign\TopDesign.cysch
# Project: D:\psoc codes\adc16\DelSig_16Channel01\DelSig_16Channel01.cydsn\DelSig_16Channel01.cyprj
# Date: Fri, 07 Jan 2022 07:11:27 GMT
