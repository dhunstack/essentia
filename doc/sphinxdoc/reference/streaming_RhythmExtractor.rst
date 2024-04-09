:orphan:

Algorithm reference - RhythmExtractor (streaming mode)
======================================================

Inputs
------

 - ``signal`` (*real*) - input signal

Outputs
-------

 - ``bpm`` (*real*) - the tempo estimation [bpm]
 - ``ticks`` (*vector_real*) -  the estimated tick locations [s]
 - ``estimates`` (*vector_real*) - the list of bpm estimates characterizing the bpm distribution for the signal [bpm]
 - ``bpmIntervals`` (*vector_real*) - list of beats interval [s]

Parameters
----------

 - ``frameHop`` (*integer ∈ (0, ∞), default = 1024*) :
     the number of feature frames separating two evaluations
 - ``frameSize`` (*integer ∈ (0, ∞), default = 1024*) :
     the number audio samples used to compute a feature
 - ``hopSize`` (*integer ∈ (0, ∞), default = 256*) :
     the number of audio samples per features
 - ``lastBeatInterval`` (*real ∈ [0, ∞), default = 0.1*) :
     the minimum interval between last beat and end of file [s]
 - ``maxTempo`` (*integer ∈ [60, 250], default = 208*) :
     the fastest tempo to detect [bpm]
 - ``minTempo`` (*integer ∈ [40, 180], default = 40*) :
     the slowest tempo to detect [bpm]
 - ``numberFrames`` (*integer ∈ (0, ∞), default = 1024*) :
     the number of feature frames to buffer on
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``tempoHints`` (*vector_real, default = []*) :
     the optional list of initial beat locations, to favor the detection of pre-determined tempo period and beats alignment [s]
 - ``tolerance`` (*real ∈ [0, ∞), default = 0.24*) :
     the minimum interval between two consecutive beats [s]
 - ``useBands`` (*bool ∈ {true, false}, default = true*) :
     whether or not to use band energy as periodicity function
 - ``useOnset`` (*bool ∈ {true, false}, default = true*) :
     whether or not to use onsets as periodicity function

Description
-----------

This algorithm estimates the tempo in bpm and beat positions given an audio signal. The algorithm combines several periodicity functions and estimates beats using TempoTap and TempoTapTicks. It combines:
- onset detection functions based on high-frequency content (see OnsetDetection)
- complex-domain spectral difference function (see OnsetDetection)
- periodicity function based on energy bands (see FrequencyBands, TempoScaleBands)

Note that this algorithm is outdated in terms of beat tracking accuracy, and it is highly recommended to use RhythmExtractor2013 instead.

Quality: outdated (use RhythmExtractor2013 instead).

An exception is thrown if neither "useOnset" nor "useBands" are enabled (i.e. set to true).


See also
--------

Extractor `(standard) <std_Extractor.html>`__
FrequencyBands `(standard) <std_FrequencyBands.html>`__
FrequencyBands `(streaming) <streaming_FrequencyBands.html>`__
OnsetDetection `(standard) <std_OnsetDetection.html>`__
OnsetDetection `(streaming) <streaming_OnsetDetection.html>`__
RhythmExtractor `(standard) <std_RhythmExtractor.html>`__
RhythmExtractor2013 `(standard) <std_RhythmExtractor2013.html>`__
RhythmExtractor2013 `(streaming) <streaming_RhythmExtractor2013.html>`__
Scale `(standard) <std_Scale.html>`__
Scale `(streaming) <streaming_Scale.html>`__
TempoScaleBands `(standard) <std_TempoScaleBands.html>`__
TempoScaleBands `(streaming) <streaming_TempoScaleBands.html>`__
TempoTap `(standard) <std_TempoTap.html>`__
TempoTap `(streaming) <streaming_TempoTap.html>`__
TempoTapTicks `(standard) <std_TempoTapTicks.html>`__
TempoTapTicks `(streaming) <streaming_TempoTapTicks.html>`__