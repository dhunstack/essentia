:orphan:

Algorithm reference - AutoCorrelation (streaming mode)
======================================================

Inputs
------

 - ``array`` (*vector_real*) - the array to be analyzed

Outputs
-------

 - ``autoCorrelation`` (*vector_real*) - the autocorrelation vector

Parameters
----------

 - ``frequencyDomainCompression`` (*real ∈ (0, ∞), default = 0.5*) :
     factor at which FFT magnitude is compressed (only used if 'generalized' is set to true, see [3])
 - ``generalized`` (*bool ∈ {true, false}, default = false*) :
     bool value to indicate whether to compute the 'generalized' autocorrelation as described in [3]
 - ``normalization`` (*string ∈ {standard, unbiased}, default = standard*) :
     type of normalization to compute: either 'standard' (default) or 'unbiased'

Description
-----------

This algorithm computes the autocorrelation vector of a signal.
It uses the version most commonly used in signal processing, which doesn't remove the mean from the observations.
Using the 'generalized' option this algorithm computes autocorrelation as described in [3].


References:
  [1] Autocorrelation -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/Autocorrelation.html

  [2] Autocorrelation - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Autocorrelation

  [3] Tolonen T., and Karjalainen, M. (2000). A computationally efficient multipitch analysis model.
  IEEE Transactions on Audio, Speech, and Language Processing, 8(6), 708-716.




See also
--------

AutoCorrelation `(standard) <std_AutoCorrelation.html>`__