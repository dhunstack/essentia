:orphan:

Algorithm reference - LowLevelSpectralEqloudExtractor (streaming mode)
======================================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``spectral_centroid`` (*real*) - See Centroid algorithm documentation
 - ``dissonance`` (*real*) - See Dissonance algorithm documentation
 - ``sccoeffs`` (*vector_real*) - See SpectralContrast algorithm documentation
 - ``scvalleys`` (*vector_real*) - See SpectralContrast algorithm documentation
 - ``spectral_kurtosis`` (*real*) - See DistributionShape algorithm documentation
 - ``spectral_skewness`` (*real*) - See DistributionShape algorithm documentation
 - ``spectral_spread`` (*real*) - See DistributionShape algorithm documentation

Parameters
----------

 - ``frameSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the frame size for computing low level features
 - ``hopSize`` (*integer ∈ (0, ∞), default = 1024*) :
     the hop size for computing low level features
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate

Description
-----------

This algorithm extracts a set of level spectral features for which it is recommended to apply a preliminary equal-loudness filter over an input audio signal (according to the internal evaluations conducted at Music Technology Group). To this end, you are expected to provide the output of EqualLoudness algorithm as an input for this algorithm. Still, you are free to provide an unprocessed audio input in the case you want to compute these features without equal-loudness filter.

Note that at present we do not dispose any reference to justify the necessity of equal-loudness filter. Our recommendation is grounded on internal evaluations conducted at Music Technology Group that have shown the increase in numeric robustness as a function of the audio encoders used (mp3, ogg, ...) for these features.


See also
--------

EqualLoudness `(standard) <std_EqualLoudness.html>`__
EqualLoudness `(streaming) <streaming_EqualLoudness.html>`__
Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__
LowLevelSpectralEqloudExtractor `(standard) <std_LowLevelSpectralEqloudExtractor.html>`__