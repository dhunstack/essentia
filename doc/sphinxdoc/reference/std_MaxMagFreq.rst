:orphan:

Algorithm reference - MaxMagFreq (standard mode)
================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input spectrum (must have more than 1 element)

Outputs
-------

 - ``maxMagFreq`` (*real*) - the frequency with the largest magnitude [Hz]

Parameters
----------

 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]

Description
-----------

This algorithm computes the frequency with the largest magnitude in a spectrum.
Note that a spectrum must contain at least two elements otherwise an exception is thrown


See also
--------

MaxMagFreq `(streaming) <streaming_MaxMagFreq.html>`__