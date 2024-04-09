:orphan:

Algorithm reference - Decrease (standard mode)
==============================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``decrease`` (*real*) - the decrease of the input array

Parameters
----------

 - ``range`` (*real ∈ (-∞, ∞), default = 1*) :
     the range of the input array, used for normalizing the results

Description
-----------

This algorithm computes the decrease of an array defined as the linear regression coefficient. The range parameter is used to normalize the result. For a spectral centroid, the range should be equal to Nyquist and for an audio centroid the range should be equal to (audiosize - 1) / samplerate.
The size of the input array must be at least two elements for "decrease" to be computed, otherwise an exception is thrown.

References:
  [1] Least Squares Fitting -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/LeastSquaresFitting.html


See also
--------

Decrease `(streaming) <streaming_Decrease.html>`__