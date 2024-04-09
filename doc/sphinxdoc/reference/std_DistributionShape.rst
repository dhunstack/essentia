:orphan:

Algorithm reference - DistributionShape (standard mode)
=======================================================

Inputs
------

 - ``centralMoments`` (*vector_real*) - the central moments of a distribution

Outputs
-------

 - ``spread`` (*real*) - the spread (variance) of the distribution
 - ``skewness`` (*real*) - the skewness of the distribution
 - ``kurtosis`` (*real*) - the kurtosis of the distribution

Description
-----------

This algorithm computes the spread (variance), skewness and kurtosis of an array given its central moments. The extracted features are good indicators of the shape of the distribution. For the required input see CentralMoments algorithm.
The size of the input array must be at least 5. An exception will be thrown otherwise.


References:
  [1] G. Peeters, "A large set of audio features for sound description
  (similarity and classification) in the CUIDADO project," CUIDADO I.S.T.
  Project Report, 2004.

  [2] Variance - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Variance

  [3] Skewness - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Skewness

  [4] Kurtosis - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Kurtosis


See also
--------

CentralMoments `(standard) <std_CentralMoments.html>`__
CentralMoments `(streaming) <streaming_CentralMoments.html>`__
DistributionShape `(streaming) <streaming_DistributionShape.html>`__
Variance `(standard) <std_Variance.html>`__
Variance `(streaming) <streaming_Variance.html>`__