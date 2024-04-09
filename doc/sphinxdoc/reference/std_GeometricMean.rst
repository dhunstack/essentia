:orphan:

Algorithm reference - GeometricMean (standard mode)
===================================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``geometricMean`` (*real*) - the geometric mean of the input array

Description
-----------

This algorithm computes the geometric mean of an array of positive values.

An exception is thrown if the input array does not contain strictly positive numbers or the array is empty.


References:
  [1] Energy (signal processing) - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Energy_%28signal_processing%29

  [2] Geometric Mean -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/GeometricMean.html


See also
--------

Energy `(standard) <std_Energy.html>`__
Energy `(streaming) <streaming_Energy.html>`__
GeometricMean `(streaming) <streaming_GeometricMean.html>`__
Mean `(standard) <std_Mean.html>`__
Mean `(streaming) <streaming_Mean.html>`__