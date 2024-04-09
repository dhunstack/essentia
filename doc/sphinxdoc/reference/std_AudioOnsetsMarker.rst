:orphan:

Algorithm reference - AudioOnsetsMarker (standard mode)
=======================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``signal`` (*vector_real*) - the input signal mixed with bursts at onset locations

Parameters
----------

 - ``onsets`` (*vector_real, default = []*) :
     the list of onset locations [s]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the output signal [Hz]
 - ``type`` (*string ∈ {beep, noise}, default = beep*) :
     the type of sound to be added on the event

Description
-----------

This algorithm creates a wave file in which a given audio signal is mixed with a series of time onsets. The sonification of the onsets can be heard as beeps, or as short white noise pulses if configured to do so.

This algorithm will throw an exception if parameter "filename" is not supplied


See also
--------

AudioOnsetsMarker `(streaming) <streaming_AudioOnsetsMarker.html>`__