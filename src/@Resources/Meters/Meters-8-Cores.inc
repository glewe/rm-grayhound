;==============================================================================
; Grayhound Meter Settings
;
; @category: Rainmeter
; @package: Grayhound
; @version: 5.6.0
; @date: 2024-06-22
; @author: George Lewe <george@lewe.com>
; @copyright: 2012-2024 by George Lewe
; @link: http://www.lewe.com
; @license: https://creativecommons.org/licenses/by-nc-sa/3.0/
; @documentation: https://lewe.gitbook.io/rainmeter-skin-grayhound
;

; ------------------------------------- Core 1

[showCaptionCpu1]
MeasureName=getCpuDisplayName
Meter=String
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
MeasureName=getCpuDisplayName
Meter=String
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

; ------------------------------------- Core 3

[showCaptionCpu3]
MeasureName=getCpuDisplayName
Meter=String
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
Text="%1 (3)"

[showLeftTextCpu3]
MeasureName=getCpu3
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

[showBarCpu3]
MeasureName=getCpu3
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineCpu3]
MeasureName=getCpu3
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

[showHistogramCpu3]
MeasureName=getCpu3
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#

; ------------------------------------- Core 4

[showCaptionCpu4]
MeasureName=getCpuDisplayName
Meter=String
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
Text="%1 (4)"

[showLeftTextCpu4]
MeasureName=getCpu4
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

[showBarCpu4]
MeasureName=getCpu4
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineCpu4]
MeasureName=getCpu4
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

[showHistogramCpu4]
MeasureName=getCpu4
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#

; ------------------------------------- Core 5

[showCaptionCpu5]
MeasureName=getCpuDisplayName
Meter=String
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
Text="%1 (5)"

[showLeftTextCpu5]
MeasureName=getCpu5
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

[showBarCpu5]
MeasureName=getCpu5
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineCpu5]
MeasureName=getCpu5
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

[showHistogramCpu5]
MeasureName=getCpu5
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#

; ------------------------------------- Core 6

[showCaptionCpu6]
MeasureName=getCpuDisplayName
Meter=String
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
Text="%1 (6)"

[showLeftTextCpu6]
MeasureName=getCpu6
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

[showBarCpu6]
MeasureName=getCpu6
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineCpu6]
MeasureName=getCpu6
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

[showHistogramCpu6]
MeasureName=getCpu6
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#

; ------------------------------------- Core 7

[showCaptionCpu7]
MeasureName=getCpuDisplayName
Meter=String
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
Text="%1 (7)"

[showLeftTextCpu7]
MeasureName=getCpu7
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

[showBarCpu7]
MeasureName=getCpu7
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineCpu7]
MeasureName=getCpu7
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

[showHistogramCpu7]
MeasureName=getCpu7
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#

; ------------------------------------- Core 8

[showCaptionCpu8]
MeasureName=getCpuDisplayName
Meter=String
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
Text="%1 (8)"

[showLeftTextCpu8]
MeasureName=getCpu4
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

[showBarCpu8]
MeasureName=getCpu8
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showLineCpu8]
MeasureName=getCpu8
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

[showHistogramCpu8]
MeasureName=getCpu8
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#
