:orphan:

Algorithm reference - CentralMoments (standard mode)
====================================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``centralMoments`` (*vector_real*) - the central moments of the input array

Parameters
----------

 - ``mode`` (*string ∈ {pdf, sample}, default = pdf*) :
     compute central moments considering array values as a probability density function over array index or as sample points of a distribution
 - ``range`` (*real ∈ (0, ∞), default = 1*) :
     the range of the input array, used for normalizing the results in the 'pdf' mode

Description
-----------

This algorithm extracts the 0th, 1st, 2nd, 3rd and 4th central moments of an array. It returns a 5-tuple in which the index corresponds to the order of the moment.

Central moments cannot be computed on arrays which size is less than 2, in which case an exception is thrown.

Note: the 'mode' parameter defines whether to treat array values as a probability distribution function (pdf) or as sample points of a distribution (sample).


References:
  [1] Sample Central Moment -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/SampleCentralMoment.html

  [2] Central Moment - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Central_moment


See also
--------

CentralMoments `(streaming) <streaming_CentralMoments.html>`__