:orphan:

Algorithm reference - SpectralComplexity (standard mode)
========================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input spectrum

Outputs
-------

 - ``spectralComplexity`` (*real*) - the spectral complexity of the input spectrum

Parameters
----------

 - ``magnitudeThreshold`` (*real ∈ [0, ∞), default = 0.005*) :
     the minimum spectral-peak magnitude that contributes to spectral complexity
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]

Description
-----------

This algorithm computes the spectral complexity of a spectrum. The spectral complexity is based on the number of peaks in the input spectrum.

It is recommended that the input "spectrum" be computed by the Spectrum algorithm. The input "spectrum" is passed to the SpectralPeaks algorithm and thus inherits its input requirements and exceptions.

References:
  [1] C. Laurier, O. Meyers, J. Serrà, M. Blech, P. Herrera, and X. Serra,
  "Indexing music by mood: design and integration of an automatic
  content-based annotator," Multimedia Tools and Applications, vol. 48,
  no. 1, pp. 161–184, 2009.



See also
--------

SpectralComplexity `(streaming) <streaming_SpectralComplexity.html>`__
SpectralPeaks `(standard) <std_SpectralPeaks.html>`__
SpectralPeaks `(streaming) <streaming_SpectralPeaks.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__