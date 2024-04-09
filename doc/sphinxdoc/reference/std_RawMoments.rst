:orphan:

Algorithm reference - RawMoments (standard mode)
================================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``rawMoments`` (*vector_real*) - the (raw) moments of the input array

Parameters
----------

 - ``range`` (*real ∈ (0, ∞), default = 22050*) :
     the range of the input array, used for normalizing the results

Description
-----------

This algorithm computes the first 5 raw moments of an array. The output array is of size 6 because the zero-ith moment is used for padding so that the first moment corresponds to index 1.

Note:
  This algorithm has a range parameter, which usually represents a frequency (results will range from 0 to range). For a spectral centroid, the range should be equal to samplerate / 2. For an audio centroid, the frequency range should be equal to (audio_size-1) / samplerate.

An exception is thrown if the input array's size is smaller than 2.


References:
  [1] Raw Moment -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/RawMoment.html


See also
--------

RawMoments `(streaming) <streaming_RawMoments.html>`__