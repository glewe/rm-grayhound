;==============================================================================
; Grayhound HWiNFO Settings
; Needs to be included from the skin INI file after Global.inc
;
; @category: Rainmeter
; @package: Grayhound
; @version: 5.6.1
; @date: 2024-06-29
; @author: George Lewe <george@lewe.com>
; @copyright: 2012-2024 by George Lewe
; @link: http://www.lewe.com
; @license: https://creativecommons.org/licenses/by-nc-sa/3.0/
; @documentation: https://lewe.gitbook.io/rainmeter-skin-grayhound
;
; Instructions how to install and setup HWiNFO 7+ can be found here:
; https://docs.rainmeter.net/tips/hwinfo/
;
; Once you have set up HWINFO 7 as described above, run the below command to
; list your Registry values that are fed by HWINFO 7.
;
; reg query HKEY_CURRENT_USER\SOFTWARE\HWiNFO64\VSB
;
; Change the values below to yours...

[Variables]

;
; AIO values
;
AIOFan1RPM=
AIOFan2RPM=
AIOCPUPumpRPM=
AIOCoolantTemp=

;
; Fan Controller values
;
FANCFan1RPM=ValueRaw3
FANCFan2RPM=ValueRaw4
FANCFan3RPM=ValueRaw5
FANCFan4RPM=ValueRaw6
FANCFan5RPM=
FANCFan6RPM=

;
; GPU values
;
GPUTemp=ValueRaw9
GPUFan1RPM=ValueRaw10
GPUFan2RPM=ValueRaw11
GPUUsage=ValueRaw12
GPUMemAlloc=ValueRaw15
GPUMemAvail=ValueRaw16
GPUMemUsedPercent=ValueRaw14
GPUPower=ValueRaw12

;
; Motherboard values
;
CPUTemp=ValueRaw1
SYSTemp=ValueRaw2

;
; SSD values
;
HD0Temp=ValueRaw7
HD1Temp=ValueRaw8
