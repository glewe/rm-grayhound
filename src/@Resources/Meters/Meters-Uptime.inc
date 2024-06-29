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

[showUptime]
Meter=STRING
MeasureName=getUptime
X=(#MeterXPos# + (#MeterWidth#/2))
Y=#CaptionMarginBottom#
W=#MeterWidth#
;H=25
AntiAlias=1
FontColor=#ColorUptime#
FontFace=Digit
FontSize=#UptimeFontSize#
StringAlign=Center
