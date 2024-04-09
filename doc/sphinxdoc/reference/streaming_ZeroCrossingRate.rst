:orphan:

Algorithm reference - ZeroCrossingRate (streaming mode)
=======================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``zeroCrossingRate`` (*real*) - the zero-crossing rate

Parameters
----------

 - ``threshold`` (*real ∈ [0, ∞], default = 0*) :
     the threshold which will be taken as the zero axis in both positive and negative sign

Description
-----------

This algorithm computes the zero-crossing rate of an audio signal. It is the number of sign changes between consecutive signal values divided by the total number of values. Noisy signals tend to have higher zero-crossing rate.
In order to avoid small variations around zero caused by noise, a threshold around zero is given to consider a valid zerocrosing whenever the boundary is crossed.

Empty input signals will raise an exception.


References:
  [1] Zero Crossing - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Zero-crossing_rate

  [2] G. Peeters, "A large set of audio features for sound description
  (similarity and classification) in the CUIDADO project," CUIDADO I.S.T.
  Project Report, 2004


See also
--------

ZeroCrossingRate `(standard) <std_ZeroCrossingRate.html>`__