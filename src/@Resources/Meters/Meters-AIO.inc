;------------------------------------------------ Caption

[showCaption]
Meter=String
X=#MeterXPos#
Y=#CaptionYPos#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text=#Caption#

;------------------------------------------------ Fan 1

[showLeftTextFan1]
Meter=String
X=#MeterXPos#
Y=#CaptionMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text=#CaptionFan1#

[showRightTextFan1]
MeasureName=getAIOFan1
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
Text="%1 rpm"

[showBarFan1]
MeasureName=getAIOFan1
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#ColorFan#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineFan1]
MeasureName=getAIOFan1
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

[showHistogramFan1]
MeasureName=getAIOFan1
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#

;------------------------------------------------ Fan 2

[showLeftTextFan2]
Meter=String
X=#MeterXPos#
Y=#HistoMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text=#CaptionFan2#

[showRightTextFan2]
MeasureName=getAIOFan2
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
Text="%1 rpm"

[showBarFan2]
MeasureName=getAIOFan2
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#ColorFan#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineFan2]
MeasureName=getAIOFan2
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

[showHistogramFan2]
MeasureName=getAIOFan2
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#

;------------------------------------------------ CPU Pump

[showLeftTextCPUPump]
Meter=String
X=#MeterXPos#
Y=#HistoMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text=#CaptionCPUPump#

[showRightTextCPUPump]
MeasureName=getCPUPump
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
Text="%1 rpm"

[showBarCPUPump]
MeasureName=getCPUPump
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#ColorFan#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineCPUPump]
MeasureName=getCPUPump
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

[showHistogramCPUPump]
MeasureName=getCPUPump
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#

;------------------------------------------------ CPU Coolant Temperature

[showLeftTextCPUCoolant]
Meter=String
X=#MeterXPos#
Y=#HistoMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text=#CaptionCPUCoolant#

[showRightTextCPUCoolant]
MeasureName=getCPUCoolantTemp
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
Text="%1 [\x00B0]C"

[showBarCPUCoolant]
MeasureName=getCPUCoolantTemp
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#ColorTemp#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineCPUCoolant]
MeasureName=getCPUCoolantTemp
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

[showHistogramCPUCoolant]
MeasureName=getCPUCoolantTemp
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#

