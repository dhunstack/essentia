:orphan:

Algorithm reference - PitchYinProbabilistic (streaming mode)
============================================================

Inputs
------

 - ``signal`` (*real*) - the input mono audio signal

Outputs
-------

 - ``pitch`` (*vector_real*) - the output pitch estimations
 - ``voicedProbabilities`` (*vector_real*) - the voiced probabilities

Parameters
----------

 - ``frameSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the frame size of FFT
 - ``hopSize`` (*integer ∈ [1, ∞), default = 256*) :
     the hop size with which the pitch is computed
 - ``lowRMSThreshold`` (*real ∈ (0, 1], default = 0.1*) :
     the low RMS amplitude threshold
 - ``outputUnvoiced`` (*string ∈ {zero, abs, negative}, default = negative*) :
     whether output unvoiced frame. zero: output non-voiced pitch as 0.; abs: output non-voiced pitch as absolute values; negative: output non-voiced pitch as negative values
 - ``preciseTime`` (*bool ∈ {true, false}, default = false*) :
     use non-standard precise YIN timing (slow).
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm computes the pitch track of a mono audio signal using probabilistic Yin algorithm.

- The input mono audio signal is preprocessed with a FrameCutter to segment into frameSize chunks with a overlap hopSize.
- The pitch frequencies, probabilities and RMS values of the chunks are then calculated by PitchYinProbabilities algorithm. The results of all chunks are aggregated into a Essentia pool.
- The pitch frequencies and probabilities are finally sent to PitchYinProbabilitiesHMM algorithm to get a smoothed pitch track and a voiced probability.


References:
  [1] M. Mauch and S. Dixon, "pYIN: A Fundamental Frequency Estimator
  Using Probabilistic Threshold Distributions," in Proceedings of the
  IEEE International Conference on Acoustics, Speech, and Signal Processing
  (ICASSP 2014)Project Report, 2004


See also
--------

FrameCutter `(standard) <std_FrameCutter.html>`__
FrameCutter `(streaming) <streaming_FrameCutter.html>`__
PitchYin `(standard) <std_PitchYin.html>`__
PitchYin `(streaming) <streaming_PitchYin.html>`__
PitchYinProbabilistic `(standard) <std_PitchYinProbabilistic.html>`__
PitchYinProbabilities `(standard) <std_PitchYinProbabilities.html>`__
PitchYinProbabilities `(streaming) <streaming_PitchYinProbabilities.html>`__
PitchYinProbabilitiesHMM `(standard) <std_PitchYinProbabilitiesHMM.html>`__
PitchYinProbabilitiesHMM `(streaming) <streaming_PitchYinProbabilitiesHMM.html>`__
RMS `(standard) <std_RMS.html>`__
RMS `(streaming) <streaming_RMS.html>`__