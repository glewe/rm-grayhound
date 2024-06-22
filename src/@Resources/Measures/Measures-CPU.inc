[getCPUDisplayNameRegistry]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=ProcessorNameString
RegExpSubstitute=1
Substitute="\(R\)":"","\(TM\)":"","\(tm\)":"","Intel ":"","AMD ":"","CPU ":"","@.*":"","\s\s":" ","\s$":""
UpdateDivider=-1

[getCPUDisplayName]
Measure=String
String="AMD Ryzen 9 (16 Core)"

; Average over all cores
[getCpu0]
Measure=CPU
Processor=0

; Core 1
[getCpu1]
Measure=CPU
Processor=1

; Core 2
[getCpu2]
Measure=CPU
Processor=2

; Core 3
[getCpu3]
Measure=CPU
Processor=3

; Core 4
[getCpu4]
Measure=CPU
Processor=4

; Core 5
[getCpu5]
Measure=CPU
Processor=5

; Core 6
[getCpu6]
Measure=CPU
Processor=6

; Core 7
[getCpu7]
Measure=CPU
Processor=7

; Core 8
[getCpu8]
Measure=CPU
Processor=8

; Core 9
[getCpu9]
Measure=CPU
Processor=9

; Core 10
[getCpu10]
Measure=CPU
Processor=10

; Core 11
[getCpu11]
Measure=CPU
Processor=11

; Core 12
[getCpu12]
Measure=CPU
Processor=12

; Core 13
[getCpu13]
Measure=CPU
Processor=13

; Core 14
[getCpu14]
Measure=CPU
Processor=14

; Core 15
[getCpu15]
Measure=CPU
Processor=15

; Core 16
[getCpu16]
Measure=CPU
Processor=16
