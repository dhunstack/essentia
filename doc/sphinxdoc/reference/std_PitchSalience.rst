:orphan:

Algorithm reference - PitchSalience (standard mode)
===================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input audio spectrum

Outputs
-------

 - ``pitchSalience`` (*real*) - the pitch salience (normalized from 0 to 1)

Parameters
----------

 - ``highBoundary`` (*real ∈ (0, ∞), default = 5000*) :
     until which frequency we are looking for the minimum (must be smaller than half sampleRate) [Hz]
 - ``lowBoundary`` (*real ∈ (0, ∞), default = 100*) :
     from which frequency we are looking for the maximum (must not be larger than highBoundary) [Hz]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm computes the pitch salience of a spectrum. The pitch salience is given by the ratio of the highest auto correlation value of the spectrum to the non-shifted auto correlation value. Pitch salience was designed as quick measure of tone sensation. Unpitched sounds (non-musical sound effects) and pure tones have an average pitch salience value close to 0 whereas sounds containing several harmonics in the spectrum tend to have a higher value.

Note that this algorithm may give better results when used with low sampling rates (i.e. 8000) as the information in the bands musically meaningful will have more relevance.

This algorithm uses AutoCorrelation on the input "spectrum" and thus inherits its input requirements and exceptions. An exception is thrown at configuration time if "lowBoundary" is larger than "highBoundary" and/or if "highBoundary" is not smaller than half "sampleRate". At computation time, an exception is thrown if the input spectrum is empty. Also note that feeding silence to this algorithm will return zero.

Application: characterizing percussive sounds.


References:
  [1] J. Ricard "Towards computational morphological description of sound.
  DEA pre-thesis research work, Universitat Pompeu Fabra, Barcelona, 2004.


See also
--------

AutoCorrelation `(standard) <std_AutoCorrelation.html>`__
AutoCorrelation `(streaming) <streaming_AutoCorrelation.html>`__
PitchSalience `(streaming) <streaming_PitchSalience.html>`__