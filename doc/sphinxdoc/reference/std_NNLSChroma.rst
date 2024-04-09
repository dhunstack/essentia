:orphan:

Algorithm reference - NNLSChroma (standard mode)
================================================

Inputs
------

 - ``logSpectrogram`` (*vector_vector_real*) - log spectrum frames
 - ``meanTuning`` (*vector_real*) - mean tuning frames
 - ``localTuning`` (*vector_real*) - local tuning frames

Outputs
-------

 - ``tunedLogfreqSpectrum`` (*vector_vector_real*) - Log frequency spectrum after tuning
 - ``semitoneSpectrum`` (*vector_vector_real*) - a spectral representation with one bin per semitone
 - ``bassChromagram`` (*vector_vector_real*) -  a 12-dimensional chromagram, restricted to the bass range
 - ``chromagram`` (*vector_vector_real*) - a 12-dimensional chromagram, restricted with mid-range emphasis

Parameters
----------

 - ``chromaNormalization`` (*string ∈ {none, maximum, L1, L2}, default = none*) :
     determines whether or how the chromagrams are normalised
 - ``frameSize`` (*integer ∈ (1, ∞), default = 1025*) :
     the input frame size of the spectrum vector
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the input sample rate
 - ``spectralShape`` (*real ∈ (0.5, 0.9), default = 0.7*) :
      the shape of the notes in the NNLS dictionary
 - ``spectralWhitening`` (*real ∈ [0, 1.0], default = 1*) :
     determines how much the log-frequency spectrum is whitened
 - ``tuningMode`` (*string ∈ {global, local}, default = global*) :
     local uses a local average for tuning, global uses all audio frames. Local tuning is only advisable when the tuning is likely to change over the audio
 - ``useNNLS`` (*bool ∈ {true, false}, default = true*) :
     toggle between NNLS approximate transcription and linear spectral mapping

Description
-----------

This algorithm extracts treble and bass chromagrams from a sequence of log-frequency spectrum frames.
On this representation, two processing steps are performed:

  -tuning, after which each centre bin (i.e. bin 2, 5, 8, ...) corresponds to a semitone, even if the tuning of the piece deviates from 440 Hz standard pitch.
  -running standardisation: subtraction of the running mean, division by the running standard deviation. This has a spectral whitening effect.

This code is ported from NNLS Chroma [1, 2]. To achieve similar results follow this processing chain:
frame slicing with sample rate = 44100, frame size = 16384, hop size = 2048 -> Windowing with Hann and no normalization -> Spectrum -> LogSpectrum.


References:
  [1] Mauch, M., & Dixon, S. (2010, August). Approximate Note Transcription
  for the Improved Identification of Difficult Chords. In ISMIR (pp. 135-140).
  [2] Chordino and NNLS Chroma,
  http://www.isophonics.net/nnls-chroma


See also
--------

LogSpectrum `(standard) <std_LogSpectrum.html>`__
LogSpectrum `(streaming) <streaming_LogSpectrum.html>`__
NNLSChroma `(streaming) <streaming_NNLSChroma.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__
Windowing `(standard) <std_Windowing.html>`__
Windowing `(streaming) <streaming_Windowing.html>`__