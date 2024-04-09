:orphan:

Algorithm reference - HpsModelAnal (streaming mode)
===================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input frame
 - ``pitch`` (*real*) - external pitch input [Hz].

Outputs
-------

 - ``frequencies`` (*vector_real*) - the frequencies of the sinusoidal peaks [Hz]
 - ``magnitudes`` (*vector_real*) - the magnitudes of the sinusoidal peaks
 - ``phases`` (*vector_real*) - the phases of the sinusoidal peaks
 - ``stocenv`` (*vector_real*) - the stochastic envelope

Parameters
----------

 - ``fftSize`` (*integer ∈ [1, ∞), default = 2048*) :
     the size of the internal FFT size (full spectrum size)
 - ``freqDevOffset`` (*integer ∈ (0, ∞), default = 20*) :
     minimum frequency deviation at 0Hz
 - ``freqDevSlope`` (*real ∈ (-∞, ∞), default = 0.01*) :
     slope increase of minimum frequency deviation
 - ``harmDevSlope`` (*real ∈ (-∞, ∞), default = 0.01*) :
     slope increase of minimum frequency deviation
 - ``hopSize`` (*integer ∈ [1, ∞), default = 512*) :
     the hop size between frames
 - ``magnitudeThreshold`` (*real ∈ (-∞, ∞), default = 0*) :
     peaks below this given threshold are not outputted
 - ``maxFrequency`` (*real ∈ (0, ∞), default = 5000*) :
     the maximum frequency of the range to evaluate [Hz]
 - ``maxPeaks`` (*integer ∈ [1, ∞), default = 100*) :
     the maximum number of returned peaks
 - ``maxnSines`` (*integer ∈ (0, ∞), default = 100*) :
     maximum number of sines per frame
 - ``minFrequency`` (*real ∈ (0, ∞), default = 20*) :
     the minimum frequency of the range to evaluate [Hz]
 - ``nHarmonics`` (*integer ∈ (0, ∞), default = 100*) :
     maximum number of harmonics per frame
 - ``orderBy`` (*string ∈ {frequency, magnitude}, default = frequency*) :
     the ordering type of the outputted peaks (ascending by frequency or descending by magnitude)
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``stocf`` (*real ∈ (0, 1], default = 0.2*) :
     decimation factor used for the stochastic approximation

Description
-----------

This algorithm computes the harmonic plus stochastic model analysis. 

It uses the algorithms HarmonicModelAnal and StochasticModelAnal .


References:
  https://github.com/MTG/sms-tools
  http://mtg.upf.edu/technologies/sms



See also
--------

HarmonicModelAnal `(standard) <std_HarmonicModelAnal.html>`__
HarmonicModelAnal `(streaming) <streaming_HarmonicModelAnal.html>`__
HpsModelAnal `(standard) <std_HpsModelAnal.html>`__
StochasticModelAnal `(standard) <std_StochasticModelAnal.html>`__
StochasticModelAnal `(streaming) <streaming_StochasticModelAnal.html>`__