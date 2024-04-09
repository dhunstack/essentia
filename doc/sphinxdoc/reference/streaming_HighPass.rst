:orphan:

Algorithm reference - HighPass (streaming mode)
===============================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``signal`` (*real*) - the filtered signal

Parameters
----------

 - ``cutoffFrequency`` (*real ∈ (0, ∞), default = 1500*) :
     the cutoff frequency for the filter [Hz]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm implements a 1st order IIR high-pass filter. Because of its dependence on IIR, IIR's requirements are inherited.


References:
  [1] U. Zölzer, DAFX - Digital Audio Effects, p. 40,
  John Wiley & Sons, 2002


See also
--------

HighPass `(standard) <std_HighPass.html>`__
IIR `(standard) <std_IIR.html>`__
IIR `(streaming) <streaming_IIR.html>`__