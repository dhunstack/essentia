:orphan:

Algorithm reference - TensorNormalize (standard mode)
=====================================================

Inputs
------

 - ``tensor`` (*tensor_real*) - the input tensor

Outputs
-------

 - ``tensor`` (*tensor_real*) - the normalized output tensor

Parameters
----------

 - ``axis`` (*integer ∈ [-1, 4), default = 0*) :
     Normalize along the given axis. -1 to normalize along all the dimensions
 - ``scaler`` (*string ∈ {standard, minMax}, default = standard*) :
     the type of the normalization to apply to input tensor
 - ``skipConstantSlices`` (*bool ∈ {false, true}, default = true*) :
     Whether to prevent dividing by zero constant slices (zero standard deviation)

Description
-----------

This algorithm performs normalization over a tensor.
When the axis parameter is set to -1 the input tensor is globally normalized. Any other value means that the tensor will be normalized along that axis.
This algorithm supports Standard and MinMax normalizations.


References:
  [1] Feature scaling - Wikipedia, the free encyclopedia,
  https://en.wikipedia.org/wiki/Feature_scaling


See also
--------

MinMax `(standard) <std_MinMax.html>`__
MinMax `(streaming) <streaming_MinMax.html>`__
TensorNormalize `(streaming) <streaming_TensorNormalize.html>`__