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

[getTotalTraffic]
Measure=NetTotal

[getDownload]
Measure=NetIn
MinValue=0
MaxValue=#DownMaxNetwork#

[getUpload]
Measure=NetOut
MinValue=0
MaxValue=#UpMaxNetwork#
