:orphan:

Algorithm reference - SineModelSynth (standard mode)
====================================================

Inputs
------

 - ``magnitudes`` (*vector_real*) - the magnitudes of the sinusoidal peaks
 - ``frequencies`` (*vector_real*) - the frequencies of the sinusoidal peaks [Hz]
 - ``phases`` (*vector_real*) - the phases of the sinusoidal peaks

Outputs
-------

 - ``fft`` (*vector_complex*) - the output FFT frame

Parameters
----------

 - ``fftSize`` (*integer ∈ [1, ∞), default = 2048*) :
     the size of the output FFT frame (full spectrum size)
 - ``hopSize`` (*integer ∈ [1, ∞), default = 512*) :
     the hop size between frames
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]

Description
-----------

This algorithm computes the sine model synthesis from sine model analysis.


See also
--------

SineModelSynth `(streaming) <streaming_SineModelSynth.html>`__