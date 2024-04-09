:orphan:

Algorithm reference - SingleGaussian (standard mode)
====================================================

Inputs
------

 - ``matrix`` (*matrix_real*) - the input data matrix (e.g. the MFCC descriptor over frames)

Outputs
-------

 - ``mean`` (*vector_real*) - the mean of the values
 - ``covariance`` (*matrix_real*) - the covariance matrix
 - ``inverseCovariance`` (*matrix_real*) - the inverse of the covariance matrix

Description
-----------

This algorithm estimates the single gaussian distribution for a matrix of feature vectors. For example, using the single gaussian on descriptors like MFCC with the symmetric Kullback-Leibler divergence might be a much better option than just the mean and variance of the descriptors over a whole signal.

An exception is thrown if the covariance of the input matrix is singular or if the input matrix is empty.


References:
  [1] E. Pampalk, "Computational models of music similarity and their
  application in music information retrieval,” Vienna University of
  Technology, 2006.


See also
--------

MFCC `(standard) <std_MFCC.html>`__
MFCC `(streaming) <streaming_MFCC.html>`__
SingleGaussian `(streaming) <streaming_SingleGaussian.html>`__