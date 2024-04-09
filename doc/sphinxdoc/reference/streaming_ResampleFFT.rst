:orphan:

Algorithm reference - ResampleFFT (streaming mode)
==================================================

Inputs
------

 - ``input`` (*vector_real*) - input array

Outputs
-------

 - ``output`` (*vector_real*) - output resample array

Parameters
----------

 - ``inSize`` (*integer ∈ [1, ∞), default = 128*) :
     the size of the input sequence. It needs to be even-sized.
 - ``outSize`` (*integer ∈ [1, ∞), default = 128*) :
     the size of the output sequence. It needs to be even-sized.

Description
-----------

This algorithm resamples a sequence using FFT/IFFT. The input and output sizes must be an even number. The algorithm is a counterpart of the resample function in SciPy.


See also
--------

FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__
IFFT `(standard) <std_IFFT.html>`__
IFFT `(streaming) <streaming_IFFT.html>`__
ResampleFFT `(standard) <std_ResampleFFT.html>`__