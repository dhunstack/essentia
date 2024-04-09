:orphan:

Algorithm reference - LowLevelSpectralExtractor (streaming mode)
================================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``barkbands`` (*vector_real*) - spectral energy at each bark band. See BarkBands alogithm
 - ``barkbands_kurtosis`` (*real*) - kurtosis from bark bands. See DistributionShape algorithm documentation
 - ``barkbands_skewness`` (*real*) - skewness from bark bands. See DistributionShape algorithm documentation
 - ``barkbands_spread`` (*real*) - spread from barkbands. See DistributionShape algorithm documentation
 - ``hfc`` (*real*) - See HFC algorithm documentation
 - ``mfcc`` (*vector_real*) - See MFCC algorithm documentation
 - ``pitch`` (*real*) - See PitchYinFFT algorithm documentation
 - ``pitch_instantaneous_confidence`` (*real*) - See PitchYinFFT algorithm documentation
 - ``pitch_salience`` (*real*) - See PitchSalience algorithm documentation
 - ``silence_rate_20dB`` (*real*) - See SilenceRate algorithm documentation
 - ``silence_rate_30dB`` (*real*) - See SilenceRate algorithm documentation
 - ``silence_rate_60dB`` (*real*) - See SilenceRate algorithm documentation
 - ``spectral_complexity`` (*real*) - See Spectral algorithm documentation
 - ``spectral_crest`` (*real*) - See Crest algorithm documentation
 - ``spectral_decrease`` (*real*) - See Decrease algorithm documentation
 - ``spectral_energy`` (*real*) - See Energy algorithm documentation
 - ``spectral_energyband_low`` (*real*) - Energy in band (20,150] Hz. See EnergyBand algorithm documentation
 - ``spectral_energyband_middle_low`` (*real*) - Energy in band (150,800] Hz.See EnergyBand algorithm documentation
 - ``spectral_energyband_middle_high`` (*real*) - Energy in band (800,4000] Hz. See EnergyBand algorithm documentation
 - ``spectral_energyband_high`` (*real*) - Energy in band (4000,20000] Hz. See EnergyBand algorithm documentation
 - ``spectral_flatness_db`` (*real*) - See flatnessDB algorithm documentation
 - ``spectral_flux`` (*real*) - See Flux algorithm documentation
 - ``spectral_rms`` (*real*) - See RMS algorithm documentation
 - ``spectral_rolloff`` (*real*) - See RollOff algorithm documentation
 - ``spectral_strongpeak`` (*real*) - See StrongPeak algorithm documentation
 - ``zerocrossingrate`` (*real*) - See ZeroCrossingRate algorithm documentation
 - ``inharmonicity`` (*real*) - See Inharmonicity algorithm documentation
 - ``tristimulus`` (*vector_real*) - See Tristimulus algorithm documentation
 - ``oddtoevenharmonicenergyratio`` (*real*) - See OddToEvenHarmonicEnergyRatio algorithm documentation

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

LowLevelSpectralExtractor `(standard) <std_LowLevelSpectralExtractor.html>`__