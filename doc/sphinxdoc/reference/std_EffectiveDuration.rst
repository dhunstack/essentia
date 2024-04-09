:orphan:

Algorithm reference - EffectiveDuration (standard mode)
=======================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``effectiveDuration`` (*real*) - the effective duration of the signal [s]

Parameters
----------

 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``thresholdRatio`` (*real ∈ [0, 1], default = 0.4*) :
     the ratio of the envelope maximum to be used as the threshold

Description
-----------

This algorithm computes the effective duration of an envelope signal. The effective duration is a measure of the time the signal is perceptually meaningful. This is approximated by the time the envelope is above or equal to a given threshold and is above the -90db noise floor. This measure allows to distinguish percussive sounds from sustained sounds but depends on the signal length.
By default, this algorithm uses 40% of the envelope maximum as the threshold which is suited for short sounds. Note, that the 0% thresold corresponds to the duration of signal above -90db noise floor, while the 100% thresold corresponds to the number of times the envelope takes its maximum value.

References:
  [1] G. Peeters, "A large set of audio features for sound description
  (similarity and classification) in the CUIDADO project," CUIDADO I.S.T.
  Project Report, 2004


See also
--------

EffectiveDuration `(streaming) <streaming_EffectiveDuration.html>`__