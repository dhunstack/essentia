:orphan:

Algorithm reference - LowLevelSpectralExtractor (standard mode)
===============================================================

Inputs
------

 - ``signal`` (*vector_real*) - the audio input signal

Outputs
-------

 - ``barkbands`` (*vector_vector_real*) - spectral energy at each bark band. See BarkBands alogithm
 - ``barkbands_kurtosis`` (*vector_real*) - kurtosis from bark bands. See DistributionShape algorithm documentation
 - ``barkbands_skewness`` (*vector_real*) - skewness from bark bands. See DistributionShape algorithm documentation
 - ``barkbands_spread`` (*vector_real*) - spread from barkbands. See DistributionShape algorithm documentation
 - ``hfc`` (*vector_real*) - See HFC algorithm documentation
 - ``mfcc`` (*vector_vector_real*) - See MFCC algorithm documentation
 - ``pitch`` (*vector_real*) - See PitchYinFFT algorithm documentation
 - ``pitch_instantaneous_confidence`` (*vector_real*) - See PitchYinFFT algorithm documentation
 - ``pitch_salience`` (*vector_real*) - See PitchSalience algorithm documentation
 - ``silence_rate_20dB`` (*vector_real*) - See SilenceRate algorithm documentation
 - ``silence_rate_30dB`` (*vector_real*) - See SilenceRate algorithm documentation
 - ``silence_rate_60dB`` (*vector_real*) - See SilenceRate algorithm documentation
 - ``spectral_complexity`` (*vector_real*) - See Spectral algorithm documentation
 - ``spectral_crest`` (*vector_real*) - See Crest algorithm documentation
 - ``spectral_decrease`` (*vector_real*) - See Decrease algorithm documentation
 - ``spectral_energy`` (*vector_real*) - See Energy algorithm documentation
 - ``spectral_energyband_low`` (*vector_real*) - Energy in band (20,150] Hz. See EnergyBand algorithm documentation
 - ``spectral_energyband_middle_low`` (*vector_real*) - Energy in band (150,800] Hz.See EnergyBand algorithm documentation
 - ``spectral_energyband_middle_high`` (*vector_real*) - Energy in band (800,4000] Hz. See EnergyBand algorithm documentation
 - ``spectral_energyband_high`` (*vector_real*) - Energy in band (4000,20000] Hz. See EnergyBand algorithm documentation
 - ``spectral_flatness_db`` (*vector_real*) - See flatnessDB algorithm documentation
 - ``spectral_flux`` (*vector_real*) - See Flux algorithm documentation
 - ``spectral_rms`` (*vector_real*) - See RMS algorithm documentation
 - ``spectral_rolloff`` (*vector_real*) - See RollOff algorithm documentation
 - ``spectral_strongpeak`` (*vector_real*) - See StrongPeak algorithm documentation
 - ``zerocrossingrate`` (*vector_real*) - See ZeroCrossingRate algorithm documentation
 - ``inharmonicity`` (*vector_real*) - See Inharmonicity algorithm documentation
 - ``tristimulus`` (*vector_vector_real*) - See Tristimulus algorithm documentation
 - ``oddtoevenharmonicenergyratio`` (*vector_real*) - See OddToEvenHarmonicEnergyRatio algorithm documentation

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

This algorithm extracts all low-level spectral features, which do not require an equal-loudness filter for their computation, from an audio signal


See also
--------

LowLevelSpectralExtractor `(streaming) <streaming_LowLevelSpectralExtractor.html>`__