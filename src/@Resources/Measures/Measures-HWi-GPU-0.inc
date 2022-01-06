[MeasureGPUName]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOType=SensorName
RegExpSubstitute=1
Substitute="^(.*]: )":"","(:.*)$":"","\(R\)":"","®":"","\(TM\)":"","\(tm\)":"","™":"","NVIDIA ":"","ATI/AMD ":"","AMD ":"","Intel ":"","Qualcomm ":""," GPU":""
UpdateDivider=-1

[MeasureGPUIcon]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOType=SensorName
RegExpSubstitute=1
Substitute="(.*NVIDIA.*)":"~GPU_nvidia.png","(.*AMD.*)":"~GPU_amd.png","(.*Intel.*)":"~GPU_intel.png","(.*Qualcomm.*)":"~GPU_snapdragon.png","^$":"~GPU.png","^(~)":"#@#"
UpdateDivider=-1

[MeasureGPUClock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Clock#
HWiNFOType=CurrentValue
Group=HWiNFO

[MeasureGPUTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Temp#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxGPUTemp#
Group=HWiNFO

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
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-GPUFan1#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxGPUFan#
Group=HWiNFO

[MeasureGPUFan2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-GPUFan2#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxGPUFan#
Group=HWiNFO

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
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-CoreLoad#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
Group=HWiNFO

[MeasureGPUUsageGraph]
Measure=Calc
Formula=MeasureGPUUsage
AverageSize=#SmoothFactor#

[MeasureGPUMemClock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryClock#
HWiNFOType=CurrentValue
Group=HWiNFO

[MeasureGPUMemAlloc]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryAlloc#
HWiNFOType=CurrentValue
Group=HWiNFO

; used for GPUs that have a sensor for percentage of RAM in use (e.g., nVidia)
[MeasureGPUMemoryUsage0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryUsage#
HWiNFOType=CurrentValue
Group=HWiNFO

; used for GPUs that do NOT have a sensor for percentage of RAM in use (e.g., AMD)
[MeasureGPUMemoryUsage1]
Measure=Calc
Formula=MeasureGPUMemAlloc / #GPU1-MemoryTotal# * 100
Disabled=(#GPU1-MemoryTotal# = 0)

; calculate percentage of RAM in use
[MeasureGPUMemUsedPercent]
Measure=Calc
Formula=Max(MeasureGPUMemoryUsage0, MeasureGPUMemoryUsage1)
MinValue=0
MaxValue=100
IfCondition=MeasureGPUMemUsedPercent > 0
IfTrueAction=[!EnableMeasure "MeasureGPURAMTotal"]
IfFalseAction=[!DisableMeasure "MeasureGPURAMTotal"][!SetVariable TextRAMTotal [&LuaScript:FormatNumber(0.0,2,'1k')]]

[MeasureGPURAMUsed]
Measure=Calc
Formula=MeasureGPUMemAlloc * 1024 * 1024
IfCondition=1
IfTrueAction=[!SetVariable TextRAMUsed [&LuaScript:FormatNumber([&MeasureGPURAMUsed],4,'1k')]]
OnChangeAction=[!SetVariable TextRAMUsed [&LuaScript:FormatNumber([&MeasureGPURAMUsed],4,'1k')]]

[MeasureGPURAMTotal]
Measure=Calc
Formula=(#GPU1-MemoryTotal# > 0) ? #GPU1-MemoryTotal# * 1024 * 1024 : MeasureGPUMemAlloc * 1024 * 1024 * 100 / MeasureGPUMemUsedPercent
IfCondition=1
IfTrueAction=[!SetVariable TextRAMTotal [&LuaScript:FormatNumber([&MeasureGPURAMTotal],2,'1k')]]
OnChangeAction=[!SetVariable TextRAMTotal [&LuaScript:FormatNumber([&MeasureGPURAMTotal],2,'1k')]]
Disabled=1

[MeasureGPURAMFree]
Measure=Calc
Formula=Max(0, MeasureGPURAMTotal - MeasureGPURAMUsed)
IfCondition=1
IfTrueAction=[!SetVariable TextRAMFree [&LuaScript:FormatNumber([&MeasureGPURAMFree],4,'1k')]]
OnChangeAction=[!SetVariable TextRAMFree [&LuaScript:FormatNumber([&MeasureGPURAMFree],4,'1k')]]

[MeasureGPUCoreVoltage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-CoreVoltage#
HWiNFOType=CurrentValue
Group=HWiNFO
