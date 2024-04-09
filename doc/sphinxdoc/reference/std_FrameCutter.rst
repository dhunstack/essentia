:orphan:

Algorithm reference - FrameCutter (standard mode)
=================================================

Inputs
------

 - ``signal`` (*vector_real*) - the buffer from which to read data

Outputs
-------

 - ``frame`` (*vector_real*) - the frame to write to

Parameters
----------

 - ``frameSize`` (*integer ∈ [1, ∞), default = 1024*) :
     the output frame size
 - ``hopSize`` (*integer ∈ [1, ∞), default = 512*) :
     the hop size between frames
 - ``lastFrameToEndOfFile`` (*bool ∈ {true, false}, default = false*) :
     whether the beginning of the last frame should reach the end of file. Only applicable if startFromZero is true
 - ``startFromZero`` (*bool ∈ {true, false}, default = false*) :
     whether to start the first frame at time 0 (centered at frameSize/2) if true, or -frameSize/2 otherwise (zero-centered)
 - ``validFrameThresholdRatio`` (*real ∈ [0, 1], default = 0*) :
     frames smaller than this ratio will be discarded, those larger will be zero-padded to a full frame (i.e. a value of 0 will never discard frames and a value of 1 will only keep frames that are of length 'frameSize')

Description
-----------

This algorithm slices the input buffer into frames. It returns a frame of a constant size and jumps a constant amount of samples forward in the buffer on every compute() call until no more frames can be extracted; empty frame vectors are returned afterwards. Incomplete frames (frames starting before the beginning of the input buffer or going past its end) are zero-padded or dropped according to the "validFrameThresholdRatio" parameter.

The algorithm outputs as many frames as needed to consume all the information contained in the input buffer. Depending on the "startFromZero" parameter:

  - startFromZero = true: a frame is the last one if its end position is at or beyond the end of the stream. The last frame will be zero-padded if its size is less than "frameSize"
  - startFromZero = false: a frame is the last one if its center position is at or beyond the end of the stream

In both cases the start time of the last frame is never beyond the end of the stream.



See also
--------

FrameCutter `(streaming) <streaming_FrameCutter.html>`__