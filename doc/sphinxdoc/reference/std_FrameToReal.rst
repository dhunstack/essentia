:orphan:

Algorithm reference - FrameToReal (standard mode)
=================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input audio frame

Outputs
-------

 - ``signal`` (*vector_real*) - the output audio samples

Parameters
----------

 - ``frameSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the frame size for computing the overlap-add process
 - ``hopSize`` (*integer ∈ (0, ∞), default = 128*) :
     the hop size with which the overlap-add function is computed

Description
-----------

This algorithm converts a sequence of input audio signal frames into a sequence of audio samples.

Empty input signals will raise an exception.


See also
--------

FrameToReal `(streaming) <streaming_FrameToReal.html>`__