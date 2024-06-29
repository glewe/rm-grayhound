;==============================================================================
; Grayhound Measure Configurations
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

[MeasureMediaPlayer]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#MusicPlayer#
PlayerType=FILE

[MeasureTrack]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=TITLE

[MeasureAlbum]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=ALBUM

[MeasureArtist]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=ARTIST

[MeasureCover]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=COVER

[MeasureTimeDuration]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=DURATION

[MeasureTimePosition]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=POSITION

[MeasureTimeProgress]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=PROGRESS

[MeasureState]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=STATE

[MeasurePlayPauseButton]
Measure=Plugin
Plugin=NowPlaying.dll
PlayerName=[MeasureMediaPlayer]
PlayerType=STATE
Substitute="0":"#@#\Images\play.png","1":"#@#\Images\pause.png","2":"#@#\Images\play.png"

[MeasureRepeat]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=REPEAT

[MeasureShuffle]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=SHUFFLE

[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
Port=Output
FFTSize=1024
FFTAttack=15
FFTDecay=250
Bands=22

[MeasureBand0]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=0

[MeasureBand1]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=1

[MeasureBand2]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=2

[MeasureBand3]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=3

[MeasureBand4]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=4

[MeasureBand5]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=5

[MeasureBand6]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=6

[MeasureBand7]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=7

[MeasureBand8]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=8

[MeasureBand9]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=9

[MeasureBand10]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=10

[MeasureBand11]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=11

[MeasureBand12]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=12

[MeasureBand13]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=13

[MeasureBand14]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=14

[MeasureBand15]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=15

[MeasureBand16]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=16

[MeasureBand17]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=17

[MeasureBand18]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=18

[MeasureBand19]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=19

[MeasureBand20]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=20

[MeasureBand21]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudio
Type=Band
BandIdx=21
