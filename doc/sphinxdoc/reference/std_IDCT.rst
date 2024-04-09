:orphan:

Algorithm reference - IDCT (standard mode)
==========================================

Inputs
------

 - ``dct`` (*vector_real*) - the discrete cosine transform

Outputs
-------

 - ``idct`` (*vector_real*) - the inverse cosine transform of the input array

Parameters
----------

 - ``dctType`` (*integer ∈ [2, 3], default = 2*) :
     the DCT type
 - ``inputSize`` (*integer ∈ [1, ∞), default = 10*) :
     the size of the input array
 - ``liftering`` (*integer ∈ [0, ∞), default = 0*) :
     the liftering coefficient. Use '0' to bypass it
 - ``outputSize`` (*integer ∈ [1, ∞), default = 10*) :
     the number of output coefficients

Description
-----------

This algorithm computes the Inverse Discrete Cosine Transform of an array.
It can be configured to perform the inverse DCT-II form, with the 1/sqrt(2) scaling factor for the first coefficient or the inverse DCT-III form based on the HTK implementation.

IDCT can be used to compute smoothed Mel Bands. In order to do this:

  - compute MFCC
  - smoothedMelBands = 10^(IDCT(MFCC)/20)

Note: The second step assumes that 'logType' = 'dbamp' was used to compute MFCCs, otherwise that formula should be changed in order to be consistent.

Note: The 'inputSize' parameter is only used as an optimization when the algorithm is configured. The IDCT will automatically adjust to the size of any input.


References:
  [1] Discrete cosine transform - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Discrete_cosine_transform 
  [2] HTK book, chapter 5.6 ,
  http://speech.ee.ntu.edu.tw/homework/DSP_HW2-1/htkbook.pdf


See also
--------

DCT `(standard) <std_DCT.html>`__
DCT `(streaming) <streaming_DCT.html>`__
IDCT `(streaming) <streaming_IDCT.html>`__
MFCC `(standard) <std_MFCC.html>`__
MFCC `(streaming) <streaming_MFCC.html>`__
MelBands `(standard) <std_MelBands.html>`__
MelBands `(streaming) <streaming_MelBands.html>`__