:orphan:

Algorithm reference - Centroid (streaming mode)
===============================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``centroid`` (*real*) - the centroid of the array

Parameters
----------

 - ``range`` (*real ∈ (0, ∞), default = 1*) :
     the range of the input array, used for normalizing the results

Description
-----------

This algorithm computes the centroid of an array. The centroid is normalized to a specified range. This algorithm can be used to compute spectral centroid or temporal centroid.

The spectral centroid is a measure that indicates where the "center of mass" of the spectrum is. Perceptually, it has a robust connection with the impression of "brightness" of a sound, and therefore is used to characterise musical timbre. It is calculated as the weighted mean of the frequencies present in the signal, with their magnitudes as the weights.

The temporal centroid is the point in time in a signal that is a temporal balancing point of the sound event energy. It can be computed from the envelope of the signal across audio samples [3] (see Envelope algorithm) or over the RMS level of signal across frames [4] (see RMS algorithm).

Note:
- For a spectral centroid [hz], frequency range should be equal to samplerate/2
- For a temporal envelope centroid [s], range should be equal to (audio_size_in_samples-1) / samplerate
- Exceptions are thrown when input array contains less than 2 elements.


References:
  [1] Function Centroid -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/FunctionCentroid.html
  [2] Spectral centroid - Wikipedia, the free encyclopedia,
  https://en.wikipedia.org/wiki/Spectral_centroid
  [3] G. Peeters, "A large set of audio features for sound description
  (similarity and classification) in the CUIDADO project," CUIDADO I.S.T.
  Project Report, 2004.
  [4] Klapuri, A., & Davy, M. (Eds.). (2007). Signal processing methods for
  music transcription. Springer Science & Business Media.


See also
--------

Centroid `(standard) <std_Centroid.html>`__
Envelope `(standard) <std_Envelope.html>`__
Envelope `(streaming) <streaming_Envelope.html>`__
RMS `(standard) <std_RMS.html>`__
RMS `(streaming) <streaming_RMS.html>`__