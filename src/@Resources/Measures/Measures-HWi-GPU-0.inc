;==============================================================================
; Grayhound Measure Configurations
;
; @category: Rainmeter
; @package: Grayhound
; @version: 5.6.0
; @date: 2024-06-22
; @author: George Lewe <george@lewe.com>
; @copyright: 2012-2024 by George Lewe
; @link: http://www.lewe.com
; @license: https://creativecommons.org/licenses/by-nc-sa/3.0/
; @documentation: https://lewe.gitbook.io/rainmeter-skin-grayhound
;

[MeasureGPUTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#GPUTemp#
MinValue=0
MaxValue=#MaxGPUTemp#

[setGPUTempColor]
Measure=Calc
Formula=MeasureGPUTemp >= #HiGPUTemp# ? 2 : (MeasureGPUTemp >= #MedGPUTemp# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarGPUTemp BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineGPUTemp LineColor "#ColorTempHi#,180"][!SetOption showHistogramGPUTemp PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarGPUTemp BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineGPUTemp LineColor "#ColorTempMed#,180"][!SetOption showHistogramGPUTemp PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarGPUTemp BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineGPUTemp LineColor "#ColorTempLow#,180"][!SetOption showHistogramGPUTemp PrimaryColor "#ColorTempLow#,60"][!Redraw]

[MeasureGPUFan1]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#GPUFan1RPM#
MinValue=0
MaxValue=#MaxGPUFan#

[MeasureGPUFan2]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#GPUFan2RPM#
MinValue=0
MaxValue=#MaxGPUFan#

[MeasureGPUFan]
Measure=Calc
Formula=((MeasureGPUFan1+MeasureGPUFan2)/2)
MinValue=0
MaxValue=#MaxGPUFan#

[setGPUFanColor]
Measure=Calc
Formula=MeasureGPUFan >= #HiGPUFan# ? 2 : (MeasureGPUFan >= #MedGPUFan# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarGPUFan BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineGPUFan LineColor "#ColorFanHi#,180"][!SetOption showHistogramGPUFan PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarGPUFan BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineGPUFan LineColor "#ColorFanMed#,180"][!SetOption showHistogramGPUFan PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarGPUFan BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineGPUFan LineColor "#ColorFanLow#,180"][!SetOption showHistogramGPUFan PrimaryColor "#ColorFanLow#,60"][!Redraw]

[MeasureGPUUsage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#GPUUsage#
MinValue=0
MaxValue=100

[MeasureGPUUsageGraph]
Measure=Calc
Formula=MeasureGPUUsage
AverageSize=#SmoothFactor#

[MeasureGPUMemAlloc]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#GPUMemAlloc#

[MeasureGPUMemAvail]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#GPUMemAvail#

[MeasureGPUMemUsedPercent]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#GPUMemUsedPercent#
MinValue=0
MaxValue=100

[MeasureGPURAMTotal]
Measure=Calc
Formula=(MeasureGPUMemAlloc + MeasureGPUMemAvail) * 1024 * 1024
;Formula=(MeasureGPUMemAlloc * 1024 * 1024 * 100 / MeasureGPUMemUsedPercent)
;IfCondition=1
;IfTrueAction=[!SetVariable TextRAMTotal [&LuaScript:FormatNumber([&MeasureGPURAMTotal],2,'1k')]]
;OnChangeAction=[!SetVariable TextRAMTotal [&LuaScript:FormatNumber([&MeasureGPURAMTotal],2,'1k')]]
;Disabled=1

[MeasureGPURAMFree]
Measure=Calc
Formula=MeasureGPURAMTotal - (MeasureGPURAMTotal * (MeasureGPUMemUsedPercent/100))
;Formula=Max(0, MeasureGPURAMTotal - MeasureGPUMemAlloc)
;IfCondition=1
;IfTrueAction=[!SetVariable TextRAMFree [&LuaScript:FormatNumber([&MeasureGPURAMFree],4,'1k')]]
;OnChangeAction=[!SetVariable TextRAMFree [&LuaScript:FormatNumber([&MeasureGPURAMFree],4,'1k')]]

[MeasureGPUPower]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=#GPUPower#
MinValue=0
MaxValue=300

[MeasureGPUPowerGraph]
Measure=Calc
Formula=MeasureGPUPower
AverageSize=#SmoothFactor#

