:orphan:

Algorithm reference - BandPass (standard mode)
==============================================

Inputs
------

 - ``signal`` (*vector_real*) - the input audio signal

Outputs
-------

 - ``signal`` (*vector_real*) - the filtered signal

Parameters
----------

 - ``bandwidth`` (*real ∈ (0, ∞), default = 500*) :
     the bandwidth of the filter [Hz]
 - ``cutoffFrequency`` (*real ∈ (0, ∞), default = 1500*) :
     the cutoff frequency for the filter [Hz]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm implements a 2nd order IIR band-pass filter. Because of its dependence on IIR, IIR's requirements are inherited.


References:
  [1] U. Zölzer, DAFX - Digital Audio Effects, 2nd edition, p. 55,
  John Wiley & Sons, 2011


See also
--------

BandPass `(streaming) <streaming_BandPass.html>`__
IIR `(standard) <std_IIR.html>`__
IIR `(streaming) <streaming_IIR.html>`__