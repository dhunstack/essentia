:orphan:

Algorithm reference - TensorflowPredictFSDSINet (streaming mode)
================================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal sampled at 22.05 kHz

Outputs
-------

 - ``predictions`` (*vector_real*) - the output values from the model node named after `output`

Parameters
----------

 - ``batchSize`` (*integer ∈ [-1, ∞), default = 64*) :
     the batch size for prediction. This allows parallelization when GPUs are available. Set it to -1 or 0 to accumulate all the patches and run a single TensorFlow session at the end of the stream
 - ``graphFilename`` (*string, default = ""*) :
     the name of the file from which to load the TensorFlow graph
 - ``input`` (*string, default = x*) :
     the name of the input node in the TensorFlow graph
 - ``lastPatchMode`` (*string ∈ {discard, repeat}, default = discard*) :
     what to do with the last frames: `repeat` them to fill the last patch or `discard` them
 - ``output`` (*string, default = model/predictions/Sigmoid*) :
     the name of the node from which to retrieve the output tensors
 - ``patchHopSize`` (*integer ∈ [0, ∞), default = 50*) :
     the number of frames between the beginnings of adjacent patches. 0 to avoid overlap
 - ``savedModel`` (*string, default = ""*) :
     the name of the TensorFlow SavedModel. Overrides parameter `graphFilename`

Description
-----------

This algorithm makes predictions using FSD-SINet models.

Internally, it uses TensorflowInputFSDSINet for the input feature extraction (mel bands). It feeds the model with patches of 101 mel-band frames and jumps a constant amount of frames determined by `patchHopSize`.

By setting the `batchSize` parameter to -1 or 0 the patches are stored to run a single TensorFlow session at the end of the stream. This allows to take advantage of parallelization when GPUs are available, but at the same time it can be memory exhausting for long files.

The recommended pipeline is as follows::

  MonoLoader(sampleRate=22050) >> TensorflowPredictFSDSINet

Note: This algorithm does not make any check on the input model so it is the user's responsibility to make sure it is a valid one.

Note: The FSD-SINet models were trained on normalized audio clips. Clip-level normalization is only implemented in standard mode since in streaming there is no access to the entire audio clip. In the streaming case, the user is responsible for controlling the dynamic range of the input signal. Ideally, the signal should be zero-mean (no DC) and normalized to the full dynamic range (-1, 1).


References:
  [1] Fonseca, E., Ferraro, A., & Serra, X. (2021). Improving sound event classification by increasing shift invariance in convolutional neural networks. arXiv preprint arXiv:2107.00623.
  [2] https://github.com/edufonseca/shift_sec


See also
--------

MonoLoader `(standard) <std_MonoLoader.html>`__
MonoLoader `(streaming) <streaming_MonoLoader.html>`__
TensorflowInputFSDSINet `(standard) <std_TensorflowInputFSDSINet.html>`__
TensorflowInputFSDSINet `(streaming) <streaming_TensorflowInputFSDSINet.html>`__
TensorflowPredict `(standard) <std_TensorflowPredict.html>`__
TensorflowPredict `(streaming) <streaming_TensorflowPredict.html>`__
TensorflowPredictFSDSINet `(standard) <std_TensorflowPredictFSDSINet.html>`__