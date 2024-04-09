:orphan:

Algorithm reference - IFFTC (streaming mode)
============================================

Inputs
------

 - ``fft`` (*vector_complex*) - the input frame

Outputs
-------

 - ``frame`` (*vector_complex*) - the complex IFFT of the input frame

Parameters
----------

 - ``normalize`` (*bool ∈ {true, false}, default = true*) :
     whether to normalize the output by the FFT length.
 - ``size`` (*integer ∈ [1, ∞), default = 1024*) :
     the expected size of the input frame. This is purely optional and only targeted at optimizing the creation time of the FFT object

Description
-----------

This algorithm calculates the inverse short-term Fourier transform (STFT) of an array of complex values using the FFT algorithm. The resulting frame has a size equal to the input fft frame size. The inverse Fourier transform is not defined for frames which size is less than 2 samples. Otherwise an exception is thrown.

An exception is thrown if the input's size is not larger than 1.


References:
  [1] Fast Fourier transform - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Fft

  [2] Fast Fourier Transform -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/FastFourierTransform.html


See also
--------

FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__
IFFTC `(standard) <std_IFFTC.html>`__