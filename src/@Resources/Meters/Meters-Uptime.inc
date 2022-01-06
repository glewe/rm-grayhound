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
