:orphan:

Algorithm reference - SNR (streaming mode)
==========================================

Inputs
------

 - ``frame`` (*vector_real*) - the input audio frame

Outputs
-------

 - ``instantSNR`` (*real*) - SNR value for the the current frame
 - ``averagedSNR`` (*real*) - averaged SNR through an Exponential Moving Average filter
 - ``spectralSNR`` (*vector_real*) - instant SNR for each frequency bin

Parameters
----------

 - ``MAAlpha`` (*real ∈ [0, 1], default = 0.95*) :
     Alpha coefficient for the EMA SNR estimation [2]
 - ``MMSEAlpha`` (*real ∈ [0, 1], default = 0.98*) :
     Alpha coefficient for the MMSE estimation [1].
 - ``NoiseAlpha`` (*real ∈ [0, 1], default = 0.9*) :
     Alpha coefficient for the EMA noise estimation [2]
 - ``frameSize`` (*integer ∈ (1, ∞), default = 512*) :
     the size of the input frame
 - ``noiseThreshold`` (*real ∈ (-∞, 0], default = -40*) :
     Threshold to detect frames without signal
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``useBroadbadNoiseCorrection`` (*bool ∈ {true, false}, default = true*) :
     flag to apply the -10 \* log10(BW) broadband noise correction factor

Description
-----------

This algorithm computes the SNR of the input audio in a frame-wise manner.

The algorithm assumes that:

- The noise is gaussian.
- There is a region of noise (without signal) at the beginning of the stream in order to estimate the PSD of the noise [1].

Once the noise PSD is estimated, the algorithm relies on the Ephraim-Malah [2] recursion to estimate the SNR for each frequency bin.

The algorithm also returns an overall (a single value for the whole spectrum) SNR estimation and an averaged overall SNR estimation using Exponential Moving Average filtering.

This algorithm throws a warning if less than 15 frames are used to estimate the noise PSD.


References:

1. Vaseghi, S. V. (2008). Advanced digital signal processing and noise reduction. John Wiley & Sons. Page 336.

2. Ephraim, Y., & Malah, D. (1984). Speech enhancement using a minimum-mean square error short-time spectral amplitude estimator. IEEE Transactions on acoustics, speech, and signal processing, 32(6), 1109-1121.




See also
--------

SNR `(standard) <std_SNR.html>`__