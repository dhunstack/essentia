:orphan:

Algorithm reference - GFCC (streaming mode)
===========================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the audio spectrum

Outputs
-------

 - ``bands`` (*vector_real*) - the energies in ERB bands
 - ``gfcc`` (*vector_real*) - the gammatone feature cepstrum coefficients

Parameters
----------

 - ``dctType`` (*integer ∈ [2, 3], default = 2*) :
     the DCT type
 - ``highFrequencyBound`` (*real ∈ (0, ∞), default = 22050*) :
     the upper bound of the frequency range [Hz]
 - ``inputSize`` (*integer ∈ (1, ∞), default = 1025*) :
     the size of input spectrum
 - ``logType`` (*string ∈ {natural, dbpow, dbamp, log}, default = dbamp*) :
     logarithmic compression type. Use 'dbpow' if working with power and 'dbamp' if working with magnitudes
 - ``lowFrequencyBound`` (*real ∈ [0, ∞), default = 40*) :
     the lower bound of the frequency range [Hz]
 - ``numberBands`` (*integer ∈ [1, ∞), default = 40*) :
     the number of bands in the filter
 - ``numberCoefficients`` (*integer ∈ [1, ∞), default = 13*) :
     the number of output cepstrum coefficients
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``silenceThreshold`` (*real ∈ (0, ∞), default = 1e-10*) :
     silence threshold for computing log-energy bands
 - ``type`` (*string ∈ {magnitude, power}, default = power*) :
     use magnitude or power spectrum

Description
-----------

This algorithm computes the Gammatone-frequency cepstral coefficients of a spectrum. This is an equivalent of MFCCs, but using a gammatone filterbank (ERBBands) scaled on an Equivalent Rectangular Bandwidth (ERB) scale.


References:
  [1] Y. Shao, Z. Jin, D. Wang, and S. Srinivasan, "An auditory-based feature
  for robust speech recognition," in IEEE International Conference on
  Acoustics, Speech, and Signal Processing (ICASSP’09), 2009,
  pp. 4625-4628.


See also
--------

ERBBands `(standard) <std_ERBBands.html>`__
ERBBands `(streaming) <streaming_ERBBands.html>`__
GFCC `(standard) <std_GFCC.html>`__
MFCC `(standard) <std_MFCC.html>`__
MFCC `(streaming) <streaming_MFCC.html>`__