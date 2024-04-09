:orphan:

Algorithm reference - TensorToPool (streaming mode)
===================================================

Inputs
------

 - ``tensor`` (*tensor_real*) - the tensor to be added to the pool

Outputs
-------

 - ``pool`` (*pool*) - the pool with the added namespace

Parameters
----------

 - ``mode`` (*string ∈ {add, overwrite}, default = overwrite*) :
     what to do with the input tensors
 - ``namespace`` (*string, default = input_0*) :
     where to add the input tensor

Description
-----------

This algorithm inserts a tensor into a pool under a given namespace. Suppors adding (accumulation) or (setting) overwritting

