[getCores]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SYSTEM\CurrentControlSet\Control\Session Manager\Environment
RegValue=NUMBER_OF_PROCESSORS
UpdateDivider=-1

[getProcess1]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=1
CPUExclude=Idle
IfEqualValue=0
IfEqualAction=!HideMeterGroup Process1
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Process1

[getProcess1Name]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=2
CPUExclude=Idle

[getProcess2]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=1
CPUExclude=Idle;[getProcess1Name]
DynamicVariables=1
IfEqualValue=0
IfEqualAction=!HideMeterGroup Process2
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Process2

[getProcess2Name]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=2
CPUExclude=Idle;[getProcess1Name]
DynamicVariables=1

[getProcess3]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=1
CPUExclude=Idle;[getProcess1Name];[getProcess2Name]
DynamicVariables=1
IfEqualValue=0
IfEqualAction=!HideMeterGroup Process3
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Process3

[getProcess3Name]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=2
CPUExclude=Idle;[getProcess1Name];[getProcess2Name]
DynamicVariables=1

[getProcess4]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=1
CPUExclude=Idle;[getProcess1Name];[getProcess2Name];[getProcess3Name]
DynamicVariables=1
IfEqualValue=0
IfEqualAction=!HideMeterGroup Process4
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Process4

[getProcess4Name]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=2
CPUExclude=Idle;[getProcess1Name];[getProcess2Name];[getProcess3Name]
DynamicVariables=1

[getProcess5]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=1
CPUExclude=Idle;[getProcess1Name];[getProcess2Name];[getProcess3Name];[getProcess4Name]
DynamicVariables=1
IfEqualValue=0
IfEqualAction=!HideMeterGroup Process5
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Process5

[getProcess5Name]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=2
CPUExclude=Idle;[getProcess1Name];[getProcess2Name];[getProcess3Name];[getProcess4Name]
DynamicVariables=1

[getProcess6]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=1
CPUExclude=Idle;[getProcess1Name];[getProcess2Name];[getProcess3Name];[getProcess4Name];[getProcess5Name]
DynamicVariables=1
IfEqualValue=0
IfEqualAction=!HideMeterGroup Process6
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Process6

[getProcess6Name]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=2
CPUExclude=Idle;[getProcess1Name];[getProcess2Name];[getProcess3Name];[getProcess4Name];[getProcess5Name]
DynamicVariables=1

[getProcess7]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=1
CPUExclude=Idle;[getProcess1Name];[getProcess2Name];[getProcess3Name];[getProcess4Name];[getProcess5Name];[getProcess6Name]
DynamicVariables=1
IfEqualValue=0
IfEqualAction=!HideMeterGroup Process7
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Process7

[getProcess7Name]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=2
CPUExclude=Idle;[getProcess1Name];[getProcess2Name];[getProcess3Name];[getProcess4Name];[getProcess5Name];[getProcess6Name]
DynamicVariables=1

[getProcess8]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=1
CPUExclude=Idle;[getProcess1Name];[getProcess2Name];[getProcess3Name];[getProcess4Name];[getProcess5Name];[getProcess6Name];[getProcess7Name]
DynamicVariables=1
IfEqualValue=0
IfEqualAction=!HideMeterGroup Process8
IfAboveValue=0
IfAboveAction=!ShowMeterGroup Process8

[getProcess8Name]
Measure=Plugin
Plugin=AdvancedCPU
UpdateDivider=#ProcessInterval#
TopProcess=2
CPUExclude=Idle;[getProcess1Name];[getProcess2Name];[getProcess3Name];[getProcess4Name];[getProcess5Name];[getProcess6Name];[getProcess7Name]
DynamicVariables=1

;-----------------------

[setProcess1Bar]
Measure=Calc
Formula=1
         
[setProcess2Bar]
Measure=Calc
Formula=getProcess2 / ((getProcess1 > 0) ? getProcess1 : 1)

[setProcess3Bar]
Measure=Calc
Formula=getProcess3 / ((getProcess1 > 0) ? getProcess1 : 1)

[setProcess4Bar]
Measure=Calc
Formula=getProcess4 / ((getProcess1 > 0) ? getProcess1 : 1)

[setProcess5Bar]
Measure=Calc
Formula=getProcess5 / ((getProcess1 > 0) ? getProcess1 : 1)

[setProcess6Bar]
Measure=Calc
Formula=getProcess6 / ((getProcess1 > 0) ? getProcess1 : 1)

[setProcess7Bar]
Measure=Calc
Formula=getProcess7 / ((getProcess1 > 0) ? getProcess1 : 1)

[setProcess8Bar]
Measure=Calc
Formula=getProcess8 / ((getProcess1 > 0) ? getProcess1 : 1)
