:orphan:

Algorithm reference - Viterbi (streaming mode)
==============================================

Inputs
------

 - ``observationProbabilities`` (*vector_vector_real*) - the observation probabilities
 - ``initialization`` (*vector_real*) - the initialization
 - ``fromIndex`` (*vector_integer*) - the transition matrix from index
 - ``toIndex`` (*vector_integer*) - the transition matrix to index
 - ``transitionProbabilities`` (*vector_real*) - the transition probabilities matrix

Outputs
-------

 - ``path`` (*vector_integer*) - the decoded path

Description
-----------

This algorithm estimates the most-likely path by Viterbi algorithm. It is used in PitchYinProbabilistiesHMM algorithm.

This Viterbi algorithm returns the most likely path. The internal variable calculation uses double for a better precision.


References:
  [1] M. Mauch and S. Dixon, "pYIN: A Fundamental Frequency Estimator
  Using Probabilistic Threshold Distributions," in Proceedings of the
  IEEE International Conference on Acoustics, Speech, and Signal Processing
  (ICASSP 2014)Project Report, 2004


See also
--------

PitchYin `(standard) <std_PitchYin.html>`__
PitchYin `(streaming) <streaming_PitchYin.html>`__
Viterbi `(standard) <std_Viterbi.html>`__