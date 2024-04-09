:orphan:

Algorithm reference - KeyExtractor (standard mode)
==================================================

Inputs
------

 - ``audio`` (*vector_real*) - the audio input signal

Outputs
-------

 - ``key`` (*string*) - See Key algorithm documentation
 - ``scale`` (*string*) - See Key algorithm documentation
 - ``strength`` (*real*) - See Key algorithm documentation

Parameters
----------

 - ``averageDetuningCorrection`` (*bool ∈ {true, false}, default = true*) :
     shifts a pcp to the nearest tempered bin
 - ``frameSize`` (*integer ∈ (0, ∞), default = 4096*) :
     the framesize for computing tonal features
 - ``hopSize`` (*integer ∈ (0, ∞), default = 4096*) :
     the hopsize for computing tonal features
 - ``hpcpSize`` (*integer ∈ [12, ∞), default = 12*) :
     the size of the output HPCP (must be a positive nonzero multiple of 12)
 - ``maxFrequency`` (*real ∈ (0, ∞), default = 3500*) :
     max frequency to apply whitening to [Hz]
 - ``maximumSpectralPeaks`` (*integer ∈ (0, ∞), default = 60*) :
     the maximum number of spectral peaks
 - ``minFrequency`` (*real ∈ (0, ∞), default = 25*) :
     min frequency to apply whitening to [Hz]
 - ``pcpThreshold`` (*real ∈ [0, 1], default = 0.2*) :
     pcp bins below this value are set to 0
 - ``profileType`` (*string ∈ {diatonic, krumhansl, temperley, weichai, tonictriad, temperley2005, thpcp, shaath, gomez, noland, faraldo, pentatonic, edmm, edma, bgate, braw}, default = bgate*) :
     the type of polyphic profile to use for correlation calculation
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``spectralPeaksThreshold`` (*real ∈ (0, ∞), default = 0.0001*) :
     the threshold for the spectral peaks
 - ``tuningFrequency`` (*real ∈ (0, ∞), default = 440*) :
     the tuning frequency of the input signal
 - ``weightType`` (*string ∈ {none, cosine, squaredCosine}, default = cosine*) :
     type of weighting function for determining frequency contribution
 - ``windowType`` (*string ∈ {hamming, hann, hannnsgcq, triangular, square, blackmanharris62, blackmanharris70, blackmanharris74, blackmanharris92}, default = hann*) :
     the window type

Description
-----------

This algorithm extracts key/scale for an audio signal. It computes HPCP frames for the input signal and applies key estimation using the Key algorithm.

The algorithm allows tuning correction using two complementary methods:

  - Specify the expected `tuningFrequency` for the HPCP computation. The algorithm will adapt the semitone crossover frequencies for computing the HPCPs accordingly. If not specified, the default tuning is used. Tuning frequency can be estimated in advance using TuningFrequency algorithm.
  - Apply tuning correction posterior to HPCP computation, based on peaks in the HPCP distribution (`averageDetuningCorrection`). This is possible when hpcpSize > 12.


For more information, see the HPCP and Key algorithms.


See also
--------

HPCP `(standard) <std_HPCP.html>`__
HPCP `(streaming) <streaming_HPCP.html>`__
Key `(standard) <std_Key.html>`__
Key `(streaming) <streaming_Key.html>`__
KeyExtractor `(streaming) <streaming_KeyExtractor.html>`__
TuningFrequency `(standard) <std_TuningFrequency.html>`__
TuningFrequency `(streaming) <streaming_TuningFrequency.html>`__