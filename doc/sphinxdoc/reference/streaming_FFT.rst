:orphan:

Algorithm reference - FFT (streaming mode)
==========================================

Inputs
------

 - ``frame`` (*vector_real*) - the input audio frame

Outputs
-------

 - ``fft`` (*vector_complex*) - the FFT of the input frame

Parameters
----------

 - ``size`` (*integer ∈ [1, ∞), default = 1024*) :
     the expected size of the input frame. This is purely optional and only targeted at optimizing the creation time of the FFT object

Description
-----------

This algorithm computes the positive complex short-term Fourier transform (STFT) of an array using the FFT algorithm. The resulting fft has a size of (s/2)+1, where s is the size of the input frame.
At the moment FFT can only be computed on frames which size is even and non zero, otherwise an exception is thrown.


References:
  [1] Fast Fourier transform - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Fft

  [2] Fast Fourier Transform -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/FastFourierTransform.html


See also
--------

FFT `(standard) <std_FFT.html>`__