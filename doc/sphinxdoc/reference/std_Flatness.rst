:orphan:

Algorithm reference - Flatness (standard mode)
==============================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``flatness`` (*real*) - the flatness (ratio between the geometric and the arithmetic mean of the input array)

Description
-----------

This algorithm computes the flatness of an array, which is defined as the ratio between the geometric mean and the arithmetic mean.

Flatness is undefined for empty input and negative values, therefore an exception is thrown in any both cases.


References:
  [1] G. Peeters, "A large set of audio features for sound description
  (similarity and classification) in the CUIDADO project," CUIDADO I.S.T.
  Project Report, 2004


See also
--------

Flatness `(streaming) <streaming_Flatness.html>`__