:orphan:

Algorithm reference - LogSpectrum (streaming mode)
==================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - spectrum frame

Outputs
-------

 - ``logFreqSpectrum`` (*vector_real*) - log frequency spectrum frame
 - ``meanTuning`` (*vector_real*) - normalized mean tuning frequency
 - ``localTuning`` (*real*) - normalized local tuning frequency

Parameters
----------

 - ``binsPerSemitone`` (*real ∈ (0, ∞), default = 3*) :
      bins per semitone
 - ``frameSize`` (*integer ∈ (1, ∞), default = 1025*) :
     the input frame size of the spectrum vector
 - ``nOctave`` (*integer ∈ (0, 10), default = 7*) :
     the number of octave of the output vector
 - ``rollOn`` (*real ∈ [0, 5], default = 0*) :
     this removes low-frequency noise - useful in quiet recordings
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the input sample rate

Description
-----------

This algorithm computes spectrum with logarithmically distributed frequency bins. This code is ported from NNLS Chroma [1, 2].This algorithm also returns a local tuning that is retrieved for input frame and a global tuning that is updated with a moving average.

Note: As the algorithm uses moving averages that are updated every frame it should be reset before  processing a new audio file. To do this call reset() (or configure())


References:
  [1] Mauch, M., & Dixon, S. (2010, August). Approximate Note Transcription
  for the Improved Identification of Difficult Chords. In ISMIR (pp. 135-140).
  [2] Chordino and NNLS Chroma,
  http://www.isophonics.net/nnls-chroma


See also
--------

LogSpectrum `(standard) <std_LogSpectrum.html>`__