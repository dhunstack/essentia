:orphan:

Algorithm reference - Envelope (streaming mode)
===============================================

Inputs
------

 - ``signal`` (*real*) - the input signal

Outputs
-------

 - ``signal`` (*real*) - the resulting envelope of the signal

Parameters
----------

 - ``applyRectification`` (*bool ∈ {true, false}, default = true*) :
     whether to apply rectification (envelope based on the absolute value of signal)
 - ``attackTime`` (*real ∈ [0, ∞), default = 10*) :
     the attack time of the first order lowpass in the attack phase [ms]
 - ``releaseTime`` (*real ∈ [0, ∞), default = 1500*) :
     the release time of the first order lowpass in the release phase [ms]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]

Description
-----------

This algorithm computes the envelope of a signal by applying a non-symmetric lowpass filter on a signal. By default it rectifies the signal, but that is optional.


References:
  [1] U. Zölzer, Digital Audio Signal Processing,
  John Wiley & Sons Ltd, 1997, ch.7


See also
--------

Envelope `(standard) <std_Envelope.html>`__