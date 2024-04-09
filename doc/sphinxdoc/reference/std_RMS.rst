:orphan:

Algorithm reference - RMS (standard mode)
=========================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``rms`` (*real*) - the root mean square of the input array

Description
-----------

This algorithm computes the root mean square (quadratic mean) of an array.
RMS is not defined for empty arrays. In such case, an exception will be thrown
.

References:
  [1] Root mean square - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Root_mean_square


See also
--------

RMS `(streaming) <streaming_RMS.html>`__