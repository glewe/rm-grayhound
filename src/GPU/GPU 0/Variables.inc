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
IconXPos=#IconXPosLeft#
MeterXPos=#MeterXPosLeft#
;IconXPos=#IconXPosRight#
;MeterXPos=#MeterXPosRight#

FontColor=#FontColorGlobal#,255
FontFace=#FontFaceGlobal#
GPUColor=#ColorUsage#,#BarColorTransparency#
GPUHistoLineColor=#ColorUsage#,#LineColorTransparency#
GPUHistoFillColor=#ColorGPU#,#HistoColorTransparency#
GPUMemColor=#ColorMemory#,#BarColorTransparency#
GPUMemHistoLineColor=#ColorGPUMem#,#LineColorTransparency#
GPUMemHistoFillColor=#ColorGPUMem#,#HistoColorTransparency#
GPUFanColor=#ColorFan#,#BarColorTransparency#
GPUFanHistoLineColor=#ColorGPUFan#,#LineColorTransparency#
GPUFanHistoFillColor=#ColorGPUFan#,#HistoColorTransparency#
GPUPowerColor=#ColorPower#,#BarColorTransparency#
GPUPowerHistoLineColor=#ColorPower#,#LineColorTransparency#
GPUPowerHistoFillColor=#ColorPower#,#HistoColorTransparency#
GPUTempColor=#ColorLow#,#BarColorTransparency#
GPUTempHistoLineColor=#ColorTempLow#,#LineColorTransparency#
GPUTempHistoFillColor=#ColorTempLow#,#HistoColorTransparency#
SkinIcon=#IconGPU#

;
; Fan Max and Thresholds
;
MaxGPUFan=2000
MedGPUFan=1000
HiGPUFan=1700

;
; Temperatur Max and Thresholds
;
MaxGPUTemp=100
MedGPUTemp=65
HiGPUTemp=80

;
; Temperature unit
;
TempUnit=C

;
; Captions
;
Caption="GeForce RTX 4090 OC"
CaptionUsage="Usage"
CaptionVram="Memory"
CaptionFan="Fan"
CaptionTemp="Temp"
