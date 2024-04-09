:orphan:

Algorithm reference - MovingAverage (streaming mode)
====================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``signal`` (*real*) - the filtered signal

Parameters
----------

 - ``size`` (*integer ∈ (1, ∞), default = 6*) :
     the size of the window [audio samples]

Description
-----------

This algorithm implements a FIR Moving Average filter. Because of its dependece on IIR, IIR's requirements are inherited.


References:
  [1] Moving Average Filters, http://www.dspguide.com/ch15.htm


See also
--------

IIR `(standard) <std_IIR.html>`__
IIR `(streaming) <streaming_IIR.html>`__
MovingAverage `(standard) <std_MovingAverage.html>`__