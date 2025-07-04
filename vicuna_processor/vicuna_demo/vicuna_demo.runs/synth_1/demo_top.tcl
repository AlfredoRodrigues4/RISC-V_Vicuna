# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
namespace eval ::optrace {
  variable script "/home/alfredo/vicuna_processor/vicuna_demo/vicuna_demo.runs/synth_1/demo_top.tcl"
  variable category "vivado_synth"
}

# Try to connect to running dispatch if we haven't done so already.
# This code assumes that the Tcl interpreter is not using threads,
# since the ::dispatch::connected variable isn't mutex protected.
if {![info exists ::dispatch::connected]} {
  namespace eval ::dispatch {
    variable connected false
    if {[llength [array get env XILINX_CD_CONNECT_ID]] > 0} {
      set result "true"
      if {[catch {
        if {[lsearch -exact [package names] DispatchTcl] < 0} {
          set result [load librdi_cd_clienttcl[info sharedlibextension]] 
        }
        if {$result eq "false"} {
          puts "WARNING: Could not load dispatch client library"
        }
        set connect_id [ ::dispatch::init_client -mode EXISTING_SERVER ]
        if { $connect_id eq "" } {
          puts "WARNING: Could not initialize dispatch client"
        } else {
          puts "INFO: Dispatch client connection id - $connect_id"
          set connected true
        }
      } catch_res]} {
        puts "WARNING: failed to connect to dispatch server - $catch_res"
      }
    }
  }
}
if {$::dispatch::connected} {
  # Remove the dummy proc if it exists.
  if { [expr {[llength [info procs ::OPTRACE]] > 0}] } {
    rename ::OPTRACE ""
  }
  proc ::OPTRACE { task action {tags {} } } {
    ::vitis_log::op_trace "$task" $action -tags $tags -script $::optrace::script -category $::optrace::category
  }
  # dispatch is generic. We specifically want to attach logging.
  ::vitis_log::connect_client
} else {
  # Add dummy proc if it doesn't exist.
  if { [expr {[llength [info procs ::OPTRACE]] == 0}] } {
    proc ::OPTRACE {{arg1 \"\" } {arg2 \"\"} {arg3 \"\" } {arg4 \"\"} {arg5 \"\" } {arg6 \"\"}} {
        # Do nothing
    }
  }
}

OPTRACE "synth_1" START { ROLLUP_AUTO }
set_param chipscope.maxJobs 2
OPTRACE "Creating in-memory project" START { }
create_project -in_memory -part xc7z010clg400-1

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_property webtalk.parent_dir /home/alfredo/vicuna_processor/vicuna_demo/vicuna_demo.cache/wt [current_project]
set_property parent.project_path /home/alfredo/vicuna_processor/vicuna_demo/vicuna_demo.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property ip_output_repo /home/alfredo/vicuna_processor/vicuna_demo/vicuna_demo.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
set_property verilog_define MAIN_CORE_IBEX [current_fileset]
set_property generic {RAM_FPATH=\"/home/alfredo/Documentos/vicuna/sw/test.vmem\" DIFF_CLK=0 SYSCLK_PER=8} [current_fileset]
OPTRACE "Creating in-memory project" END { }
OPTRACE "Adding files" START { }
read_verilog {
  /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_assert_dummy_macros.svh
  /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_assert.sv
  /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/dv/sv/dv_utils/dv_fcov_macros.svh
}
set_property file_type "Verilog Header" [get_files /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_assert_dummy_macros.svh]
set_property file_type "Verilog Header" [get_files /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_assert.sv]
set_property file_type "Verilog Header" [get_files /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/dv/sv/dv_utils/dv_fcov_macros.svh]
read_verilog -library xil_defaultlib -sv {
  /home/alfredo/Documentos/vicuna/rtl/vproc_pkg.sv
  /home/alfredo/vicuna_processor/vicuna_demo/vicuna_demo.srcs/sources_1/new/hwreg_iface.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_pkg.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_alu.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_branch_predict.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_compressed_decoder.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_controller.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_core.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_counter.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_cs_registers.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_csr.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_decoder.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_dummy_instr.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_ex_block.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_fetch_fifo.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_icache.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_id_stage.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_if_stage.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_load_store_unit.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_lockstep.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_multdiv_fast.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_multdiv_slow.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_pmp.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_prefetch_buffer.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_register_file_ff.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_register_file_fpga.sv
  /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_ram_1p_pkg.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_top.sv
  /home/alfredo/Documentos/vicuna/ibex/rtl/ibex_wb_stage.sv
  /home/alfredo/vicuna_processor/vicuna_demo/vicuna_demo.srcs/sources_1/new/led.sv
  /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_lfsr.sv
  /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_28_22_dec.sv
  /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_28_22_enc.sv
  /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_39_32_dec.sv
  /home/alfredo/Documentos/vicuna/ibex/vendor/lowrisc_ip/ip/prim/rtl/prim_secded_39_32_enc.sv
  /home/alfredo/Documentos/vicuna/demo/rtl/ram.sv
  /home/alfredo/Documentos/vicuna/demo/rtl/uart_rx.sv
  /home/alfredo/Documentos/vicuna/demo/rtl/uart_tx.sv
  /home/alfredo/Documentos/vicuna/rtl/vproc_cache.sv
  /home/alfredo/Documentos/vicuna/rtl/vproc_top.sv
  /home/alfredo/Documentos/vicuna/rtl/vproc_xif.sv
  /home/alfredo/Documentos/vicuna/demo/rtl/demo_top.sv
}
read_verilog -library xil_defaultlib /home/alfredo/Documentos/vicuna/ibex/syn/rtl/prim_clock_gating.v
OPTRACE "Adding files" END { }
# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc /home/alfredo/Documentos/vicuna/demo/zybo7010.xdc
set_property used_in_implementation false [get_files /home/alfredo/Documentos/vicuna/demo/zybo7010.xdc]

set_param ips.enableIPCacheLiteLoad 1

read_checkpoint -auto_incremental -incremental /home/alfredo/vicuna_processor/vicuna_demo/vicuna_demo.srcs/utils_1/imports/synth_1/demo_top.dcp
close [open __synthesis_is_running__ w]

OPTRACE "synth_design" START { }
synth_design -top demo_top -part xc7z010clg400-1
OPTRACE "synth_design" END { }
if { [get_msg_config -count -severity {CRITICAL WARNING}] > 0 } {
 send_msg_id runtcl-6 info "Synthesis results are not added to the cache due to CRITICAL_WARNING"
}


OPTRACE "write_checkpoint" START { CHECKPOINT }
# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef demo_top.dcp
OPTRACE "write_checkpoint" END { }
OPTRACE "synth reports" START { REPORT }
generate_parallel_reports -reports { "report_utilization -file demo_top_utilization_synth.rpt -pb demo_top_utilization_synth.pb"  } 
OPTRACE "synth reports" END { }
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
OPTRACE "synth_1" END { }
