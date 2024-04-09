:orphan:

Algorithm reference - HighResolutionFeatures (standard mode)
============================================================

Inputs
------

 - ``hpcp`` (*vector_real*) - the HPCPs, preferably of size >= 120

Outputs
-------

 - ``equalTemperedDeviation`` (*real*) - measure of the deviation of HPCP local maxima with respect to equal-tempered bins
 - ``nonTemperedEnergyRatio`` (*real*) - ratio between the energy on non-tempered bins and the total energy
 - ``nonTemperedPeaksEnergyRatio`` (*real*) - ratio between the energy on non-tempered peaks and the total energy

Parameters
----------

 - ``maxPeaks`` (*integer ∈ [1, ∞), default = 24*) :
     maximum number of HPCP peaks to consider when calculating outputs

Description
-----------

This algorithm computes high-resolution chroma features from an HPCP vector. The vector's size must be a multiple of 12 and it is recommended that it be larger than 120. In otherwords, the HPCP's resolution should be 10 Cents or more.
The high-resolution features being computed are:

  - Equal-temperament deviation: a measure of the deviation of HPCP local maxima with respect to equal-tempered bins. This is done by:
    a) Computing local maxima of HPCP vector
    b) Computing the deviations from equal-tempered (abs) bins and their average

  - Non-tempered energy ratio: the ratio betwen the energy on non-tempered bins and the total energy, computed from the HPCP average

  - Non-tempered peak energy ratio: the ratio betwen the energy on non tempered peaks and the total energy, computed from the HPCP average

HighFrequencyFeatures is intended to be used in conjunction with HPCP algorithm. Any input vector which size is not a positive multiple of 12, will raise an exception.


References:
  [1] E. Gómez and P. Herrera, "Comparative Analysis of Music Recordings
  from Western and Non-Western traditions by Automatic Tonal Feature
  Extraction," Empirical Musicology Review, vol. 3, pp. 140–156, 2008.

  [2] https://en.wikipedia.org/wiki/Equal_temperament


See also
--------

HPCP `(standard) <std_HPCP.html>`__
HPCP `(streaming) <streaming_HPCP.html>`__
HighResolutionFeatures `(streaming) <streaming_HighResolutionFeatures.html>`__