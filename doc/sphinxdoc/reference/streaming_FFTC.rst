:orphan:

Algorithm reference - FFTC (streaming mode)
===========================================

Inputs
------

 - ``frame`` (*vector_complex*) - the input frame (complex)

Outputs
-------

 - ``fft`` (*vector_complex*) - the FFT of the input frame

Parameters
----------

 - ``negativeFrequencies`` (*bool ∈ {true, false}, default = false*) :
     returns the full spectrum or just the positive frequencies
 - ``size`` (*integer ∈ [1, ∞), default = 1024*) :
     the expected size of the input frame. This is purely optional and only targeted at optimizing the creation time of the FFT object

Description
-----------

This algorithm computes the complex short-term Fourier transform (STFT) of a complex array using the FFT algorithm. If the `negativeFrequencies` flag is set on, the resulting fft has a size of (s/2)+1, where s is the size of the input frame. Otherwise, output matches the input size.
At the moment FFT can only be computed on frames which size is even and non zero, otherwise an exception is thrown.


References:
  [1] Fast Fourier transform - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Fft

  [2] Fast Fourier Transform -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/FastFourierTransform.html


See also
--------

FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__
FFTC `(standard) <std_FFTC.html>`__