:orphan:

Algorithm reference - LogAttackTime (streaming mode)
====================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal envelope (must be non-empty)

Outputs
-------

 - ``logAttackTime`` (*real*) - the log (base 10) of the attack time [log10(s)]
 - ``attackStart`` (*real*) - the attack start time [s]
 - ``attackStop`` (*real*) - the attack end time [s]

Parameters
----------

 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]
 - ``startAttackThreshold`` (*real ∈ [0, 1], default = 0.2*) :
     the percentage of the input signal envelope at which the starting point of the attack is considered
 - ``stopAttackThreshold`` (*real ∈ [0, 1], default = 0.9*) :
     the percentage of the input signal envelope at which the ending point of the attack is considered

Description
-----------

This algorithm computes the log (base 10) of the attack time of a signal envelope. The attack time is defined as the time duration from when the sound becomes perceptually audible to when it reaches its maximum intensity. By default, the start of the attack is estimated as the point where the signal envelope reaches 20% of its maximum value in order to account for possible noise presence. Also by default, the end of the attack is estimated as as the point where the signal envelope has reached 90% of its maximum value, in order to account for the possibility that the max value occurres after the logAttack, as in trumpet sounds.

With this said, LogAttackTime's input is intended to be fed by the output of the Envelope algorithm. In streaming mode, the RealAccumulator algorithm should be connected between Envelope and LogAttackTime.

Note that startAttackThreshold cannot be greater than stopAttackThreshold and the input signal should not be empty. In any of these cases an exception will be thrown.



See also
--------

Envelope `(standard) <std_Envelope.html>`__
Envelope `(streaming) <streaming_Envelope.html>`__
LogAttackTime `(standard) <std_LogAttackTime.html>`__
RealAccumulator `(streaming) <streaming_RealAccumulator.html>`__