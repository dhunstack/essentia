:orphan:

Algorithm reference - Spectrum (standard mode)
==============================================

Inputs
------

 - ``frame`` (*vector_real*) - the input audio frame

Outputs
-------

 - ``spectrum`` (*vector_real*) - magnitude spectrum of the input audio signal

Parameters
----------

 - ``size`` (*integer ∈ [1, ∞), default = 2048*) :
     the expected size of the input audio signal (this is an optional parameter to optimize memory allocation)

Description
-----------

This algorithm computes the magnitude spectrum of an array of Reals. The resulting magnitude spectrum has a size which is half the size of the input array plus one. Bins contain raw (linear) magnitude values.


References:
  [1] Frequency spectrum - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Frequency_spectrum


See also
--------

Spectrum `(streaming) <streaming_Spectrum.html>`__