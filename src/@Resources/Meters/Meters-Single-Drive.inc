; ------------------------------------- Drive 1
[showDrive1Caption]
MeasureName=getDrive1Label
Meter=String
X=#MeterXPos#
Y=#CaptionYPos#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text=%1 (#Drive1Letter#)

[showDrive1LeftText]
MeasureName=getDrive1Total
Meter=String
X=#MeterXPos#
Y=#LegendYRel#
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text="Total:  %1B"

[showDrive1RightText]
MeasureName=getDrive1Free
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
Percentual=0
StringAlign=Right
Text="Free:  %1B"

[showDrive1Bar]
MeasureName=getDrive1Used
Meter=Bar
X=#MeterXPos#
Y=#CanvasHeight#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showDrive1Line]
MeasureName=getDrive1Access
Meter=Line
X=#MeterXPos#
Y=#MeterYPos#
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=1
Flip=0
LineCount=1
LineColor=#HistoLineColor#

[showDrive1Histogram]
MeasureName=getDrive1Access
Meter=Histogram
X=#MeterXPos#
Y=#MeterYPos#
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=1
Flip=0
PrimaryColor=#HistoFillColor#
