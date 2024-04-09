:orphan:

Algorithm reference - CrossCorrelation (standard mode)
======================================================

Inputs
------

 - ``arrayX`` (*vector_real*) - the first input array
 - ``arrayY`` (*vector_real*) - the second input array

Outputs
-------

 - ``crossCorrelation`` (*vector_real*) - the cross-correlation vector between the two input arrays (its size is equal to maxLag - minLag + 1)

Parameters
----------

 - ``maxLag`` (*integer ∈ (-∞, ∞), default = 1*) :
     the maximum lag to be computed between the two vectors
 - ``minLag`` (*integer ∈ (-∞, ∞), default = 0*) :
     the minimum lag to be computed between the two vectors

Description
-----------

This algorithm computes the cross-correlation vector of two signals. It accepts 2 parameters, minLag and maxLag which define the range of the computation of the innerproduct.

An exception is thrown if "minLag" is larger than "maxLag". An exception is also thrown if the input vectors are empty.


References:
  [1] Cross-correlation - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Cross-correlation


See also
--------

CrossCorrelation `(streaming) <streaming_CrossCorrelation.html>`__