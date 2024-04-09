:orphan:

Algorithm reference - MultiPitchMelodia (streaming mode)
========================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``pitch`` (*vector_vector_real*) - the estimated pitch values per frames [Hz]

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

Description
-----------

This algorithm estimates multiple fundamental frequency contours from an audio signal. It is a multi pitch version of the MELODIA algorithm described in [1]. While the algorithm is originally designed to extract melody in polyphonic music, this implementation is adapted for multiple sources. The approach is based on the creation and characterization of pitch contours, time continuous sequences of pitch candidates grouped using auditory streaming cues. To this end, PitchSalienceFunction, PitchSalienceFunctionPeaks, PitchContours, and PitchContoursMonoMelody algorithms are employed. It is strongly advised to use the default parameter values which are optimized according to [1] (where further details are provided) except for minFrequency, maxFrequency, and voicingTolerance, which will depend on your application.

The output is a vector of estimated melody pitch values and a vector of confidence values.


References:
  [1] J. Salamon and E. Gómez, "Melody extraction from polyphonic music
  signals using pitch contour characteristics," IEEE Transactions on Audio,
  Speech, and Language Processing, vol. 20, no. 6, pp. 1759–1770, 2012.

  [2] http://mtg.upf.edu/technologies/melodia

  [3] http://www.justinsalamon.com/melody-extraction



See also
--------

MultiPitchMelodia `(standard) <std_MultiPitchMelodia.html>`__
PitchContours `(standard) <std_PitchContours.html>`__
PitchContours `(streaming) <streaming_PitchContours.html>`__
PitchContoursMonoMelody `(standard) <std_PitchContoursMonoMelody.html>`__
PitchContoursMonoMelody `(streaming) <streaming_PitchContoursMonoMelody.html>`__
PitchSalience `(standard) <std_PitchSalience.html>`__
PitchSalience `(streaming) <streaming_PitchSalience.html>`__
PitchSalienceFunction `(standard) <std_PitchSalienceFunction.html>`__
PitchSalienceFunction `(streaming) <streaming_PitchSalienceFunction.html>`__
PitchSalienceFunctionPeaks `(standard) <std_PitchSalienceFunctionPeaks.html>`__
PitchSalienceFunctionPeaks `(streaming) <streaming_PitchSalienceFunctionPeaks.html>`__