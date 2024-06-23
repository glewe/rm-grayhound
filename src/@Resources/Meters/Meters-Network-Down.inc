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

[showNetInLegendRight]
MeasureName=getDownload
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=#LegendYRel#
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
NumOfDecimals=1
Text="%1B"

[showNetInBar]
MeasureName=getDownload
Meter=Bar
X=#MeterXPos#
Y=#CanvasHeight#
W=#MeterWidth#
H=#BarHeight#
Autoscale=0
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showNetInLine]
MeasureName=getDownload
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

[showNetInHistogram]
MeasureName=getDownload
Meter=Histogram
X=#MeterXPos#
Y=#MeterYPos#
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#
