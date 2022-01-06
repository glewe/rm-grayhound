; ------------------------------------- Core 1
[showCaptionCpu1]
Meter=String
MeasureName=getCPUDisplayName
X=#MeterXPos#
Y=#CaptionYPos#
W=#MeterWidth#
ClipString=1
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text="%1 (1)"

[showLeftTextCpu1]
MeasureName=getCpu1
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

[showRightTextCpu1]
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

[showBarCpu1]
MeasureName=getCpu1
Meter=Bar
X=#MeterXPos#
Y=#CanvasHeight#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineCpu1]
MeasureName=getCpu1
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

[showHistogramCpu1]
MeasureName=getCpu1
Meter=Histogram
X=#MeterXPos#
Y=#MeterYPos#
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#

; ------------------------------------- Core 2
[showCaptionCpu2]
Meter=String
MeasureName=getCPUDisplayName
X=#MeterXPos#
Y=#CaptionYRel#
W=#MeterWidth#
ClipString=1
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text="%1 (2)"

[showLeftTextCpu2]
MeasureName=getCpu2
Meter=String
X=#MeterXPos#
Y=#LegendYRel#
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text="%1 %"

[showBarCpu2]
MeasureName=getCpu2
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineCpu2]
MeasureName=getCpu2
Meter=Line
X=#MeterXPos#
Y=#LineYRel#
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
LineCount=1
LineColor=#HistoLineColor#

[showHistogramCpu2]
MeasureName=getCpu2
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#
