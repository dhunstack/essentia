:orphan:

Algorithm reference - SpectralContrast (standard mode)
======================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the audio spectrum

Outputs
-------

 - ``spectralContrast`` (*vector_real*) - the spectral contrast coefficients
 - ``spectralValley`` (*vector_real*) - the magnitudes of the valleys

Parameters
----------

 - ``frameSize`` (*integer ∈ [2, ∞), default = 2048*) :
     the size of the fft frames
 - ``highFrequencyBound`` (*real ∈ (0, ∞), default = 11000*) :
     the upper bound of the highest band
 - ``lowFrequencyBound`` (*real ∈ (0, ∞), default = 20*) :
     the lower bound of the lowest band
 - ``neighbourRatio`` (*real ∈ (0, 1], default = 0.4*) :
     the ratio of the bins in the sub band used to calculate the peak and valley
 - ``numberBands`` (*integer ∈ (0, ∞), default = 6*) :
     the number of bands in the filter
 - ``sampleRate`` (*real ∈ (0, ∞), default = 22050*) :
     the sampling rate of the audio signal
 - ``staticDistribution`` (*real ∈ [0, 1], default = 0.15*) :
     the ratio of the bins to distribute equally

Description
-----------

This algorithm computes the Spectral Contrast feature of a spectrum. It is based on the Octave Based Spectral Contrast feature as described in [1]. The version implemented here is a modified version to improve discriminative power and robustness. The modifications are described in [2].


References:
  [1] D.-N. Jiang, L. Lu, H.-J. Zhang, J.-H. Tao, and L.-H. Cai, "Music type
  classification by spectral contrast feature," in IEEE International
  Conference on Multimedia and Expo (ICME’02), 2002, vol. 1, pp. 113–116.

  [2] V. Akkermans, J. Serrà, and P. Herrera, "Shape-based spectral contrast
  descriptor," in Sound and Music Computing Conference (SMC’09), 2009,
  pp. 143–148.



See also
--------

SpectralContrast `(streaming) <streaming_SpectralContrast.html>`__