;==============================================================================
; Grayhound Global Settings
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
ColorUsage=#Red#
UsageColor=#Red#

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
ColorDisk=#Green#
IconDisk=#@#\Images\disk.png

;
; Fan skins options
;
ColorFan=#Green#
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
; 1000 Mbit (change to speed in your environment)
DownMaxNetwork=(1000 * 1048576)
; 50 Mbit (change to speed in your environment)
UpMaxNetwork=(50 * 1048576)

;
; Processes skin options
;
ColorProcess=#Pink#
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
ColorTemp=#Blue#
ColorTempLow=#Blue#
ColorTempMed=#Yellow#
ColorTempHi=#Red#
IconTemp=#@#\Images\temperature.png

;
; Uptime skins options
;
ColorUptime=#Blue#
IconUptime=#@#\Images\clock.png
