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

; ------------------------------------- Drive 2

[showDrive2Caption]
MeasureName=getDrive2Label
Meter=String
X=#MeterXPos#
Y=#CaptionYRel#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text=%1 (#Drive2Letter#)

[showDrive2LeftText]
MeasureName=getDrive2Total
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

[showDrive2RightText]
MeasureName=getDrive2Free
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

[showDrive2Bar]
MeasureName=getDrive2Used
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showDrive2Line]
MeasureName=getDrive2Access
Meter=Line
X=#MeterXPos#
Y=#LineYRel#
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=1
Flip=0
LineCount=1
LineColor=#HistoLineColor#

[showDrive2Histogram]
MeasureName=getDrive2Access
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=1
Flip=0
PrimaryColor=#HistoFillColor#

; ------------------------------------- Drive 3

[showDrive3Caption]
MeasureName=getDrive3Label
Meter=String
X=#MeterXPos#
Y=#CaptionYRel#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text=%1 (#Drive3Letter#)

[showDrive3LeftText]
MeasureName=getDrive3Total
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

[showDrive3RightText]
MeasureName=getDrive3Free
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

[showDrive3Bar]
MeasureName=getDrive3Used
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showDrive3Line]
MeasureName=getDrive3Access
Meter=Line
X=#MeterXPos#
Y=#LineYRel#
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=1
Flip=0
LineCount=1
LineColor=#HistoLineColor#

[showDrive3Histogram]
MeasureName=getDrive3Access
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=1
Flip=0
PrimaryColor=#HistoFillColor#

; ------------------------------------- Drive 4

[showDrive4Caption]
MeasureName=getDrive4Label
Meter=String
X=#MeterXPos#
Y=#CaptionYRel#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text=%1 (#Drive4Letter#)

[showDrive4LeftText]
MeasureName=getDrive4Total
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

[showDrive4RightText]
MeasureName=getDrive4Free
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

[showDrive4Bar]
MeasureName=getDrive4Used
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor1=#BarColorBgTo#
BarOrientation=#BarOrientation#

[showDrive4Line]
MeasureName=getDrive4Access
Meter=Line
X=#MeterXPos#
Y=#LineYRel#
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=1
Flip=0
LineCount=1
LineColor=#HistoLineColor#

[showDrive4Histogram]
MeasureName=getDrive4Access
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#MeterHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=1
Flip=0
PrimaryColor=#HistoFillColor#
