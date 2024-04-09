:orphan:

Algorithm reference - DCRemoval (streaming mode)
================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``signal`` (*real*) - the filtered signal, with the DC component removed

Parameters
----------

 - ``cutoffFrequency`` (*real ∈ (0, ∞), default = 40*) :
     the cutoff frequency for the filter [Hz]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm removes the DC offset from a signal using a 1st order IIR highpass filter. Because of its dependence on IIR, IIR's requirements are inherited.


References:
  [1] Smith, J.O.  Introduction to Digital Filters with Audio Applications,
  http://ccrma-www.stanford.edu/~jos/filters/DC_Blocker.html


See also
--------

DCRemoval `(standard) <std_DCRemoval.html>`__
IIR `(standard) <std_IIR.html>`__
IIR `(streaming) <streaming_IIR.html>`__