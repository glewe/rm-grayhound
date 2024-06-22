; ------------------------------------- Caption
[showCaptionCore]
Meter=String
MeasureName=getCPUDisplayName
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
Text="%1"

; ------------------------------------- Core Spectrum
[showBarCore1]
MeasureName=getCpu#Core1Number#
Meter=Bar
X=#MeterXPos#
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore2]
MeasureName=getCpu#Core2Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*1)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore3]
MeasureName=getCpu#Core3Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*2)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore4]
MeasureName=getCpu#Core4Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*3)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore5]
MeasureName=getCpu#Core5Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*4)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore6]
MeasureName=getCpu#Core6Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*5)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore7]
MeasureName=getCpu#Core7Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*6)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore8]
MeasureName=getCpu#Core8Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*7)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore9]
MeasureName=getCpu#Core9Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*8)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore10]
MeasureName=getCpu#Core10Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*9)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore11]
MeasureName=getCpu#Core11Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*10)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore12]
MeasureName=getCpu#Core12Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*11)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore13]
MeasureName=getCpu#Core13Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*12)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore14]
MeasureName=getCpu#Core14Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*13)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore15]
MeasureName=getCpu#Core15Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*14)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

[showBarCore16]
MeasureName=getCpu#Core16Number#
Meter=Bar
X=(#MeterXPos# + (#CoreBarWidth#+#CoreBarXDist#)*15)
Y=#CoreSpectrumYPos#
W=#CoreBarWidth#
H=#CoreBarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Vertical

; ------------------------------------- Percentage
[showNetOutCaption]
Meter=String
X=#MeterXPos#
Y=#CoreBarYRel#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text=""

[showLeftTextCore]
MeasureName=getCpu#Core0Number#
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

; ------------------------------------- CPU Bar
[showBarCPU]
MeasureName=getCpu#Core0Number#
Meter=Bar
X=#MeterXPos#
Y=#BarYRel#
W=#MeterWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=#BarOrientation#

; ------------------------------------- CPU Line
[showLineCPU]
MeasureName=getCpu#Core0Number#
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

[showHistogramCPU]
MeasureName=getCpu#Core0Number#
Meter=Histogram
X=#MeterXPos#
Y=0r
H=#HistoHeight#
W=#MeterWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#
