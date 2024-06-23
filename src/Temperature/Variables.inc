;==============================================================================
; Grayhound Variables
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

[Variables]
;
; Skin settings
;
;IconXPos=#IconXPosLeft#
;MeterXPos=#MeterXPosLeft#
;TrackXPos=#TrackXPosLeft#
IconXPos=#IconXPosRight#
MeterXPos=#MeterXPosRight#
TrackXPos=#TrackXPosRight#

BarColor=#ColorTemp#,#BarColorTransparency#
FontColor=#FontColorGlobal#
FontFace=#FontFaceGlobal#
HistoLineColor=#ColorTemp#,#LineColorTransparency#
HistoFillColor=#ColorTemp#,#HistoColorTransparency#
SkinIcon=#IconTemp#

;
; Temperature unit
;
TempUnit=C

;
; Temperature scale maximum
;
MaxCPU=100
MaxGPU=100
MaxHD=100
MaxSYS=100

;
; Temperature Thresholds
; These values define when the color turns
;
HiSYS=70
MedSYS=50

HiCPU=90
MedCPU=60

HiGPU=80
MedGPU=60

HiHD=80
MedHD=60

;
; Captions
;
CaptionTemp="TEMPERATURE"
CaptionSYS="SYSTEM"
CaptionGPU="GPU"
CaptionCPU="CPU"
CaptionHD1="SSD 1"
CaptionHD2="SSD 2"
