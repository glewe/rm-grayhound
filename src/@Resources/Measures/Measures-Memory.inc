;==============================================================================
; Grayhound Measure Configurations
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

[getTotalRam]
Measure=PhysicalMemory
Total=1
UpdateDivider=3600

[getUsedRam]
Measure=PhysicalMemory
UpdateDivider=2

[getFreeRam]
Measure=PhysicalMemory
InvertMeasure=1
UpdateDivider=2

[getTotalSwap]
Measure=SwapMemory
Total=1
UpdateDivider=3600

[getUsedSwap]
Measure=SwapMemory
UpdateDivider=2

[getFreeSwap]
Measure=SwapMemory
InvertMeasure=1
UpdateDivider=2
