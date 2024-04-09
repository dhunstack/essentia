:orphan:

Algorithm reference - PredominantPitchMelodia (streaming mode)
==============================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``pitch`` (*vector_real*) - the estimated pitch values per frames [Hz]
 - ``pitchConfidence`` (*vector_real*) - confidence with which the pitch was detected

Parameters
----------

 - ``binResolution`` (*real ∈ (0, ∞), default = 10*) :
     salience function bin resolution [cents]
 - ``filterIterations`` (*integer ∈ [1, ∞), default = 3*) :
     number of interations for the octave errors / pitch outlier filtering process
 - ``frameSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the frame size for computing pitch saliecnce
 - ``guessUnvoiced`` (*bool ∈ {false, true}, default = false*) :
     guess pitch using non-salient contours when no salient ones are present in a frame
 - ``harmonicWeight`` (*real ∈ (0, 1), default = 0.8*) :
     harmonic weighting parameter (weight decay ratio between two consequent harmonics, =1 for no decay)
 - ``hopSize`` (*integer ∈ (0, ∞), default = 128*) :
     the hop size with which the pitch salience function was computed
 - ``magnitudeCompression`` (*real ∈ (0, 1], default = 1*) :
     magnitude compression parameter (=0 for maximum compression, =1 for no compression)
 - ``magnitudeThreshold`` (*integer ∈ [0, ∞), default = 40*) :
     peak magnitude threshold (maximum allowed difference from the highest peak in dBs)
 - ``maxFrequency`` (*real ∈ [0, ∞), default = 20000*) :
     the maximum allowed frequency for salience function peaks (ignore peaks above) [Hz]
 - ``minDuration`` (*integer ∈ (0, ∞), default = 100*) :
     the minimum allowed contour duration [ms]
 - ``minFrequency`` (*real ∈ [0, ∞), default = 80*) :
     the minimum allowed frequency for salience function peaks (ignore peaks below) [Hz]
 - ``numberHarmonics`` (*integer ∈ [1, ∞), default = 20*) :
     number of considered hamonics
 - ``peakDistributionThreshold`` (*real ∈ [0, 1], default = 0.9*) :
     allowed deviation below the peak salience mean over all frames (fraction of the standard deviation)
 - ``peakFrameThreshold`` (*real ∈ [0, 1], default = 0.9*) :
     per-frame salience threshold factor (fraction of the highest peak salience in a frame)
 - ``pitchContinuity`` (*real ∈ [0, ∞), default = 27.5625*) :
     pitch continuity cue (maximum allowed pitch change durig 1 ms time period) [cents]
 - ``referenceFrequency`` (*real ∈ (0, ∞), default = 55*) :
     the reference frequency for Hertz to cent convertion [Hz], corresponding to the 0th cent bin
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``timeContinuity`` (*integer ∈ (0, ∞), default = 100*) :
     tine continuity cue (the maximum allowed gap duration for a pitch contour) [ms]
 - ``voiceVibrato`` (*bool ∈ {true, false}, default = false*) :
     detect voice vibrato
 - ``voicingTolerance`` (*real ∈ [-1.0, 1.4], default = 0.2*) :
     allowed deviation below the average contour mean salience of all contours (fraction of the standard deviation)

Description
-----------

This algorithm estimates the fundamental frequency of the predominant melody from polyphonic music signals using the MELODIA algorithm. It is specifically suited for music with a predominent melodic element, for example the singing voice melody in an accompanied singing recording. The approach [1] is based on the creation and characterization of pitch contours, time continuous sequences of pitch candidates grouped using auditory streaming cues. It furthermore determines for each frame, if the predominant melody is present or not. To this end, PitchSalienceFunction, PitchSalienceFunctionPeaks, PitchContours, and PitchContoursMelody algorithms are employed. It is strongly advised to use the default parameter values which are optimized according to [1] (where further details are provided) except for minFrequency, maxFrequency, and voicingTolerance, which will depend on your application.

The output is a vector of estimated melody pitch values and a vector of confidence values. The first value corresponds to the beginning of the input signal (time 0).

It is recommended to apply EqualLoudness on the input signal (see [1]) as a pre-processing stage before running this algorithm.

Note that "pitchConfidence" can be negative in the case of "guessUnvoiced"=True: the absolute values represent the confidence, negative values correspond to segments for which non-salient contours where selected, zero values correspond to non-voiced segments.


References:
  [1] J. Salamon and E. Gómez, "Melody extraction from polyphonic music
  signals using pitch contour characteristics," IEEE Transactions on Audio,
  Speech, and Language Processing, vol. 20, no. 6, pp. 1759–1770, 2012.

  [2] http://mtg.upf.edu/technologies/melodia

  [3] http://www.justinsalamon.com/melody-extraction



See also
--------

EqualLoudness `(standard) <std_EqualLoudness.html>`__
EqualLoudness `(streaming) <streaming_EqualLoudness.html>`__
Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__
PitchContours `(standard) <std_PitchContours.html>`__
PitchContours `(streaming) <streaming_PitchContours.html>`__
PitchContoursMelody `(standard) <std_PitchContoursMelody.html>`__
PitchContoursMelody `(streaming) <streaming_PitchContoursMelody.html>`__
PitchSalience `(standard) <std_PitchSalience.html>`__
PitchSalience `(streaming) <streaming_PitchSalience.html>`__
PitchSalienceFunction `(standard) <std_PitchSalienceFunction.html>`__
PitchSalienceFunction `(streaming) <streaming_PitchSalienceFunction.html>`__
PitchSalienceFunctionPeaks `(standard) <std_PitchSalienceFunctionPeaks.html>`__
PitchSalienceFunctionPeaks `(streaming) <streaming_PitchSalienceFunctionPeaks.html>`__
PredominantPitchMelodia `(standard) <std_PredominantPitchMelodia.html>`__