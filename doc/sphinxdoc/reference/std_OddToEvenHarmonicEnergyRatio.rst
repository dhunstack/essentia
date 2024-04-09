:orphan:

Algorithm reference - OddToEvenHarmonicEnergyRatio (standard mode)
==================================================================

Inputs
------

 - ``frequencies`` (*vector_real*) - the frequencies of the harmonic peaks (at least two frequencies in frequency ascending order)
 - ``magnitudes`` (*vector_real*) - the magnitudes of the harmonic peaks (at least two magnitudes in frequency ascending order)

Outputs
-------

 - ``oddToEvenHarmonicEnergyRatio`` (*real*) - the ratio between the odd and even harmonic energies of the given harmonic peaks

Description
-----------

This algorithm computes the ratio between a signal's odd and even harmonic energy given the signal's harmonic peaks. The odd to even harmonic energy ratio is a measure allowing to distinguish odd-harmonic-energy predominant sounds (such as from a clarinet) from equally important even-harmonic-energy sounds (such as from a trumpet). The required harmonic frequencies and magnitudes can be computed by the HarmonicPeaks algorithm.
In the case when the even energy is zero, which may happen when only even harmonics where found or when only one peak was found, the algorithm outputs the maximum real number possible. Therefore, this algorithm should be used in conjunction with the harmonic peaks algorithm.
If no peaks are supplied, the algorithm outputs a value of one, assuming either the spectrum was flat or it was silent.

An exception is thrown if the input frequency and magnitude vectors have different size. Finally, an exception is thrown if the frequency and magnitude vectors are not ordered by ascending frequency.


References:
  [1] K. D. Martin and Y. E. Kim, "Musical instrument identification:
  A pattern-recognition approach," The Journal of the Acoustical Society of
  America, vol. 104, no. 3, pp. 1768–1768, 1998.

  [2] K. Ringgenberg et al., "Musical Instrument Recognition,"
  http://cnx.org/content/col10313/1.3/pdf


See also
--------

HarmonicPeaks `(standard) <std_HarmonicPeaks.html>`__
HarmonicPeaks `(streaming) <streaming_HarmonicPeaks.html>`__
OddToEvenHarmonicEnergyRatio `(streaming) <streaming_OddToEvenHarmonicEnergyRatio.html>`__