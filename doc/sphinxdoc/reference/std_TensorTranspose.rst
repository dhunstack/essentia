:orphan:

Algorithm reference - TensorTranspose (standard mode)
=====================================================

Inputs
------

 - ``tensor`` (*tensor_real*) - the input tensor

Outputs
-------

 - ``tensor`` (*tensor_real*) - the transposed output tensor

Parameters
----------

 - ``permutation`` (*vector_integer*) :
     permutation of [0,1,2,3]. The i'th dimension of the returned tensor will correspond to the dimension numbered permutation[i] of the input.

Description
-----------

This algorithm performs transpositions over the axes of a tensor.



See also
--------

TensorTranspose `(streaming) <streaming_TensorTranspose.html>`__