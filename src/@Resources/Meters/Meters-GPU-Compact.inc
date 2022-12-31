;------------------------------------------------ Caption

[showCaptionGPU]
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

;------------------------------------------------ Usage

[showLeftTextUsage]
Meter=String
X=#MeterXPos#
Y=#CaptionMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text=#CaptionUsage#

[showRightTextUsage]
MeasureName=MeasureGPUUsage
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
Text="%1 %"

[showBarUsage]
MeasureName=MeasureGPUUsage
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#GPUColor#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineUsage]
MeasureName=MeasureGPUUsage
Meter=Line
X=#MeterXPos#
Y=#HistoYRel#
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
LineCount=1
LineColor=#GPUHistoLineColor#

[showHistogramUsage]
MeasureName=MeasureGPUUsage
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#GPUHistoFillColor#

;------------------------------------------------ VRAM

[showLeftTextVram]
Meter=String
X=#MeterXPos#
Y=#HistoMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text=#CaptionVram#

[showRightTextVram]
MeasureName=MeasureGPUMemAlloc
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
Text="%1 GB"

[showBarVram]
MeasureName=MeasureGPUMemUsedPercent
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#GPUMemColor#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineVram]
MeasureName=MeasureGPUMemUsedPercent
Meter=Line
X=#MeterXPos#
Y=#HistoYRel#
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
LineCount=1
LineColor=#GPUMemHistoLineColor#

[showHistogramVram]
MeasureName=MeasureGPUMemUsedPercent
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#GPUMemHistoFillColor#

;------------------------------------------------ GPU Fan

[showLeftTextGPUFan]
Meter=String
X=#MeterXPos#
Y=#HistoMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text="Fan"

[showRightTextGPUFan]
MeasureName=MeasureGPUFan
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

[showBarGPUFan]
MeasureName=MeasureGPUFan
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#GPUFanColor#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineGPUFan]
MeasureName=MeasureGPUFan
Meter=Line
X=#MeterXPos#
Y=#HistoYRel#
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
LineCount=1
LineColor=#GPUFanHistoLineColor#

[showHistogramGPUFan]
MeasureName=MeasureGPUFan
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#GPUFanHistoFillColor#

;------------------------------------------------ GPU Temp

[showLeftTextGPUTemp]
Meter=String
X=#MeterXPos#
Y=#HistoMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text="Temp"

[showRightTextGPUTemp]
MeasureName=MeasureGPUTemp
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

[showBarGPUTemp]
MeasureName=MeasureGPUTemp
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#GPUTempColor#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineGPUTemp]
MeasureName=MeasureGPUTemp
Meter=Line
X=#MeterXPos#
Y=#HistoYRel#
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
LineCount=1
LineColor=#GPUTempHistoLineColor#

[showHistogramGPUTemp]
MeasureName=MeasureGPUTemp
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#GPUTempHistoFillColor#
