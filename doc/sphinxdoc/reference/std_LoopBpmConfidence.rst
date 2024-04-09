:orphan:

Algorithm reference - LoopBpmConfidence (standard mode)
=======================================================

Inputs
------

 - ``signal`` (*vector_real*) - loop audio signal
 - ``bpmEstimate`` (*real*) - estimated BPM for the audio signal (will be rounded to nearest integer)

Outputs
-------

 - ``confidence`` (*real*) - confidence value for the BPM estimation

Parameters
----------

 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm takes an audio signal and a BPM estimate for that signal and predicts the reliability of the BPM estimate in a value from 0 to 1. The audio signal is assumed to be a musical loop with constant tempo. The confidence returned is based on comparing the duration of the signal with multiples of the BPM estimate (see [1] for more details).


References:
  [1] Font, F., & Serra, X. (2016). Tempo Estimation for Music Loops and a Simple Confidence Measure.
  Proceedings of the International Society for Music Information Retrieval Conference (ISMIR).




See also
--------

LoopBpmConfidence `(streaming) <streaming_LoopBpmConfidence.html>`__