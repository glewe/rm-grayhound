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

; ------------------- Process 1
[showLeftText1]
MeasureName=getProcess1Name
Meter=String
X=#MeterXPos#
Y=#CaptionMarginBottom#
W=#LegendWidth#
AntiAlias=1
ClipString=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Group=Process1

[showRightText1]
MeasureName=getProcess1
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
DynamicVariables=1
Postfix=%
Scale=([getCores]*100000*#ProcessInterval#)
Group=Process1

[showBar1]
MeasureName=setProcess1Bar
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
AntiAlias=1
AutoScale=0
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
Group=Process1

; ------------------- Process 2
[showLeftText2]
MeasureName=getProcess2Name
Meter=String
X=#MeterXPos#
Y=#BarMarginBottom#
W=#LegendWidth#
AntiAlias=1
ClipString=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Group=Process2

[showRightText2]
MeasureName=getProcess2
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
DynamicVariables=1
Postfix=%
Scale=([getCores]*100000*#ProcessInterval#)
Group=Process2

[showBar2]
MeasureName=setProcess2Bar
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
AntiAlias=1
AutoScale=0
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
Group=Process2

; ------------------- Process 3
[showLeftText3]
MeasureName=getProcess3Name
Meter=String
X=#MeterXPos#
Y=#BarMarginBottom#
W=#LegendWidth#
AntiAlias=1
ClipString=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Group=Process3

[showRightText3]
MeasureName=getProcess3
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
DynamicVariables=1
Postfix=%
Scale=([getCores]*100000*#ProcessInterval#)
Group=Process3

[showBar3]
MeasureName=setProcess3Bar
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
AntiAlias=1
AutoScale=0
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
Group=Process3

; ------------------- Process 4
[showLeftText4]
MeasureName=getProcess4Name
Meter=String
X=#MeterXPos#
Y=#BarMarginBottom#
W=#LegendWidth#
AntiAlias=1
ClipString=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Group=Process4

[showRightText4]
MeasureName=getProcess4
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
DynamicVariables=1
Postfix=%
Scale=([getCores]*100000*#ProcessInterval#)
Group=Process4

[showBar4]
MeasureName=setProcess4Bar
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
AntiAlias=1
AutoScale=0
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
Group=Process4

; ------------------- Process 5
[showLeftText5]
MeasureName=getProcess5Name
Meter=String
X=#MeterXPos#
Y=#BarMarginBottom#
W=#LegendWidth#
AntiAlias=1
ClipString=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Group=Process5

[showRightText5]
MeasureName=getProcess5
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
DynamicVariables=1
Postfix=%
Scale=([getCores]*100000*#ProcessInterval#)
Group=Process5

[showBar5]
MeasureName=setProcess5Bar
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
AntiAlias=1
AutoScale=0
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
Group=Process5

; ------------------- Process 6
[showLeftText6]
MeasureName=getProcess6Name
Meter=String
X=#MeterXPos#
Y=#BarMarginBottom#
W=#LegendWidth#
AntiAlias=1
ClipString=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Group=Process6

[showRightText6]
MeasureName=getProcess6
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
DynamicVariables=1
Postfix=%
Scale=([getCores]*100000*#ProcessInterval#)
Group=Process6

[showBar6]
MeasureName=setProcess6Bar
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
AntiAlias=1
AutoScale=0
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
Group=Process6

; ------------------- Process 7
[showLeftText7]
MeasureName=getProcess7Name
Meter=String
X=#MeterXPos#
Y=#BarMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Group=Process7

[showRightText7]
MeasureName=getProcess7
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=0r
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
DynamicVariables=1
Postfix=%
Scale=([getCores]*100000*#ProcessInterval#)
Group=Process7

[showBar7]
MeasureName=setProcess7Bar
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
AntiAlias=1
AutoScale=0
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
Group=Process7

; ------------------- Process 8
[showLeftText8]
MeasureName=getProcess8Name
Meter=String
X=#MeterXPos#
Y=#BarMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Group=Process8

[showRightText8]
MeasureName=getProcess8
Meter=String
X=(#MeterXPos# + 170)
Y=0r
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
DynamicVariables=1
Postfix=%
Scale=([getCores]*100000*#ProcessInterval#)
Group=Process8

[showBar8]
MeasureName=setProcess8Bar
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
AntiAlias=1
AutoScale=0
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
Group=Process8
