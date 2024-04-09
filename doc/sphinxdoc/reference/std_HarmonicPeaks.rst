:orphan:

Algorithm reference - HarmonicPeaks (standard mode)
===================================================

Inputs
------

 - ``frequencies`` (*vector_real*) - the frequencies of the spectral peaks [Hz] (ascending order)
 - ``magnitudes`` (*vector_real*) - the magnitudes of the spectral peaks (ascending frequency order)
 - ``pitch`` (*real*) - an estimate of the fundamental frequency of the signal [Hz]

Outputs
-------

 - ``harmonicFrequencies`` (*vector_real*) - the frequencies of harmonic peaks [Hz]
 - ``harmonicMagnitudes`` (*vector_real*) - the magnitudes of harmonic peaks

Parameters
----------

 - ``maxHarmonics`` (*integer ∈ [1, ∞), default = 20*) :
     the number of harmonics to return including F0
 - ``tolerance`` (*real ∈ (0, 0.5), default = 0.2*) :
     the allowed ratio deviation from ideal harmonics

Description
-----------

This algorithm finds the harmonic peaks of a signal given its spectral peaks and its fundamental frequency.
Note:

  - "tolerance" parameter defines the allowed fixed deviation from ideal harmonics, being a percentage over the F0. For example: if the F0 is 100Hz you may decide to allow a deviation of 20%, that is a fixed deviation of 20Hz; for the harmonic series it is: [180-220], [280-320], [380-420], etc.
  - If "pitch" is zero, it means its value is unknown, or the sound is unpitched, and in that case the HarmonicPeaks algorithm returns an empty vector.
  - The output frequency and magnitude vectors are of size "maxHarmonics". If a particular harmonic was not found among spectral peaks, its ideal frequency value is output together with 0 magnitude.

This algorithm is intended to receive its "frequencies" and "magnitudes" inputs from the SpectralPeaks algorithm.

  - When input vectors differ in size or are empty, an exception is thrown. Input vectors must be ordered by ascending frequency excluding DC components and not contain duplicates, otherwise an exception is thrown.



References:
  [1] Harmonic Spectrum - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Harmonic_spectrum


See also
--------

HarmonicPeaks `(streaming) <streaming_HarmonicPeaks.html>`__
SpectralPeaks `(standard) <std_SpectralPeaks.html>`__
SpectralPeaks `(streaming) <streaming_SpectralPeaks.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__