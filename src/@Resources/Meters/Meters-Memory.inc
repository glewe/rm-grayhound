;------------------------------------------------ RAM

[showCaptionRam]
Meter=String
X=#MeterXPos#
Y=#CaptionYPos#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text=#CaptionRAM#

[showLeftTextRam]
MeasureName=getTotalRam
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

[showRightTextRam]
MeasureName=getFreeRam
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

[showBarRam]
MeasureName=getUsedRam
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineRam]
MeasureName=getUsedRam
Meter=Line
X=#MeterXPos#
Y=#HistoYRel#
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
LineCount=1
LineColor=#HistoLineColor#

[showHistogramRam]
MeasureName=getUsedRam
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#

;------------------------------------------------ SWAP

[showCaptionSwap]
Meter=String
X=#MeterXPos#
Y=#CaptionYRel#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text=#CaptionSWAP#

[showLeftTextSwap]
MeasureName=getTotalSwap
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

[showRightTextSwap]
MeasureName=getFreeSwap
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

[showBarSwap]
MeasureName=getUsedSwap
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineSwap]
MeasureName=getUsedSwap
Meter=Line
X=#MeterXPos#
Y=#HistoYRel#
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
LineCount=1
LineColor=#HistoLineColor#

[showHistogramSwap]
MeasureName=getUsedSwap
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#
