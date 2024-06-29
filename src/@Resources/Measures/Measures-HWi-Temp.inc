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

[getSYSTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#SYSTemp#
MinValue=0
MaxValue=#MaxSYS#

[setSYSColor]
Measure=Calc
Formula=getSYSTemp >= #HiSYS# ? 2 : (getSYSTemp >= #MedSYS# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarSYS BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineSYS LineColor "#ColorTempHi#,180"][!SetOption showHistogramSYS PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarSYS BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineSYS LineColor "#ColorTempMed#,180"][!SetOption showHistogramSYS PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarSYS BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineSYS LineColor "#ColorTempLow#,180"][!SetOption showHistogramSYS PrimaryColor "#ColorTempLow#,60"][!Redraw]

[getGPUTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#GPUTemp#
MinValue=0
MaxValue=#MaxGPU#

[setGPUColor]
Measure=Calc
Formula=getGPUTemp >= #HiGPU# ? 2 : (getGPUTemp >= #MedGPU# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarGPU BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineGPU LineColor "#ColorTempHi#,180"][!SetOption showHistogramGPU PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarGPU BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineGPU LineColor "#ColorTempMed#,180"][!SetOption showHistogramGPU PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarGPU BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineGPU LineColor "#ColorTempLow#,180"][!SetOption showHistogramGPU PrimaryColor "#ColorTempLow#,60"][!Redraw]

[getCPUTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#CPUTemp#
MinValue=0
MaxValue=#MaxCPU#

[setCPUColor]
Measure=Calc
Formula=getCPUTemp >= #HiCPU# ? 2 : (getCPUTemp >= #MedCPU# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarCPU BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineCPU LineColor "#ColorTempHi#,180"][!SetOption showHistogramCPU PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarCPU BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineCPU LineColor "#ColorTempMed#,180"][!SetOption showHistogramCPU PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarCPU BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineCPU LineColor "#ColorTempLow#,180"][!SetOption showHistogramCPU PrimaryColor "#ColorTempLow#,60"][!Redraw]

[getHD0Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HD0Temp#
MinValue=0
MaxValue=#MaxHD#

[setHD0Color]
Measure=Calc
Formula=getHD0Temp >= #HiCore# ? 2 : (getHD0Temp >= #MedCore# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarHD0 BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineHD0 LineColor "#ColorTempHi#,180"][!SetOption showHistogramHD0 PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarHD0 BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineHD0 LineColor "#ColorTempMed#,180"][!SetOption showHistogramHD0 PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarHD0 BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineHD0 LineColor "#ColorTempLow#,180"][!SetOption showHistogramHD0 PrimaryColor "#ColorTempLow#,60"][!Redraw]

[getHD1Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#HD1Temp#
MinValue=0
MaxValue=#MaxHD#

[setHD1Color]
Measure=Calc
Formula=getHD1Temp >= #HiCore# ? 2 : (getHD1Temp >= #MedCore# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarHD1 BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineHD1 LineColor "#ColorTempHi#,180"][!SetOption showHistogramHD1 PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarHD1 BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineHD1 LineColor "#ColorTempMed#,180"][!SetOption showHistogramHD1 PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarHD1 BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineHD1 LineColor "#ColorTempLow#,180"][!SetOption showHistogramHD1 PrimaryColor "#ColorTempLow#,60"][!Redraw]
