:orphan:

Algorithm reference - SprModelAnal (standard mode)
==================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input frame

Outputs
-------

 - ``frequencies`` (*vector_real*) - the frequencies of the sinusoidal peaks [Hz]
 - ``magnitudes`` (*vector_real*) - the magnitudes of the sinusoidal peaks
 - ``phases`` (*vector_real*) - the phases of the sinusoidal peaks
 - ``res`` (*vector_real*) - output residual frame

Parameters
----------

 - ``fftSize`` (*integer ∈ [1, ∞), default = 2048*) :
     the size of the internal FFT size (full spectrum size)
 - ``freqDevOffset`` (*integer ∈ (0, ∞), default = 20*) :
     minimum frequency deviation at 0Hz
 - ``freqDevSlope`` (*real ∈ (-∞, ∞), default = 0.01*) :
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
 - ``minFrequency`` (*real ∈ [0, ∞), default = 0*) :
     the minimum frequency of the range to evaluate [Hz]
 - ``orderBy`` (*string ∈ {frequency, magnitude}, default = frequency*) :
     the ordering type of the outputted peaks (ascending by frequency or descending by magnitude)
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm computes the sinusoidal plus residual model analysis. 

It is recommended that the input "spectrum" be computed by the Spectrum algorithm. This algorithm uses SineModelAnal. See documentation for possible exceptions and input requirements on input "spectrum".


References:
  https://github.com/MTG/sms-tools
  http://mtg.upf.edu/technologies/sms



See also
--------

SineModelAnal `(standard) <std_SineModelAnal.html>`__
SineModelAnal `(streaming) <streaming_SineModelAnal.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__
SprModelAnal `(streaming) <streaming_SprModelAnal.html>`__