:orphan:

Algorithm reference - Intensity (standard mode)
===============================================

Inputs
------

 - ``signal`` (*vector_real*) - the input audio signal

Outputs
-------

 - ``intensity`` (*integer*) - the intensity value

Parameters
----------

 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the input audio sampling rate [Hz]

Description
-----------

This algorithm classifies the input audio signal as either relaxed (-1), moderate (0), or aggressive (1).

Quality: outdated (non-reliable, poor accuracy).

An exception is thrown if empty input is provided because the "intensity" is not defined for that case.

