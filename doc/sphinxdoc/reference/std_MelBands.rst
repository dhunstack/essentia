:orphan:

Algorithm reference - MelBands (standard mode)
==============================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the audio spectrum

Outputs
-------

 - ``bands`` (*vector_real*) - the energy in mel bands

Parameters
----------

 - ``highFrequencyBound`` (*real ∈ [0, ∞), default = 22050*) :
     an upper-bound limit for the frequencies to be included in the bands
 - ``inputSize`` (*integer ∈ (1, ∞), default = 1025*) :
     the size of the spectrum
 - ``log`` (*bool ∈ {true, false}, default = false*) :
     compute log-energies (log2 (1 + energy))
 - ``lowFrequencyBound`` (*real ∈ [0, ∞), default = 0*) :
     a lower-bound limit for the frequencies to be included in the bands
 - ``normalize`` (*string ∈ {unit_sum, unit_tri, unit_max}, default = unit_sum*) :
     spectrum bin weights to use for each mel band: 'unit_max' to make each mel band vertex equal to 1, 'unit_sum' to make each mel band area equal to 1 summing the actual weights of spectrum bins, 'unit_area' to make each triangle mel band area equal to 1 normalizing the weights of each triangle by its bandwidth
 - ``numberBands`` (*integer ∈ (1, ∞), default = 24*) :
     the number of output bands
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sample rate
 - ``type`` (*string ∈ {magnitude, power}, default = power*) :
     'power' to output squared units, 'magnitude' to keep it as the input
 - ``warpingFormula`` (*string ∈ {slaneyMel, htkMel}, default = htkMel*) :
     The scale implementation type: 'htkMel' scale from the HTK toolkit [2, 3] (default) or 'slaneyMel' scale from the Auditory toolbox [4]
 - ``weighting`` (*string ∈ {warping, linear}, default = warping*) :
     type of weighting function for determining triangle area

Description
-----------

This algorithm computes energy in mel bands of a spectrum. It applies a frequency-domain filterbank (MFCC FB-40, [1]), which consists of equal area triangular filters spaced according to the mel scale. The filterbank is normalized in such a way that the sum of coefficients for every filter equals one. It is recommended that the input "spectrum" be calculated by the Spectrum algorithm.

It is required that parameter "highMelFrequencyBound" not be larger than the Nyquist frequency, but must be larger than the parameter, "lowMelFrequencyBound". Also, The input spectrum must contain at least two elements. If any of these requirements are violated, an exception is thrown.

Note: an exception will be thrown in the case when the number of spectrum bins (FFT size) is insufficient to compute the specified number of mel bands: in such cases the start and end bin of a band can be the same bin or adjacent bins, which will result in zero energy when summing bins for that band. Use zero padding to increase the number of spectrum bins in these cases.


References:
  [1] T. Ganchev, N. Fakotakis, and G. Kokkinakis, "Comparative evaluation
  of various MFCC implementations on the speaker verification task," in
  International Conference on Speach and Computer (SPECOM’05), 2005,
  vol. 1, pp. 191–194.

  [2] Mel-frequency cepstrum - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Mel_frequency_cepstral_coefficient

  [3] Young, S. J., Evermann, G., Gales, M. J. F., Hain, T., Kershaw, D.,
  Liu, X., … Woodland, P. C. (2009). The HTK Book (for HTK Version 3.4).
  Construction, (July 2000), 384, https://doi.org/http://htk.eng.cam.ac.uk

  [4] Slaney, M. Auditory Toolbox: A MATLAB Toolbox for Auditory Modeling Work.
  Technical Report, version 2, Interval Research Corporation, 1998.


See also
--------

FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__
MFCC `(standard) <std_MFCC.html>`__
MFCC `(streaming) <streaming_MFCC.html>`__
MelBands `(streaming) <streaming_MelBands.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__