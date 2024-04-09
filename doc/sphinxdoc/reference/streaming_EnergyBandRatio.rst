:orphan:

Algorithm reference - EnergyBandRatio (streaming mode)
======================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input audio spectrum

Outputs
-------

 - ``energyBandRatio`` (*real*) - the energy ratio of the specified band over the total energy

Parameters
----------

 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``startFrequency`` (*real ∈ [0, ∞), default = 0*) :
     the frequency from which to start summing the energy [Hz]
 - ``stopFrequency`` (*real ∈ [0, ∞), default = 100*) :
     the frequency up to which to sum the energy [Hz]

Description
-----------

This algorithm computes the ratio of the spectral energy in the range [startFrequency, stopFrequency] over the total energy.

An exception is thrown when startFrequency is larger than stopFrequency
or the input spectrum is empty.


References:
  [1] Energy (signal processing) - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Energy_%28signal_processing%29


See also
--------

Energy `(standard) <std_Energy.html>`__
Energy `(streaming) <streaming_Energy.html>`__
EnergyBandRatio `(standard) <std_EnergyBandRatio.html>`__