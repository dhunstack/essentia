:orphan:

Algorithm reference - Vibrato (streaming mode)
==============================================

Inputs
------

 - ``pitch`` (*vector_real*) - the pitch trajectory [Hz].

Outputs
-------

 - ``vibratoFrequency`` (*vector_real*) - estimated vibrato frequency (or speed) [Hz]; zero if no vibrato was detected.
 - ``vibratoExtend`` (*vector_real*) - estimated vibrato extent (or depth) [cents]; zero if no vibrato was detected.

Parameters
----------

 - ``maxExtend`` (*real ∈ (0, ∞), default = 250*) :
     maximum considered vibrato extent [cents]
 - ``maxFrequency`` (*real ∈ (0, ∞), default = 8*) :
     maximum considered vibrato frequency [Hz]
 - ``minExtend`` (*real ∈ (0, ∞), default = 50*) :
     minimum considered vibrato extent [cents]
 - ``minFrequency`` (*real ∈ (0, ∞), default = 4*) :
     minimum considered vibrato frequency [Hz]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 344.531*) :
     sample rate of the input pitch contour

Description
-----------

This algorithm detects the presence of vibrato and estimates its parameters given a pitch contour [Hz]. The result is the vibrato frequency in Hz and the extent (peak to peak) in cents. If no vibrato is detected in a frame, the output of both values is zero.

This algorithm should be given the outputs of a pitch estimator, i.e. PredominantMelody, PitchYinFFT or PitchMelodia and the corresponding sample rate with which it was computed.

The algorithm is an extended version of the vocal vibrato detection in PerdominantMelody.

References:
  [1] J. Salamon and E. Gómez, "Melody extraction from polyphonic music
  signals using pitch contour characteristics," IEEE Transactions on Audio,
  Speech, and Language Processing, vol. 20, no. 6, pp. 1759–1770, 2012.




See also
--------

FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__
PitchMelodia `(standard) <std_PitchMelodia.html>`__
PitchMelodia `(streaming) <streaming_PitchMelodia.html>`__
PitchYin `(standard) <std_PitchYin.html>`__
PitchYin `(streaming) <streaming_PitchYin.html>`__
PitchYinFFT `(standard) <std_PitchYinFFT.html>`__
PitchYinFFT `(streaming) <streaming_PitchYinFFT.html>`__
Vibrato `(standard) <std_Vibrato.html>`__