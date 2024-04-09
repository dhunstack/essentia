:orphan:

Algorithm reference - SineSubtraction (standard mode)
=====================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input audio frame to subtract from
 - ``magnitudes`` (*vector_real*) - the magnitudes of the sinusoidal peaks
 - ``frequencies`` (*vector_real*) - the frequencies of the sinusoidal peaks [Hz]
 - ``phases`` (*vector_real*) - the phases of the sinusoidal peaks

Outputs
-------

 - ``frame`` (*vector_real*) - the output audio frame

Parameters
----------

 - ``fftSize`` (*integer ∈ [1, ∞), default = 512*) :
     the size of the FFT internal process (full spectrum size) and output frame. Minimum twice the hopsize.
 - ``hopSize`` (*integer ∈ [1, ∞), default = 128*) :
     the hop size between frames
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]

Description
-----------

This algorithm subtracts the sinusoids computed with the sine model analysis from an input audio signal. It ouputs an audio signal.


See also
--------

SineSubtraction `(streaming) <streaming_SineSubtraction.html>`__