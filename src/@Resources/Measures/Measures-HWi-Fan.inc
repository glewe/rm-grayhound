;-------------------------------------------------------------------- Fan 1
[getFANCFan1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan1#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan1#
Group=HWiNFO

[setFANCFan1Color]
Measure=Calc
Formula=getFANCFan1 >= #HiFan1# ? 2 : (getFANCFan1 >= #MedFan1# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan1 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan1 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan1 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanLow#,60"][!Redraw]

;-------------------------------------------------------------------- Fan 2
[getFANCFan2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan2#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan2#
Group=HWiNFO

[setFANCFan2Color]
Measure=Calc
Formula=getFANCFan2 >= #HiFan2# ? 2 : (getFANCFan2 >= #MedFan2# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan2 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan2 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan2 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanLow#,60"][!Redraw]

;-------------------------------------------------------------------- Fan 3
[getFANCFan3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan3#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan3#
Group=HWiNFO

[setFANCFan3Color]
Measure=Calc
Formula=getFANCFan3 >= #HiFan3# ? 2 : (getFANCFan3 >= #MedFan3# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan3 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan3 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan3 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan3 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan3 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan3 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan3 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan3 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan3 PrimaryColor "#ColorFanLow#,60"][!Redraw]

;-------------------------------------------------------------------- Fan 4
[getFANCFan4]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan4#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan4#
Group=HWiNFO

[setFANCFan4Color]
Measure=Calc
Formula=getFANCFan4 >= #HiFan4# ? 2 : (getFANCFan4 >= #MedFan4# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan4 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan4 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan4 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan4 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan4 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan4 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan4 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan4 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan4 PrimaryColor "#ColorFanLow#,60"][!Redraw]

;-------------------------------------------------------------------- Fan 5
[getFANCFan5]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan5#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan5#
Group=HWiNFO

[setFANCFan5Color]
Measure=Calc
Formula=getFANCFan5 >= #HiFan5# ? 2 : (getFANCFan5 >= #MedFan5# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan5 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan5 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan5 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan5 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan5 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan5 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan5 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan5 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan5 PrimaryColor "#ColorFanLow#,60"][!Redraw]

;-------------------------------------------------------------------- Fan 6
[getFANCFan6]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan6#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan6#
Group=HWiNFO

[setFANCFan6Color]
Measure=Calc
Formula=getFANCFan6 >= #HiFan6# ? 2 : (getFANCFan6 >= #MedFan6# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan6 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan6 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan6 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan6 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan6 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan6 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan6 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan6 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan6 PrimaryColor "#ColorFanLow#,60"][!Redraw]

