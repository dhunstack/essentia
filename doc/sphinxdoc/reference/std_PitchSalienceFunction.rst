:orphan:

Algorithm reference - PitchSalienceFunction (standard mode)
===========================================================

Inputs
------

 - ``frequencies`` (*vector_real*) - the frequencies of the spectral peaks [Hz]
 - ``magnitudes`` (*vector_real*) - the magnitudes of the spectral peaks

Outputs
-------

 - ``salienceFunction`` (*vector_real*) - array of the quantized pitch salience values

Parameters
----------

 - ``binResolution`` (*real ∈ (0, 100], default = 10*) :
     salience function bin resolution [cents]
 - ``harmonicWeight`` (*real ∈ [0, 1], default = 0.8*) :
     harmonic weighting parameter (weight decay ratio between two consequent harmonics, =1 for no decay)
 - ``magnitudeCompression`` (*real ∈ (0, 1], default = 1*) :
     magnitude compression parameter (=0 for maximum compression, =1 for no compression)
 - ``magnitudeThreshold`` (*real ∈ [0, ∞), default = 40*) :
     peak magnitude threshold (maximum allowed difference from the highest peak in dBs)
 - ``numberHarmonics`` (*integer ∈ [1, ∞), default = 20*) :
     number of considered harmonics
 - ``referenceFrequency`` (*real ∈ (0, ∞), default = 55*) :
     the reference frequency for Hertz to cent convertion [Hz], corresponding to the 0th cent bin

Description
-----------

This algorithm computes the pitch salience function of a signal frame given its spectral peaks. The salience function covers a pitch range of nearly five octaves (i.e., 6000 cents), starting from the "referenceFrequency", and is quantized into cent bins according to the specified "binResolution". The salience of a given frequency is computed as the sum of the weighted energies found at integer multiples (harmonics) of that frequency. 

This algorithm is intended to receive its "frequencies" and "magnitudes" inputs from the SpectralPeaks algorithm. The output is a vector of salience values computed for the cent bins. The 0th bin corresponds to the specified "referenceFrequency".

If both input vectors are empty (i.e., no spectral peaks are provided), a zero salience function is returned. Input vectors must contain positive frequencies, must not contain negative magnitudes and these input vectors must be of the same size, otherwise an exception is thrown. It is highly recommended to avoid erroneous peak duplicates (peaks of the same frequency occurring more than once), but it is up to the user's own control and no exception will be thrown.


References:
  [1] J. Salamon and E. Gómez, "Melody extraction from polyphonic music
  signals using pitch contour characteristics," IEEE Transactions on Audio,
  Speech, and Language Processing, vol. 20, no. 6, pp. 1759–1770, 2012.



See also
--------

PitchSalienceFunction `(streaming) <streaming_PitchSalienceFunction.html>`__
SpectralPeaks `(standard) <std_SpectralPeaks.html>`__
SpectralPeaks `(streaming) <streaming_SpectralPeaks.html>`__