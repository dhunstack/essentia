:orphan:

Algorithm reference - FlatnessDB (standard mode)
================================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``flatnessDB`` (*real*) - the flatness dB

Description
-----------

This algorithm computes the flatness of an array, which is defined as the ratio between the geometric mean and the arithmetic mean converted to dB scale.

Specifically, it can be used to compute spectral flatness [1,2], which is a measure of how noise-like a sound is, as opposed to being tone-like. The meaning of tonal in this context is in the sense of the amount of peaks or resonant structure in a power spectrum, as opposed to flat spectrum of a white noise. A high spectral flatness (approaching 1.0 for white noise) indicates that the spectrum has a similar amount of power in all spectral bands — this would sound similar to white noise, and the graph of the spectrum would appear relatively flat and smooth. A low spectral flatness (approaching 0.0 for a pure tone) indicates that the spectral power is concentrated in a relatively small number of bands — this would typically sound like a mixture of sine waves, and the spectrum would appear "spiky"

The size of the input array must be greater than 0. If the input array is empty an exception will be thrown. This algorithm uses the Flatness algorithm and thus inherits its input requirements and exceptions.


References:
  [1] G. Peeters, "A large set of audio features for sound description
  (similarity and classification) in the CUIDADO project," CUIDADO I.S.T.
  Project Report, 2004

  [2] Spectral flatness -  Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Spectral_flatness


See also
--------

Flatness `(standard) <std_Flatness.html>`__
Flatness `(streaming) <streaming_Flatness.html>`__
FlatnessDB `(streaming) <streaming_FlatnessDB.html>`__