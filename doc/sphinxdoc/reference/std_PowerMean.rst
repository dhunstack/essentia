:orphan:

Algorithm reference - PowerMean (standard mode)
===============================================

Inputs
------

 - ``array`` (*vector_real*) - the input array (must contain only positive real numbers)

Outputs
-------

 - ``powerMean`` (*real*) - the power mean of the input array

Parameters
----------

 - ``power`` (*real ∈ (-∞, ∞), default = 1*) :
     the power to which to elevate each element before taking the mean

Description
-----------

This algorithm computes the power mean of an array. It accepts one parameter, p, which is the power (or order or degree) of the Power Mean. Note that if p=-1, the Power Mean is equal to the Harmonic Mean, if p=0, the Power Mean is equal to the Geometric Mean, if p=1, the Power Mean is equal to the Arithmetic Mean, if p=2, the Power Mean is equal to the Root Mean Square.

Exceptions are thrown if input array either is empty or it contains non positive numbers.


References:
  [1] Power Mean -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/PowerMean.html
  [2] Generalized mean - Wikipedia, the free encyclopedia,
  https://en.wikipedia.org/wiki/Generalized_mean


See also
--------

Mean `(standard) <std_Mean.html>`__
Mean `(streaming) <streaming_Mean.html>`__
PowerMean `(streaming) <streaming_PowerMean.html>`__