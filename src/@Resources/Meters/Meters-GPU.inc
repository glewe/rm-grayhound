;==============================================================================
; Grayhound Meter Settings
;
; @category: Rainmeter
; @package: Grayhound
; @version: 5.6.1
; @date: 2024-06-29
; @author: George Lewe <george@lewe.com>
; @copyright: 2012-2024 by George Lewe
; @link: http://www.lewe.com
; @license: https://creativecommons.org/licenses/by-nc-sa/3.0/
; @documentation: https://lewe.gitbook.io/rainmeter-skin-grayhound
;

; ------------------------------------- GPU Caption

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

; ------------------------------------- GPU Usage

[showLeftTextGPUUsage]
Meter=String
MeasureName=MeasureGPUUsage
X=#MeterXPos#
Y=#LegendYRel#
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text=%1 %
DynamicVariables=1

[showRightTextGPUUsage]
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=#LegendYRel#
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
Text=""

[showBarGPUUsage]
Meter=Bar
MeasureName=MeasureGPUUsage
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#GPUColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
DynamicVariables=1

[showLineGPUUsage]
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
DynamicVariables=1

[showHistogramGPUUsage]
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
DynamicVariables=1

; ------------------------------------- GPU VRAM

[showCaptionVRAM]
Meter=String
X=#MeterXPos#
Y=#CaptionYRel#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text="VRAM"

[showLeftTextVRAM]
Meter=String
MeasureName=MeasureGPURAMTotal
;MeasureName=MeasureGPUMemAlloc
X=#MeterXPos#
Y=#LegendYRel#
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text="Total: %1"
DynamicVariables=1

[showRightTextVRAM]
Meter=String
MeasureName=MeasureGPURAMFree
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
Text="Free: %1"

[showBarVRAM]
Meter=Bar
MeasureName=MeasureGPUMemUsedPercent
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#GPUMemColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
DynamicVariables=1

[showLineVRAM]
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
DynamicVariables=1

[showHistogramVRAM]
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
DynamicVariables=1

;------------------------------------------------ GPU Fan

[showCaptionFan]
Meter=String
X=#MeterXPos#
Y=#CaptionYRel#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text="FAN"

[showLeftTextGPUFan]
Meter=String
X=#MeterXPos#
Y=#LegendYRel#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text=""

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

; ------------------------------------- GPU Power

[showCaptionPower]
Meter=String
X=#MeterXPos#
Y=#CaptionYRel#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text="POWER"

[showLeftTextGPUPower]
Meter=String
X=#MeterXPos#
Y=#LegendYRel#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text=""

[showRightTextGPUPower]
MeasureName=MeasureGPUPower
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
Text="%1 W"

[showBarGPUPower]
MeasureName=MeasureGPUPower
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#GPUPowerColor#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineGPUPower]
MeasureName=MeasureGPUPower
Meter=Line
X=#MeterXPos#
Y=#HistoYRel#
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
LineCount=1
LineColor=#GPUPowerHistoLineColor#

[showHistogramGPUPower]
MeasureName=MeasureGPUPower
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#GPUPowerHistoFillColor#
