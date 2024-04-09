:orphan:

Algorithm reference - StochasticModelAnal (streaming mode)
==========================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input frame

Outputs
-------

 - ``stocenv`` (*vector_real*) - the stochastic envelope

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

This algorithm computes the stochastic model analysis. It gets the resampled spectral envelope of the stochastic component.


References:
  https://github.com/MTG/sms-tools
  http://mtg.upf.edu/technologies/sms



See also
--------

StochasticModelAnal `(standard) <std_StochasticModelAnal.html>`__