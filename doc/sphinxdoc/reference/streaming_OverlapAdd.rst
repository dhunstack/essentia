:orphan:

Algorithm reference - OverlapAdd (streaming mode)
=================================================

Inputs
------

 - ``frame`` (*vector_real*) - the windowed input audio frame

Outputs
-------

 - ``signal`` (*real*) - the output overlap-add audio signal

Parameters
----------

 - ``frameSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the frame size for computing the overlap-add process
 - ``gain`` (*real ∈ (0., ∞), default = 1*) :
     the normalization gain that scales the output signal. Useful for IFFT output
 - ``hopSize`` (*integer ∈ (0, ∞), default = 128*) :
     the hop size with which the overlap-add function is computed

Description
-----------

This algorithm returns the output of an overlap-add process for a sequence of frames of an audio signal. It considers that the input audio frames are windowed audio signals. Giving the size of the frame and the hop size, overlapping and adding consecutive frames will produce a continuous signal. A normalization gain can be passed as a parameter.

Empty input signals will raise an exception.


References:
  [1] Overlap–add method - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Overlap-add_method


See also
--------

OverlapAdd `(standard) <std_OverlapAdd.html>`__