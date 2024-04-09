:orphan:

Algorithm reference - AllPass (standard mode)
=============================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``signal`` (*vector_real*) - the filtered signal

Parameters
----------

 - ``bandwidth`` (*real ∈ (0, ∞), default = 500*) :
     the bandwidth of the filter [Hz] (used only for 2nd-order filters)
 - ``cutoffFrequency`` (*real ∈ (0, ∞), default = 1500*) :
     the cutoff frequency for the filter [Hz]
 - ``order`` (*integer ∈ {1, 2}, default = 1*) :
     the order of the filter
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm implements a IIR all-pass filter of order 1 or 2. Because of its dependence on IIR, IIR's requirements are inherited.


References:
  [1] U. Zölzer, DAFX - Digital Audio Effects, p. 43,
  John Wiley & Sons, 2002


See also
--------

AllPass `(streaming) <streaming_AllPass.html>`__
IIR `(standard) <std_IIR.html>`__
IIR `(streaming) <streaming_IIR.html>`__