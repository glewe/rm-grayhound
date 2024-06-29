;==============================================================================
; Grayhound Measure Configurations
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

; ----------------------------------------------------------------------- Fan 1

[getAIOFan1]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
;RegValue=ValueRaw11
RegValue=#AIOFan1RPM#
MinValue=0
MaxValue=#MaxFan1#

[setAIOFan1Color]
Measure=Calc
Formula=getAIOFan1 >= #HiFan1# ? 2 : (getAIOFan1 >= #MedFan1# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan1 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanHi#,#LineColorTransparency#"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanHi#,#HistoColorTransparency#"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan1 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanMed#,#LineColorTransparency#"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanMed#,#HistoColorTransparency#"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan1 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanLow#,#LineColorTransparency#"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanLow#,#HistoColorTransparency#"][!Redraw]

; ----------------------------------------------------------------------- Fan 2

[getAIOFan2]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#AIOFan2RPM#
MinValue=0
MaxValue=#MaxFan2#

[setAIOFan2Color]
Measure=Calc
Formula=getAIOFan2 >= #HiFan2# ? 2 : (getAIOFan2 >= #MedFan2# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan2 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanHi#,#LineColorTransparency#"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanHi#,#HistoColorTransparency#"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan2 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanMed#,#LineColorTransparency#"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanMed#,#HistoColorTransparency#"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan2 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanLow#,#LineColorTransparency#"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanLow#,#HistoColorTransparency#"][!Redraw]

; ----------------------------------------------------------------------- Pump

[getCPUPump]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#AIOCPUPumpRPM#
MinValue=0
MaxValue=#MaxCPUPump#

[setCPUPumpColor]
Measure=Calc
Formula=getCPUPump >= #HiCPUPump# ? 2 : (getCPUPump >= #MedCPUPump# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarCPUPump BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineCPUPump LineColor "#ColorFanHi#,#LineColorTransparency#"][!SetOption showHistogramCPUPump PrimaryColor "#ColorFanHi#,#HistoColorTransparency#"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarCPUPump BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineCPUPump LineColor "#ColorFanMed#,#LineColorTransparency#"][!SetOption showHistogramCPUPump PrimaryColor "#ColorFanMed#,#HistoColorTransparency#"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarCPUPump BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineCPUPump LineColor "#ColorFanLow#,#LineColorTransparency#"][!SetOption showHistogramCPUPump PrimaryColor "#ColorFanLow#,#HistoColorTransparency#"][!Redraw]

; ----------------------------------------------------------------------- Coolant

[getCPUCoolantTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#AIOCoolantTemp#
MinValue=0
MaxValue=#MaxCPUCoolant#

[setCPUCoolantTempColor]
Measure=Calc
Formula=getCPUCoolantTemp >= #HiCPUCoolant# ? 2 : (getCPUCoolantTemp >= #MedCPUCoolant# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarCPUCoolant BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineCPUCoolant LineColor "#ColorTempHi#,#LineColorTransparency#"][!SetOption showHistogramCPUCoolant PrimaryColor "#ColorTempHi#,#HistoColorTransparency#"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarCPUCoolant BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineCPUCoolant LineColor "#ColorTempMed#,#LineColorTransparency#"][!SetOption showHistogramCPUCoolant PrimaryColor "#ColorTempMed#,#HistoColorTransparency#"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarCPUCoolant BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineCPUCoolant LineColor "#ColorTempLow#,#LineColorTransparency#"][!SetOption showHistogramCPUCoolant PrimaryColor "#ColorTempLow#,#HistoColorTransparency#"][!Redraw]
