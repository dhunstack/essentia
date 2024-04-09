:orphan:

Algorithm reference - Crest (streaming mode)
============================================

Inputs
------

 - ``array`` (*vector_real*) - the input array (cannot contain negative values, and must be non-empty)

Outputs
-------

 - ``crest`` (*real*) - the crest of the input array

Description
-----------

This algorithm computes the crest of an array. The crest is defined as the ratio between the maximum value and the arithmetic mean of an array. Typically it is used on the magnitude spectrum.

Crest cannot be computed neither on empty arrays nor arrays which contain negative values. In such cases, exceptions will be thrown.


References:
  [1] G. Peeters, "A large set of audio features for sound description
  (similarity and classification) in the CUIDADO project," CUIDADO I.S.T.
  Project Report, 2004


See also
--------

Crest `(standard) <std_Crest.html>`__