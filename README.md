# Sonic Security: AES Encryption/Decryption Accelerator on Intel De1-SoC FPGA

## Official Project Design and Report
[View (PDF)](./report.pdf)

## Project Components

### Directory Guide
- `hw`: SV module implementations of AES
- `project_platform`: qsys build directory. Do `make quartus` to build the project. This directory has a duplicate copy of the hardware modules from `hw`
- `sw`: C kernel modules
- `aes-tester`: Verilator test modules for SV
- `fifo`: Userspace tester programs for FIFO
- `aes-ctrl`: More testing software
- `wav`: WIP of .wav file processing software
- `python-aes`: Python implementation of AES is in folder 
- `round-keys`: AES round keys loader for FPGA is in folder 

## Results

### Resource Utilization
```text
+-------------------------------------------------------------------------------+
; Flow Summary                                                                  ;
+---------------------------------+---------------------------------------------+
; Flow Status                     ; Successful - Wed May 14 07:23:35 2025       ;
; Quartus Prime Version           ; 21.1.0 Build 842 10/21/2021 SJ Lite Edition ;
; Revision Name                   ; soc_system                                  ;
; Top-level Entity Name           ; soc_system_top                              ;
; Family                          ; Cyclone V                                   ;
; Device                          ; 5CSEMA5F31C6                                ;
; Timing Models                   ; Final                                       ;
; Logic utilization (in ALMs)     ; 7,910 / 32,070 ( 25 % )                     ;
; Total registers                 ; 6382                                        ;
; Total pins                      ; 362 / 457 ( 79 % )                          ;
; Total virtual pins              ; 0                                           ;
; Total block memory bits         ; 835,840 / 4,065,280 ( 21 % )                ;
; Total DSP Blocks                ; 0 / 87 ( 0 % )                              ;
; Total HSSI RX PCSs              ; 0                                           ;
; Total HSSI PMA RX Deserializers ; 0                                           ;
; Total HSSI TX PCSs              ; 0                                           ;
; Total HSSI PMA TX Serializers   ; 0                                           ;
; Total PLLs                      ; 0 / 6 ( 0 % )                               ;
; Total DLLs                      ; 1 / 4 ( 25 % )                              ;
+---------------------------------+---------------------------------------------+


+-----------------------------------------+
; Flow Settings                           ;
+-------------------+---------------------+
; Option            ; Setting             ;
+-------------------+---------------------+
; Start date & time ; 05/14/2025 07:18:28 ;
; Main task         ; Compilation         ;
; Revision Name     ; soc_system          ;
+-------------------+---------------------+


+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
; Slow 1100mV 85C Model Fmax Summary                                                                                                                                                                                                                               ;
+-------------+-----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+------------------------------------------------+
; Fmax        ; Restricted Fmax ; Clock Name                                                                                                                                                                      ; Note                                           ;
+-------------+-----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+------------------------------------------------+
; 84.24 MHz   ; 84.24 MHz       ; clock_50_1                                                                                                                                                                      ;                                                ;
; 1184.83 MHz ; 717.36 MHz      ; soc_system:soc_system0|soc_system_hps_0:hps_0|soc_system_hps_0_hps_io:hps_io|soc_system_hps_0_hps_io_border:border|hps_sdram:hps_sdram_inst|hps_sdram_pll:pll|afi_clk_write_clk ; limit due to minimum period restriction (tmin) ;
+-------------+-----------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+------------------------------------------------+
This panel reports FMAX for every clock in the design, regardless of the user-specified clock periods.  FMAX is only computed for paths where the source and destination registers or ports are driven by the same clock.  Paths of different clocks, including generated clocks, are ignored.  For paths between a clock and its inversion, FMAX is computed as if the rising and falling edges are scaled along with FMAX, such that the duty cycle (in terms of a percentage) is maintained. Altera recommends that you always use clock constraints and other slack reports for sign-off analysis.





+-------------------------------------------------------------------------------+
; Fitter Summary                                                                ;
+---------------------------------+---------------------------------------------+
; Fitter Status                   ; Successful - Wed May 14 07:23:18 2025       ;
; Quartus Prime Version           ; 21.1.0 Build 842 10/21/2021 SJ Lite Edition ;
; Revision Name                   ; soc_system                                  ;
; Top-level Entity Name           ; soc_system_top                              ;
; Family                          ; Cyclone V                                   ;
; Device                          ; 5CSEMA5F31C6                                ;
; Timing Models                   ; Final                                       ;
; Logic utilization (in ALMs)     ; 7,910 / 32,070 ( 25 % )                     ;
; Total registers                 ; 6382                                        ;
; Total pins                      ; 362 / 457 ( 79 % )                          ;
; Total virtual pins              ; 0                                           ;
; Total block memory bits         ; 835,840 / 4,065,280 ( 21 % )                ;
; Total RAM Blocks                ; 181 / 397 ( 46 % )                          ;
; Total DSP Blocks                ; 0 / 87 ( 0 % )                              ;
; Total HSSI RX PCSs              ; 0                                           ;
; Total HSSI PMA RX Deserializers ; 0                                           ;
; Total HSSI TX PCSs              ; 0                                           ;
; Total HSSI PMA TX Serializers   ; 0                                           ;
; Total PLLs                      ; 0 / 6 ( 0 % )                               ;
; Total DLLs                      ; 1 / 4 ( 25 % )                              ;
+---------------------------------+---------------------------------------------+

```

### Timing
``` text
Successfully wrote 3943360 bytes of encrypted audio data

=====================================================
WAV processing completed successfully
Output file: piano-20sec-encrypted.wav
=====================================================

Processing complete! Output written to piano-20sec-encrypted.wav
piano-sec.wav encrypted to piano-encrypted.wav

real    0m2.638s
user    0m0.358s
sys     0m2.243s
root@de1-soc:~/final-project/final# 

```
