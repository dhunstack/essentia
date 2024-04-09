:orphan:

Algorithm reference - EnergyBand (standard mode)
================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input frequency spectrum

Outputs
-------

 - ``energyBand`` (*real*) - the energy in the frequency band

Parameters
----------

 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]
 - ``startCutoffFrequency`` (*real ∈ [0, ∞), default = 0*) :
     the start frequency from which to sum the energy [Hz]
 - ``stopCutoffFrequency`` (*real ∈ (0, ∞), default = 100*) :
     the stop frequency to which to sum the energy [Hz]

Description
-----------

This algorithm computes energy in a given frequency band of a spectrum including both start and stop cutoff frequencies.
Note that exceptions will be thrown when input spectrum is empty and if startCutoffFrequency is greater than stopCutoffFrequency.


References:
  [1] Energy (signal processing) - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Energy_(signal_processing)


See also
--------

Energy `(standard) <std_Energy.html>`__
Energy `(streaming) <streaming_Energy.html>`__
EnergyBand `(streaming) <streaming_EnergyBand.html>`__