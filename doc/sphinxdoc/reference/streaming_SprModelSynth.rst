:orphan:

Algorithm reference - SprModelSynth (streaming mode)
====================================================

Inputs
------

 - ``magnitudes`` (*vector_real*) - the magnitudes of the sinusoidal peaks
 - ``frequencies`` (*vector_real*) - the frequencies of the sinusoidal peaks [Hz]
 - ``phases`` (*vector_real*) - the phases of the sinusoidal peaks
 - ``res`` (*vector_real*) - the residual frame

Outputs
-------

 - ``frame`` (*vector_real*) - the output audio frame of the Sinusoidal Plus Stochastic model
 - ``sineframe`` (*vector_real*) - the output audio frame for sinusoidal component 
 - ``resframe`` (*vector_real*) - the output audio frame for stochastic component 

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

This algorithm computes the sinusoidal plus residual model synthesis from SPS model analysis.


See also
--------

SprModelSynth `(standard) <std_SprModelSynth.html>`__