:orphan:

Algorithm reference - StochasticModelSynth (streaming mode)
===========================================================

Inputs
------

 - ``stocenv`` (*vector_real*) - the stochastic envelope input

Outputs
-------

 - ``frame`` (*vector_real*) - the output frame

Parameters
----------

 - ``fftSize`` (*integer ∈ [1, ∞), default = 2048*) :
     the size of the internal FFT size (full spectrum size)
 - ``hopSize`` (*integer ∈ [1, ∞), default = 512*) :
     the hop size between frames
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``stocf`` (*real ∈ (0, 1], default = 0.2*) :
     decimation factor used for the stochastic approximation

Description
-----------

This algorithm computes the stochastic model synthesis. It generates the noisy spectrum from a resampled spectral envelope of the stochastic component.


References:
  https://github.com/MTG/sms-tools
  http://mtg.upf.edu/technologies/sms



See also
--------

StochasticModelSynth `(standard) <std_StochasticModelSynth.html>`__