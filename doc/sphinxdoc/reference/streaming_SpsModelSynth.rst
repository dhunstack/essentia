:orphan:

Algorithm reference - SpsModelSynth (streaming mode)
====================================================

Inputs
------

 - ``magnitudes`` (*vector_real*) - the magnitudes of the sinusoidal peaks
 - ``frequencies`` (*vector_real*) - the frequencies of the sinusoidal peaks [Hz]
 - ``phases`` (*vector_real*) - the phases of the sinusoidal peaks
 - ``stocenv`` (*vector_real*) - the stochastic envelope

Outputs
-------

 - ``frame`` (*vector_real*) - the output audio frame of the Sinusoidal Plus Stochastic model
 - ``sineframe`` (*vector_real*) - the output audio frame for sinusoidal component 
 - ``stocframe`` (*vector_real*) - the output audio frame for stochastic component 

Parameters
----------

 - ``fftSize`` (*integer ∈ [1, ∞), default = 2048*) :
     the size of the output FFT frame (full spectrum size)
 - ``hopSize`` (*integer ∈ [1, ∞), default = 512*) :
     the hop size between frames
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]
 - ``stocf`` (*real ∈ (0, 1], default = 0.2*) :
     decimation factor used for the stochastic approximation

Description
-----------

This algorithm computes the sinusoidal plus stochastic model synthesis from SPS model analysis.


See also
--------

SpsModelSynth `(standard) <std_SpsModelSynth.html>`__