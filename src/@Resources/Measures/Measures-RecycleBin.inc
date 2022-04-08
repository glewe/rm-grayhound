[getItems]
; Returns the amount of items in the Recycle Bin.
Measure=Plugin
Plugin=RecycleManager.dll
RecycleType=Count
UpdateDivider=#ProcessInterval#
; UpdateDivider sets the rate at which the value of the measure is updated. It is
; calculated as follows: UpdateDivider x Update.
; Update is set in the [Rainmeter] section. 1000 x 3 = 3000 ms or 3 seconds.
MinValue=0
; How many items shall show the bar at 100%?
MaxValue=100
IfCondition=getItems = 0 
ifTrueAction=[!SetOption showIcon ImageName "#IconRecycleBinEmpty#"]

[getSize]
; Returns the total size of the Recycle Bin in bytes.
Measure=Plugin
Plugin=RecycleManager.dll
RecycleType=Size
UpdateDivider=3
MinValue=0
; How many MB shall show the bar at 100%? 500MB = 1024*1024*500
MaxValue=(1024*1024*500)
IfCondition=getSize > 0 
ifTrueAction=[!SetOption showIcon ImageName "#IconRecycleBinFull#"]
