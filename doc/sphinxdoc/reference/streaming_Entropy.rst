:orphan:

Algorithm reference - Entropy (streaming mode)
==============================================

Inputs
------

 - ``array`` (*vector_real*) - the input array (cannot contain negative values, and must be non-empty)

Outputs
-------

 - ``entropy`` (*real*) - the entropy of the input array

Description
-----------

This algorithm computes the Shannon entropy of an array. Entropy can be used to quantify the peakiness of a distribution. This has been used for voiced/unvoiced decision in automatic speech recognition. 

Entropy cannot be computed neither on empty arrays nor arrays which contain negative values. In such cases, exceptions will be thrown.


References:
  [1] H. Misra, S. Ikbal, H. Bourlard and H. Hermansky, "Spectral entropy
  based feature for robust ASR," in IEEE International Conference on
  Acoustics, Speech, and Signal Processing (ICASSP'04).


See also
--------

Entropy `(standard) <std_Entropy.html>`__