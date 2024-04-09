:orphan:

Algorithm reference - BarkExtractor (streaming mode)
====================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``barkbands`` (*vector_real*) - spectral energy at each bark band. See BarkBands alogithm
 - ``barkbands_kurtosis`` (*real*) - kurtosis from bark bands. See DistributionShape algorithm documentation
 - ``barkbands_skewness`` (*real*) - skewness from bark bands. See DistributionShape algorithm documentation
 - ``barkbands_spread`` (*real*) - spread from barkbands. See DistributionShape algorithm documentation
 - ``spectral_crest`` (*real*) - See Crest algorithm documentation
 - ``spectral_flatness_db`` (*real*) - See flatnessDB algorithm documentation

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

This algorithm extracts some Bark bands based spectral features from an audio signal

