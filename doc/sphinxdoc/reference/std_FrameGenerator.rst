:orphan:

Algorithm reference - FrameGenerator (standard mode)
====================================================

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

The FrameGenerator is a Python generator for the FrameCutter algorithm. It is not available in C++.

FrameGenerator inherits all the parameters of the FrameCutter. The way to use it in Python is the following:

  for frame in FrameGenerator(audio, frameSize, hopSize):
      do_something()




See also
--------

FrameCutter `(standard) <std_FrameCutter.html>`__
FrameCutter `(streaming) <streaming_FrameCutter.html>`__