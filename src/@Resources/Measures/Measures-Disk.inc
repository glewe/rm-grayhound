; ------------------------------------- Drive 1
[getDrive1Access]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance=#Drive1Letter#

[getDrive1Label]
Measure=FreeDiskSpace
Drive=#Drive1Letter#
Label=1

[getDrive1Free]
Measure=FreeDiskSpace
Drive=#Drive1Letter#

[getDrive1Used]
Measure=FreeDiskSpace
Drive=#Drive1Letter#
InvertMeasure=1

[getDrive1Total]
Measure=FreeDiskSpace
Drive=#Drive1Letter#
Total=1

; ------------------------------------- Drive 2
[getDrive2Access]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance=#Drive2Letter#

[getDrive2Label]
Measure=FreeDiskSpace
Drive=#Drive2Letter#
Label=1

[getDrive2Free]
Measure=FreeDiskSpace
Drive=#Drive2Letter#

[getDrive2Used]
Measure=FreeDiskSpace
Drive=#Drive2Letter#
InvertMeasure=1

[getDrive2Total]
Measure=FreeDiskSpace
Drive=#Drive2Letter#
Total=1

; ------------------------------------- Drive 3
[getDrive3Access]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance=#Drive3Letter#

[getDrive3Label]
Measure=FreeDiskSpace
Drive=#Drive3Letter#
Label=1

[getDrive3Free]
Measure=FreeDiskSpace
Drive=#Drive3Letter#

[getDrive3Used]
Measure=FreeDiskSpace
Drive=#Drive3Letter#
InvertMeasure=1

[getDrive3Total]
Measure=FreeDiskSpace
Drive=#Drive3Letter#
Total=1

; ------------------------------------- Drive 4
[getDrive4Access]
Measure=Plugin
Plugin=Plugins\PerfMon.dll
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance=#Drive4Letter#

[getDrive4Label]
Measure=FreeDiskSpace
Drive=#Drive4Letter#
Label=1

[getDrive4Free]
Measure=FreeDiskSpace
Drive=#Drive4Letter#

[getDrive4Used]
Measure=FreeDiskSpace
Drive=#Drive4Letter#
InvertMeasure=1

[getDrive4Total]
Measure=FreeDiskSpace
Drive=#Drive4Letter#
Total=1
