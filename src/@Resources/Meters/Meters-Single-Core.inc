; ------------------------------------- Single Core
[showCaptionCore]
Meter=String
X=#MeterXPos#
Y=#CaptionYPos#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text=#CoreCaption#

[showLeftTextCore]
MeasureName=getCpu#CoreNumber#
Meter=String
X=#MeterXPos#
Y=#LegendYPos#
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text="%1 %"

[showRightTextCore]
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=#LegendYPos#
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
Text=""

[showBarCore]
MeasureName=getCpu#CoreNumber#
Meter=Bar
X=#MeterXPos#
Y=#CanvasHeight#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineCore]
MeasureName=getCpu#CoreNumber#
Meter=Line
X=#MeterXPos#
Y=#MeterYPos#
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
LineCount=1
LineColor=#HistoLineColor#

[showHistogramCore]
MeasureName=getCpu#CoreNumber#
Meter=Histogram
X=#MeterXPos#
Y=#MeterYPos#
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#
