[getCPUDisplayName]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=ProcessorNameString
RegExpSubstitute=1
Substitute="\(R\)":"","\(TM\)":"","\(tm\)":"","Intel ":"","AMD ":"","CPU ":"","@.*":"","\s\s":" ","\s$":""
UpdateDivider=-1

[getCpu0]
Measure=CPU
Processor=0

[getCpu1]
Measure=CPU
Processor=1

[getCpu2]
Measure=CPU
Processor=2

[getCpu3]
Measure=CPU
Processor=3

[getCpu4]
Measure=CPU
Processor=4

[getCpu5]
Measure=CPU
Processor=5

[getCpu6]
Measure=CPU
Processor=6

[getCpu7]
Measure=CPU
Processor=7

[getCpu8]
Measure=CPU
Processor=8

[getCpu9]
Measure=CPU
Processor=9

[getCpu10]
Measure=CPU
Processor=10

[getCpu11]
Measure=CPU
Processor=11

[getCpu12]
Measure=CPU
Processor=12
