:orphan:

Algorithm reference - SpectralWhitening (standard mode)
=======================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the audio linear spectrum
 - ``frequencies`` (*vector_real*) - the spectral peaks' linear frequencies
 - ``magnitudes`` (*vector_real*) - the spectral peaks' linear magnitudes

Outputs
-------

 - ``magnitudes`` (*vector_real*) - the whitened spectral peaks' linear magnitudes

Parameters
----------

 - ``maxFrequency`` (*real ∈ (0, ∞), default = 5000*) :
     max frequency to apply whitening to [Hz]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

Performs spectral whitening of spectral peaks of a spectrum. The algorithm works in dB scale, but the conversion is done by the algorithm so input should be in linear scale. The concept of 'whitening' refers to 'white noise' or a non-zero flat spectrum. It first computes a spectral envelope similar to the 'true envelope' in [1], and then modifies the amplitude of each peak relative to the envelope. For example, the predominant peaks will have a value close to 0dB because they are very close to the envelope. On the other hand, minor peaks between significant peaks will have lower amplitudes such as -30dB.

The input "frequencies" and "magnitudes" can be computed using the SpectralPeaks algorithm.

An exception is thrown if the input frequency and magnitude input vectors are of different size.


References:
  [1] A. Röbel and X. Rodet, "Efficient spectral envelope estimation and its
  application to pitch shifting and envelope preservation," in International
  Conference on Digital Audio Effects (DAFx’05), 2005.


See also
--------

SpectralPeaks `(standard) <std_SpectralPeaks.html>`__
SpectralPeaks `(streaming) <streaming_SpectralPeaks.html>`__
SpectralWhitening `(streaming) <streaming_SpectralWhitening.html>`__