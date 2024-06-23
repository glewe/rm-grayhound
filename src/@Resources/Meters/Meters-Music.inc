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

[showCover]
Meter=Image
MeterStyle=StyleMusic#Variant#Icon
MeasureName=MeasureCover
X=#MeterXPos#
Y=#CoverYPos#
W=#MeterWidth#
ImageAlpha=#CoverAlpha#
;LeftMouseUpAction=!CommandMeasure "MeasureMediaPlayer" "OpenPlayer"
;ToolTipTitle=Open Player

;
; Track Info
;
[showArtist]
Meter=String
MeasureName=MeasureArtist
X=#TrackXPos#
Y=#BarYRel#
W=#TrackWidth#
AntiAlias=1
ClipString=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold

[showTrack]
Meter=String
MeasureName=MeasureTrack
X=#TrackXPos#
Y=#BarYRel#
W=#TrackWidth#
AntiAlias=1
ClipString=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left

;
; Spectrum Analyzer
;
[MeterBand0]
Meter=Bar
MeasureName=MeasureBand0
X=#TrackXPos#
Y=#SpectrumYRel#
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand1]
Meter=Bar
MeasureName=MeasureBand1
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand2]
Meter=Bar
MeasureName=MeasureBand2
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand3]
Meter=Bar
MeasureName=MeasureBand3
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand4]
Meter=Bar
MeasureName=MeasureBand4
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand5]
Meter=Bar
MeasureName=MeasureBand5
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand6]
Meter=Bar
MeasureName=MeasureBand6
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand7]
Meter=Bar
MeasureName=MeasureBand7
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand8]
Meter=Bar
MeasureName=MeasureBand8
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand9]
Meter=Bar
MeasureName=MeasureBand9
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand10]
Meter=Bar
MeasureName=MeasureBand10
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand11]
Meter=Bar
MeasureName=MeasureBand11
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand12]
Meter=Bar
MeasureName=MeasureBand12
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand13]
Meter=Bar
MeasureName=MeasureBand13
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand14]
Meter=Bar
MeasureName=MeasureBand14
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand15]
Meter=Bar
MeasureName=MeasureBand15
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand16]
Meter=Bar
MeasureName=MeasureBand16
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand17]
Meter=Bar
MeasureName=MeasureBand17
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand18]
Meter=Bar
MeasureName=MeasureBand18
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand19]
Meter=Bar
MeasureName=MeasureBand19
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand20]
Meter=Bar
MeasureName=MeasureBand20
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

[MeterBand21]
Meter=Bar
MeasureName=MeasureBand21
X=(#SpectrumBarWidth# + #SpectrumBarMargin#)r
Y=0r
W=#SpectrumBarWidth#
H=#SpectrumBarHeight#
BarColor=#SpectrumBarColor#
BarOrientation=Vertical

;
; Progress
;
[showTime]
Meter=STRING
MeasureName=MeasureTimePosition
X=#TrackXPos#
Y=#MeterWidth#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left

[showDuration]
Meter=STRING
MeasureName=MeasureTimeDuration
X=(#TrackXPos# + #TrackWidth#)
Y=0r
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Right

[showProgressBar]
Meter=Bar
MeasureName=MeasureTimeProgress
X=#TrackXPos#
Y=#BarYRel#
W=#TrackWidth#
H=#TrackBarHeight#
BarColor=#ProgressBarColor#
SolidColor=#ProgressBarColorBgFrom#
SolidColor1=#ProgressBarColorBgTo#
BarOrientation=Horizontal

[playPrev]
Meter=Image
ImageName=#@#\Images\prev.png
X=((#MeterWidth#/2)-37)
Y=#BarYRel#
LeftMouseUpAction=[!CommandMeasure "MeasureMediaPlayer" "Previous"]

[playPause]
Meter=Image
ImageName=[MeasurePlayPauseButton]
X=30r
Y=0r
LeftMouseUpAction=[!CommandMeasure "MeasureMediaPlayer" "PlayPause"]
DynamicVariables=1

[playNext]
Meter=Image
ImageName=#@#\Images\next.png
X=30r
Y=0r
LeftMouseUpAction=[!CommandMeasure "MeasureMediaPlayer" "Next"]
