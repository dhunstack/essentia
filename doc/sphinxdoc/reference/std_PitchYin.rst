:orphan:

Algorithm reference - PitchYin (standard mode)
==============================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal frame

Outputs
-------

 - ``pitch`` (*real*) - detected pitch [Hz]
 - ``pitchConfidence`` (*real*) - confidence with which the pitch was detected [0,1]

Parameters
----------

 - ``frameSize`` (*integer ∈ [2, ∞), default = 2048*) :
     number of samples in the input frame (this is an optional parameter to optimize memory allocation)
 - ``interpolate`` (*bool ∈ {true, false}, default = true*) :
     enable interpolation
 - ``maxFrequency`` (*real ∈ (0, ∞), default = 22050*) :
     the maximum allowed frequency [Hz]
 - ``minFrequency`` (*real ∈ (0, ∞), default = 20*) :
     the minimum allowed frequency [Hz]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     sampling rate of the input audio [Hz]
 - ``tolerance`` (*real ∈ [0, 1], default = 0.15*) :
     tolerance for peak detection

Description
-----------

This algorithm estimates the fundamental frequency given the frame of a monophonic music signal. It is an implementation of the Yin algorithm [1] for computations in the time domain.

An exception is thrown if an empty signal is provided.

Please note that if "pitchConfidence" is zero, "pitch" is undefined and should not be used for other algorithms.
Also note that a null "pitch" is never ouput by the algorithm and that "pitchConfidence" must always be checked out.


References:
  [1] De Cheveigné, A., & Kawahara, H. "YIN, a fundamental frequency estimator
  for speech and music. The Journal of the Acoustical Society of America,
  111(4), 1917-1930, 2002.

  [2] Pitch detection algorithm - Wikipedia, the free encyclopedia
  http://en.wikipedia.org/wiki/Pitch_detection_algorithm


See also
--------

PitchYin `(streaming) <streaming_PitchYin.html>`__