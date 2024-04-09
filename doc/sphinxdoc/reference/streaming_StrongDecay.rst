:orphan:

Algorithm reference - StrongDecay (streaming mode)
==================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``strongDecay`` (*real*) - the strong decay

Parameters
----------

 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm computes the Strong Decay of an audio signal. The Strong Decay is built from the non-linear combination of the signal energy and the signal temporal centroid, the latter being the balance of the absolute value of the signal. A signal containing a temporal centroid near its start boundary and a strong energy is said to have a strong decay.

This algorithm returns 0.0 for zero signals (i.e. silence), and throws an exception when the signal's size is less than two as it can't compute its centroid.


References:
  [1] F. Gouyon and P. Herrera, "Exploration of techniques for automatic
  labeling of audio drum tracks instruments," in MOSART: Workshop on Current
  Directions in Computer Music, 2001.


See also
--------

StrongDecay `(standard) <std_StrongDecay.html>`__