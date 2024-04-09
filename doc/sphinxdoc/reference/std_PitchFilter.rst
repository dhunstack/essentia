:orphan:

Algorithm reference - PitchFilter (standard mode)
=================================================

Inputs
------

 - ``pitch`` (*vector_real*) - vector of pitch values for the input frames [Hz]
 - ``pitchConfidence`` (*vector_real*) - vector of pitch confidence values for the input frames

Outputs
-------

 - ``pitchFiltered`` (*vector_real*) - vector of corrected pitch values [Hz]

Parameters
----------

 - ``confidenceThreshold`` (*integer ∈ [0, ∞), default = 36*) :
     ratio between the average confidence of the most confident chunk and the minimum allowed average confidence of a chunk
 - ``minChunkSize`` (*integer ∈ [0, ∞), default = 30*) :
     minumum number of frames in non-zero pitch chunks
 - ``useAbsolutePitchConfidence`` (*bool ∈ {true, false}, default = false*) :
     treat negative pitch confidence values as positive (use with melodia guessUnvoiced=True)

Description
-----------

This algorithm corrects the fundamental frequency estimations for a sequence of frames given pitch values together with their confidence values. In particular, it removes non-confident parts and spurious jumps in pitch and applies octave corrections.

They can be computed with the PitchYinFFT, PitchYin, or PredominantPitchMelodia algorithms.
If you use PredominantPitchMelodia with guessUnvoiced=True, set useAbsolutePitchConfidence=True.

The algorithm can be used for any type of monophonic and heterophonic music.

The original algorithm [1] was proposed to be used for Makam music and employs signal"energy" of frames instead of pitch confidence.


References:
  [1] B. Bozkurt, "An Automatic Pitch Analysis Method for Turkish Maqam
  Music," Journal of New Music Research. 37(1), 1-13.



See also
--------

FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__
PitchFilter `(streaming) <streaming_PitchFilter.html>`__
PitchMelodia `(standard) <std_PitchMelodia.html>`__
PitchMelodia `(streaming) <streaming_PitchMelodia.html>`__
PitchYin `(standard) <std_PitchYin.html>`__
PitchYin `(streaming) <streaming_PitchYin.html>`__
PitchYinFFT `(standard) <std_PitchYinFFT.html>`__
PitchYinFFT `(streaming) <streaming_PitchYinFFT.html>`__
PredominantPitchMelodia `(standard) <std_PredominantPitchMelodia.html>`__
PredominantPitchMelodia `(streaming) <streaming_PredominantPitchMelodia.html>`__