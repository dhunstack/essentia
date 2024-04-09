:orphan:

Algorithm reference - DCT (standard mode)
=========================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``dct`` (*vector_real*) - the discrete cosine transform of the input array

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

This algorithm computes the Discrete Cosine Transform of an array.
It uses the DCT-II form, with the 1/sqrt(2) scaling factor for the first coefficient.

Note: The 'inputSize' parameter is only used as an optimization when the algorithm is configured. The DCT will automatically adjust to the size of any input.


References:
  [1] Discrete cosine transform - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Discrete_cosine_transform


See also
--------

DCT `(streaming) <streaming_DCT.html>`__