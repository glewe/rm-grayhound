;==============================================================================
; Grayhound Global Settings
; 
; @category: Rainmeter
; @package: Grayhound
; @version: 5.5.0
; @date: 2022-12-31
; @author: George Lewe <george@lewe.com>
; @copyright: 2012-2023 by George Lewe
; @link: http://www.lewe.com
; @license: https://creativecommons.org/licenses/by-nc-sa/3.0/
;

[Variables]
;
; Global colors
;
Blue=120,170,210
Green=180,255,180
Magenta=255,160,255
Pink=255,200,200
Red=255,124,124
White=255,255,255
Yellow=255,200,100

;
; Static Skin colors
;
TopLineColor=#White#,60
BarColorTransparency=180
LineColorTransparency=180
HistoColorTransparency=60
BarColorBgFrom=#White#,60
BarColorBgTo=#White#,40
FontColorGlobal=#White#,200

;
; Variable Skin Colors
;
ColorDisk=#Green#
ColorMemory=#Magenta#
ColorFan=#Green#
ColorFanLow=#Green#
ColorFanMed=#Yellow#
ColorFanHi=#Red#
ColorProcess=#Pink#
ColorTemp=#Blue#
ColorTempLow=#Blue#
ColorTempMed=#Yellow#
ColorTempHi=#Red#
ColorUptime=#Blue#
ColorUsage=#Red#

;
; Global font
;
FontFaceGlobal=Tahoma

;
; Global options
;
BarOrientation=Horizontal
ShowIcons=1

;
; AIO skins options
;
IconAIO=#@#\Images\aio-corsair.png

;
; CPU skins options
;
ColorCPU=#UsageColor#
IconCPU=#@#\Images\cpu.png

;
; Disk skins options
;
ColorDisk=#DiskColor#
IconDisk=#@#\Images\disk.png

;
; Fan skins options
;
ColorFanLow=#Green#
ColorFanMed=#Yellow#
ColorFanHi=#Red#
IconFan=#@#\Images\fan.png

;
; GPU skin options
;
ColorGPU=#Red#
ColorGPUMem=#Magenta#
ColorGPUFan=#Green#
IconGPU=#@#\Images\gpu.png

;
; Memory skins options
;
ColorMemory=#Magenta#
IconMemory=#@#\Images\memory.png

;
; Music skins options
;
CoverAlpha=80
IconMusic=#@#\Images\sound.png

;
; Network skins options
;
ColorNetwork=#Yellow#
IconNetwork=#@#\Images\network.png
; 200 Mbit (change to speed in your environment)
DownMaxNetwork=(240 * 1048576)
; 20 Mbit (change to speed in your environment)
UpMaxNetwork=(24 * 1048576)

;
; Processes skin options
;
ColorProcesses=#Pink#
IconProcesses=#@#\Images\process.png

;
; RecycleBin options
;
ColorRecycleBinCount=#Yellow#
ColorRecycleBinSize=#Red#
IconRecycleBinEmpty=#@#\Images\recyclebin-empty.png
IconRecycleBinFull=#@#\Images\recyclebin-full.png

;
; Sidebar skins options
;
SidebarAlpha=128
DesktopHeight=2160
DesktopWidth=3840

;
; Temperature skins options
;
ColorTempLow=#Blue#
ColorTempMed=#Yellow#
ColorTempHi=#Red#
IconTemp=#@#\Images\temperature.png

;
; Uptime skins options
;
ColorUptime=#Blue#
IconUptime=#@#\Images\clock.png
