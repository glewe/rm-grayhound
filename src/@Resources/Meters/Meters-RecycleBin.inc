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
LeftMouseUpAction=[!CommandMeasure getItems "OpenBin"]
RightMouseUpAction=[!CommandMeasure getItems "EmptyBin"]
ToolTipText=Left-click to open Recycle Bin#CRLF#Right-click to empty

; ------------------- Items
[showTextItems]
MeasureName=getItems
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=#CaptionMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
DynamicVariables=1
Text=%1 items
Scale=1
LeftMouseUpAction=[!CommandMeasure getItems "OpenBin"]
RightMouseUpAction=[!CommandMeasure getItems "EmptyBin"]
ToolTipText=Left-click to open Recycle Bin#CRLF#Right-click to empty

[showBarItems]
MeasureName=getItems
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
AntiAlias=1
AutoScale=1
BarColor=#BarColorCount#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
LeftMouseUpAction=[!CommandMeasure getItems "OpenBin"]
RightMouseUpAction=[!CommandMeasure getItems "EmptyBin"]
ToolTipText=Left-click to open Recycle Bin#CRLF#Right-click to empty

; ------------------- Size
[showTextSize]
MeasureName=getSize
Meter=String
X=(#MeterXPos# + #MeterWidth#)
Y=#BarMarginBottom#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right
DynamicVariables=1
Text=%1B
AutoScale=1
LeftMouseUpAction=[!CommandMeasure getItems "OpenBin"]
RightMouseUpAction=[!CommandMeasure getItems "EmptyBin"]
ToolTipText=Left-click to open Recycle Bin#CRLF#Right-click to empty

[showBarSize]
MeasureName=getSize
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
AntiAlias=1
AutoScale=1
BarColor=#BarColorSize#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#
LeftMouseUpAction=[!CommandMeasure getItems "OpenBin"]
RightMouseUpAction=[!CommandMeasure getItems "EmptyBin"]
ToolTipText=Left-click to open Recycle Bin#CRLF#Right-click to empty
