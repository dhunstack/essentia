:orphan:

Algorithm reference - LPC (streaming mode)
==========================================

Inputs
------

 - ``frame`` (*vector_real*) - the input audio frame

Outputs
-------

 - ``lpc`` (*vector_real*) - the LPC coefficients
 - ``reflection`` (*vector_real*) - the reflection coefficients

Parameters
----------

 - ``order`` (*integer ∈ [2, ∞), default = 10*) :
     the order of the LPC analysis (typically [8,14])
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``type`` (*string ∈ {regular, warped}, default = regular*) :
     the type of LPC (regular or warped)

Description
-----------

This algorithm computes Linear Predictive Coefficients and associated reflection coefficients of a signal.

An exception is thrown if the "order" provided is larger than the size of the input signal.


References:
  [1] Linear predictive coding - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Linear_predictive_coding

  [2] J. Makhoul, "Spectral analysis of speech by linear prediction," IEEE
  Transactions on Audio and Electroacoustics, vol. 21, no. 3, pp. 140–148,
  1973.



See also
--------

LPC `(standard) <std_LPC.html>`__