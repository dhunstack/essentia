:orphan:

Algorithm reference - VectorRealToTensor (streaming mode)
=========================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input frames

Outputs
-------

 - ``tensor`` (*tensor_real*) - the accumulated frame in one single tensor

Parameters
----------

 - ``batchHopSize`` (*integer ∈ [0, ∞), default = 0*) :
     number of patches between the beginnings of adjacent batches. Use `0` to avoid overlap
 - ``lastBatchMode`` (*string ∈ {discard, push}, default = push*) :
     what to do with the last patches: `push` an incomplete batch (if the models accepts dynamic batches) or `discard` them
 - ``lastPatchMode`` (*string ∈ {discard, repeat}, default = repeat*) :
     what to do with the last frames: `repeat` them to fill the last patch or `discard` them
 - ``patchHopSize`` (*integer ∈ [0, ∞), default = 0*) :
     number of frames between the beginnings of adjacent patches. Use `0` to avoid overlap
 - ``shape`` (*vector_integer, default = [1, 1, 187, 96]*) :
     shape of the output tensor (batchSize, channels, patchSize, featureSize). If batchSize is set to -1 or 0 a single tensor is generated when the end of the stream is reached

Description
-----------

This algorithm generates tensors out of a stream of input frames. The 4 dimensions of the tensors stand for (batchSize, channels, patchSize, featureSize):

  - batchSize: Number of patches per tensor. If batchSize is set to -1 or 0 it will accumulate patches until the end of the stream is reached and then produce a single tensor. Warning: This option may exhaust memory depending on the size of the stream.
  - channels: Number of channels per tensor. Currently, only single-channel tensors are supported. Otherwise, an exception is thrown.
  - patchSize: Number of timestamps (i.e., number of frames) per patch.
  - featureSize: Expected number of features (e.g., mel bands) of every input frame. This algorithm throws an exception if the size of any frame is different from featureSize.

Additionally, the patchHopSize and batchHopSize parameters provide control over the amount of overlap on those dimensions.

