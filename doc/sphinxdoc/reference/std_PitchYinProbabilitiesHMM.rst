:orphan:

Algorithm reference - PitchYinProbabilitiesHMM (standard mode)
==============================================================

Inputs
------

 - ``pitchCandidates`` (*vector_vector_real*) - the pitch candidates
 - ``probabilities`` (*vector_vector_real*) - the pitch probabilities

Outputs
-------

 - ``pitch`` (*vector_real*) - pitch frequencies in Hz

Parameters
----------

 - ``minFrequency`` (*real ∈ (0, ∞), default = 61.735*) :
     minimum detected frequency
 - ``numberBinsPerSemitone`` (*integer ∈ (1, ∞), default = 5*) :
     number of bins per semitone
 - ``selfTransition`` (*real ∈ (0, 1), default = 0.99*) :
     the self transition probabilities
 - ``yinTrust`` (*real ∈ (0, 1), default = 0.5*) :
     the yin trust parameter

Description
-----------

This algorithm estimates the smoothed fundamental frequency given the pitch candidates and probabilities using hidden Markov models. It is a part of the implementation of the probabilistic Yin algorithm [1].

An exception is thrown if an empty signal is provided.


References:
  [1] M. Mauch and S. Dixon, "pYIN: A Fundamental Frequency Estimator
  Using Probabilistic Threshold Distributions," in Proceedings of the
  IEEE International Conference on Acoustics, Speech, and Signal Processing
  (ICASSP 2014)Project Report, 2004


See also
--------

PitchYinProbabilitiesHMM `(streaming) <streaming_PitchYinProbabilitiesHMM.html>`__