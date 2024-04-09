:orphan:

Algorithm reference - Clipper (standard mode)
=============================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``signal`` (*vector_real*) - the output signal with the added noise

Parameters
----------

 - ``max`` (*real ∈ (-∞, ∞), default = 1*) :
     the maximum value above which the signal will be clipped
 - ``min`` (*real ∈ (-∞, ∞), default = -1*) :
     the minimum value below which the signal will be clipped

Description
-----------

This algorithm clips the input signal to fit its values into a specified interval.


References:
  [1] Clipping - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Clipping_%28audio%29


See also
--------

Clipper `(streaming) <streaming_Clipper.html>`__