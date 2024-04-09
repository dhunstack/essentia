:orphan:

Algorithm reference - BeatsLoudness (standard mode)
===================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input audio signal

Outputs
-------

 - ``loudness`` (*vector_real*) - the beat's energy in the whole spectrum
 - ``loudnessBandRatio`` (*vector_vector_real*) - the ratio of the beat's energy on each frequency band

Parameters
----------

 - ``beatDuration`` (*real ∈ (0, ∞), default = 0.05*) :
     the duration of the window in which the beat will be restricted [s]
 - ``beatWindowDuration`` (*real ∈ (0, ∞), default = 0.1*) :
     the duration of the window in which to look for the beginning of the beat (centered around the positions in 'beats') [s]
 - ``beats`` (*vector_real, default = []*) :
     the list of beat positions (each position is in seconds)
 - ``frequencyBands`` (*vector_real, default = [20, 150, 400, 3200, 7000, 22000]*) :
     the list of bands to compute energy ratios [Hz
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]

Description
-----------

This algorithm computes the spectrum energy of beats in an audio signal given their positions. The energy is computed both on the whole frequency range and for each of the specified frequency bands. See the SingleBeatLoudness algorithm for a more detailed explanation.

Note that the algorithm will output empty results in the case if no beats are specified in the "beats" parameter.


See also
--------

BeatsLoudness `(streaming) <streaming_BeatsLoudness.html>`__
Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__
SingleBeatLoudness `(standard) <std_SingleBeatLoudness.html>`__
SingleBeatLoudness `(streaming) <streaming_SingleBeatLoudness.html>`__