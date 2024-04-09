:orphan:

Algorithm reference - BeatsLoudness (streaming mode)
====================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``loudness`` (*real*) - the beat's energy in the whole spectrum
 - ``loudnessBandRatio`` (*vector_real*) - the ratio of the beat's energy in each band

Parameters
----------

 - ``beatDuration`` (*real ∈ (0, ∞), default = 0.05*) :
     window size for the beats' energy computation (the windows start at the onset)[s]
 - ``beatWindowDuration`` (*real ∈ (0, ∞), default = 0.1*) :
     window size for the beats' onset detection (the windows are centered around the positions in 'beats') [s]
 - ``beats`` (*vector_real, default = []*) :
     the list of beat positions (each position is in seconds)
 - ``frequencyBands`` (*vector_real, default = [0, 200, 400, 800, 1600, 3200, 22000]*) :
     the list of frequency bands to compute energy ratios [Hz]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]

Description
-----------

This algorithm computes the spectrum energy of beats in an audio signal given their positions. The energy is computed both on the whole frequency range and for each of the specified frequency bands. See the SingleBeatLoudness algorithm for a more detailed explanation.

Note that the algorithm will output empty results in the case if no beats are specified in the "beats" parameter.


See also
--------

BeatsLoudness `(standard) <std_BeatsLoudness.html>`__
Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__
SingleBeatLoudness `(standard) <std_SingleBeatLoudness.html>`__
SingleBeatLoudness `(streaming) <streaming_SingleBeatLoudness.html>`__