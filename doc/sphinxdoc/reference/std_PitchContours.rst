:orphan:

Algorithm reference - PitchContours (standard mode)
===================================================

Inputs
------

 - ``peakBins`` (*vector_vector_real*) - frame-wise array of cent bins corresponding to pitch salience function peaks
 - ``peakSaliences`` (*vector_vector_real*) - frame-wise array of values of salience function peaks

Outputs
-------

 - ``contoursBins`` (*vector_vector_real*) - array of frame-wise vectors of cent bin values representing each contour
 - ``contoursSaliences`` (*vector_vector_real*) - array of frame-wise vectors of pitch saliences representing each contour
 - ``contoursStartTimes`` (*vector_real*) - array of start times of each contour [s]
 - ``duration`` (*real*) - time duration of the input signal [s]

Parameters
----------

 - ``binResolution`` (*real ∈ (0, ∞), default = 10*) :
     salience function bin resolution [cents]
 - ``hopSize`` (*integer ∈ (0, ∞), default = 128*) :
     the hop size with which the pitch salience function was computed
 - ``minDuration`` (*real ∈ (0, ∞), default = 100*) :
     the minimum allowed contour duration [ms]
 - ``peakDistributionThreshold`` (*real ∈ [0, 2], default = 0.9*) :
     allowed deviation below the peak salience mean over all frames (fraction of the standard deviation)
 - ``peakFrameThreshold`` (*real ∈ [0, 1], default = 0.9*) :
     per-frame salience threshold factor (fraction of the highest peak salience in a frame)
 - ``pitchContinuity`` (*real ∈ [0, ∞), default = 27.5625*) :
     pitch continuity cue (maximum allowed pitch change durig 1 ms time period) [cents]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``timeContinuity`` (*real ∈ (0, ∞), default = 100*) :
     time continuity cue (the maximum allowed gap duration for a pitch contour) [ms]

Description
-----------

This algorithm tracks a set of predominant pitch contours of an audio signal. This algorithm is intended to receive its "frequencies" and "magnitudes" inputs from the PitchSalienceFunctionPeaks algorithm outputs aggregated over all frames in the sequence. The output is a vector of estimated melody pitch values.

When input vectors differ in size, an exception is thrown. Input vectors must not contain negative salience values otherwise an exception is thrown. Avoiding erroneous peak duplicates (peaks of the same cent bin) is up to the user's own control and is highly recommended, but no exception will be thrown.

Recommended processing chain: (see [1]): EqualLoudness -> frame slicing with sample rate = 44100, frame size = 2048, hop size = 128 -> Windowing with Hann, x4 zero padding -> Spectrum -> SpectralPeaks -> PitchSalienceFunction (10 cents bin resolution) -> PitchSalienceFunctionPeaks.


References:
  [1] J. Salamon and E. Gómez, "Melody extraction from polyphonic music
  signals using pitch contour characteristics," IEEE Transactions on Audio,
  Speech, and Language Processing, vol. 20, no. 6, pp. 1759–1770, 2012.



See also
--------

EqualLoudness `(standard) <std_EqualLoudness.html>`__
EqualLoudness `(streaming) <streaming_EqualLoudness.html>`__
Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__
PitchContours `(streaming) <streaming_PitchContours.html>`__
PitchSalience `(standard) <std_PitchSalience.html>`__
PitchSalience `(streaming) <streaming_PitchSalience.html>`__
PitchSalienceFunction `(standard) <std_PitchSalienceFunction.html>`__
PitchSalienceFunction `(streaming) <streaming_PitchSalienceFunction.html>`__
PitchSalienceFunctionPeaks `(standard) <std_PitchSalienceFunctionPeaks.html>`__
PitchSalienceFunctionPeaks `(streaming) <streaming_PitchSalienceFunctionPeaks.html>`__
SpectralPeaks `(standard) <std_SpectralPeaks.html>`__
SpectralPeaks `(streaming) <streaming_SpectralPeaks.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__
Windowing `(standard) <std_Windowing.html>`__
Windowing `(streaming) <streaming_Windowing.html>`__