;==============================================================================
; Grayhound HWiNFO Settings
; Needs to be included from the skin INI file after Global.inc
;
; @category: Rainmeter
; @package: Grayhound
; @version: 5.5.0
; @date: 2022-12-31
; @author: George Lewe <george@lewe.com>
; @copyright: 2012-2023 by George Lewe
; @link: http://www.lewe.com
; @license: https://creativecommons.org/licenses/by-nc-sa/3.0/
;
; Instructions how to install and setup HWiNFO 7 can be found here:
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
; AIO settings
;
AIOFan1RPM=ValueRaw11
AIOFan2RPM=ValueRaw12
AIOCPUPumpRPM=ValueRaw13
AIOCoolantTemp=ValueRaw10

;
; Fan controller settings
;
FANCFan1RPM=ValueRaw4
FANCFan2RPM=ValueRaw5
FANCFan3RPM=ValueRaw6
FANCFan4RPM=ValueRaw7
FANCFan5RPM=ValueRaw8
FANCFan6RPM=ValueRaw9

;
; GPU settings
;
GPUTemp=ValueRaw14
GPUFan1RPM=ValueRaw15
GPUFan2RPM=ValueRaw16
GPUUsage=ValueRaw18
GPUMemAlloc=ValueRaw21
GPUMemUsedPercent=ValueRaw18

;
; System settings
;
SYSTemp=ValueRaw1
GPUTemp=ValueRaw14
CPUTemp=ValueRaw0
HD0Temp=ValueRaw2
HD1Temp=ValueRaw3
