:orphan:

Algorithm reference - FrequencyBands (standard mode)
====================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input spectrum (must be greater than size one)

Outputs
-------

 - ``bands`` (*vector_real*) - the energy in each band

Parameters
----------

 - ``frequencyBands`` (*vector_real, default = [0, 50, 100, 150, 200, 300, 400, 510, 630, 770, 920, 1080, 1270, 1480, 1720, 2000, 2320, 2700, 3150, 3700, 4400, 5300, 6400, 7700, 9500, 12000, 15500, 20500, 27000]*) :
     list of frequency ranges in to which the spectrum is divided (these must be in ascending order and connot contain duplicates)
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm computes energy in rectangular frequency bands of a spectrum. The bands are non-overlapping. For each band the power-spectrum (mag-squared) is summed.

Parameter "frequencyBands" must contain at least 2 frequencies, they all must be positive and must be ordered ascentdantly, otherwise an exception will be thrown. FrequencyBands is only defined for spectra, which size is greater than 1.


References:
  [1] Frequency Range - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Frequency_band

  [2] Band - Handbook For Acoustic Ecology,
  http://www.sfu.ca/sonic-studio/handbook/Band.html


See also
--------

FrequencyBands `(streaming) <streaming_FrequencyBands.html>`__