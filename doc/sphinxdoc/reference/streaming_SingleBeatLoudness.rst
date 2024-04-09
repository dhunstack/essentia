:orphan:

Algorithm reference - SingleBeatLoudness (streaming mode)
=========================================================

Inputs
------

 - ``beat`` (*vector_real*) - audio segement containing a beat

Outputs
-------

 - ``loudness`` (*real*) - the beat's energy across the whole spectrum
 - ``loudnessBandRatio`` (*vector_real*) - the beat's energy ratio for each band

Parameters
----------

 - ``beatDuration`` (*real ∈ (0, ∞), default = 0.05*) :
     window size for the beat's energy computation (the window starts at the onset) [s]
 - ``beatWindowDuration`` (*real ∈ (0, ∞), default = 0.1*) :
     window size for the beat's onset detection [s]
 - ``frequencyBands`` (*vector_real, default = [0, 200, 400, 800, 1600, 3200, 22000]*) :
     frequency bands
 - ``onsetStart`` (*string ∈ {sumEnergy, peakEnergy}, default = sumEnergy*) :
     criteria for finding the start of the beat
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]

Description
-----------

This algorithm computes the spectrum energy of a single beat across the whole frequency range and on each specified frequency band given an audio segment. It detects the onset of the beat within the input segment, computes spectrum on a window starting on this onset, and estimates energy (see Energy and EnergyBandRatio algorithms). The frequency bands used by default are: 0-200 Hz, 200-400 Hz, 400-800 Hz, 800-1600 Hz, 1600-3200 Hz, 3200-22000Hz, following E. Scheirer [1].

This algorithm throws an exception either when parameter beatDuration is larger than beatWindowSize or when the size of the input beat segment is less than beatWindowSize plus beatDuration.


References:
  [1] E. D. Scheirer, "Tempo and beat analysis of acoustic musical signals,"
  The Journal of the Acoustical Society of America, vol. 103, p. 588, 1998.



See also
--------

Duration `(standard) <std_Duration.html>`__
Duration `(streaming) <streaming_Duration.html>`__
Energy `(standard) <std_Energy.html>`__
Energy `(streaming) <streaming_Energy.html>`__
EnergyBand `(standard) <std_EnergyBand.html>`__
EnergyBand `(streaming) <streaming_EnergyBand.html>`__
EnergyBandRatio `(standard) <std_EnergyBandRatio.html>`__
EnergyBandRatio `(streaming) <streaming_EnergyBandRatio.html>`__
SingleBeatLoudness `(standard) <std_SingleBeatLoudness.html>`__