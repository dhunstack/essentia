:orphan:

Algorithm reference - PitchYinProbabilities (streaming mode)
============================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal frame

Outputs
-------

 - ``pitch`` (*vector_real*) - the output pitch candidate frequencies in cents
 - ``probabilities`` (*vector_real*) - the output pitch candidate probabilities
 - ``RMS`` (*real*) - the output RMS value

Parameters
----------

 - ``frameSize`` (*integer ∈ [2, ∞), default = 2048*) :
     number of samples in the input frame
 - ``lowAmp`` (*real ∈ (0, 1], default = 0.1*) :
     the low RMS amplitude threshold
 - ``preciseTime`` (*bool ∈ {true, false}, default = false*) :
     use non-standard precise YIN timing (slow).
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     sampling rate of the input audio [Hz]

Description
-----------

This algorithm estimates the fundamental frequencies, their probabilities given the frame of a monophonic music signal. It is a part of the implementation of the probabilistic Yin algorithm [1].

An exception is thrown if an empty signal is provided.


References:
  [1] M. Mauch and S. Dixon, "pYIN: A Fundamental Frequency Estimator
  Using Probabilistic Threshold Distributions," in Proceedings of the
  IEEE International Conference on Acoustics, Speech, and Signal Processing
  (ICASSP 2014)Project Report, 2004


See also
--------

PitchYinProbabilities `(standard) <std_PitchYinProbabilities.html>`__