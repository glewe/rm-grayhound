;==============================================================================
; Grayhound Variables
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
GPUMemColor=#ColorMemory#,#BarColorTransparency#
GPUFanColor=#ColorFan#,#BarColorTransparency#
GPUTempColor=#ColorLow#,#BarColorTransparency#
GPUHistoLineColor=#ColorUsage#,#LineColorTransparency#
GPUHistoFillColor=#ColorGPU#,#HistoColorTransparency#
GPUMemHistoLineColor=#ColorGPUMem#,#LineColorTransparency#
GPUMemHistoFillColor=#ColorGPUMem#,#HistoColorTransparency#
GPUFanHistoLineColor=#ColorGPUFan#,#LineColorTransparency#
GPUFanHistoFillColor=#ColorGPUFan#,#HistoColorTransparency#
GPUTempHistoLineColor=#ColorTempLow#,#LineColorTransparency#
GPUTempHistoFillColor=#ColorTempLow#,#HistoColorTransparency#
SkinIcon=#IconGPU#

;
; Fan Max and Thresholds
;
MaxGPUFan=8000
MedGPUFan=4000
HiGPUFan=6500

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
Caption="GeForce RTX 2080 Ti"
CaptionUsage="Usage"
CaptionVram="VRAM"
CaptionFan="Fan"
CaptionTemp="Temp"
