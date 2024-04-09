:orphan:

Algorithm reference - TensorflowPredictMusiCNN (standard mode)
==============================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input audio signal sampled at 16 kHz

Outputs
-------

 - ``predictions`` (*vector_vector_real*) - the output values from the model node named after `output`

Parameters
----------

 - ``accumulate`` (*bool ∈ {true, false}, default = false*) :
     (deprecated, use `batchSize`) when true it runs a single Tensorflow session at the end of the stream. Otherwise a session is run for every new patch
 - ``batchSize`` (*integer ∈ [-1, ∞), default = 64*) :
     the batch size for prediction. This allows parallelization when GPUs are available. Set it to -1 or 0 to accumulate all the patches and run a single TensorFlow session at the end of the stream
 - ``graphFilename`` (*string, default = ""*) :
     the name of the file from which to load the TensorFlow graph
 - ``input`` (*string, default = model/Placeholder*) :
     the name of the input nodes in the Tensorflow graph
 - ``isTrainingName`` (*string, default = ""*) :
     the name of an additional input node indicating whether the model is to be run in a training mode (for models with a training mode, leave it empty otherwise)
 - ``lastPatchMode`` (*string ∈ {discard, repeat}, default = discard*) :
     what to do with the last frames: `repeat` them to fill the last patch or `discard` them
 - ``output`` (*string, default = model/Sigmoid*) :
     the name of the node from which to retrieve the output tensors
 - ``patchHopSize`` (*integer ∈ [0, ∞), default = 93*) :
     number of frames between the beginnings of adjacent patches. 0 to avoid overlap
 - ``patchSize`` (*integer ∈ [0, ∞), default = 187*) :
     number of frames required for each inference. This parameter should match the model's expected input shape.
 - ``savedModel`` (*string, default = ""*) :
     the name of the TensorFlow SavedModel. Overrides parameter `graphFilename`

Description
-----------

This algorithm makes predictions using MusiCNN-based models.

Internally, it uses TensorflowInputMusiCNN for the input feature extraction (mel bands). It feeds the model with patches of 187 mel bands frames and jumps a constant amount of frames determined by `patchHopSize`.

By setting the `batchSize` parameter to -1 or 0 the patches are stored to run a single TensorFlow session at the end of the stream. This allows to take advantage of parallelization when GPUs are available, but at the same time it can be memory exhausting for long files.

The recommended pipeline is as follows::

  MonoLoader(sampleRate=16000) >> TensorflowPredictMusiCNN

Note: This algorithm does not make any check on the input model so it is the user's responsibility to make sure it is a valid one.


References:

1. Pons, J., & Serra, X. (2019). musicnn: Pre-trained convolutional neural networks for music audio tagging. arXiv preprint arXiv:1909.06654.

2. Supported models at https://essentia.upf.edu/models/




See also
--------

MonoLoader `(standard) <std_MonoLoader.html>`__
MonoLoader `(streaming) <streaming_MonoLoader.html>`__
TensorflowInputMusiCNN `(standard) <std_TensorflowInputMusiCNN.html>`__
TensorflowInputMusiCNN `(streaming) <streaming_TensorflowInputMusiCNN.html>`__
TensorflowPredict `(standard) <std_TensorflowPredict.html>`__
TensorflowPredict `(streaming) <streaming_TensorflowPredict.html>`__
TensorflowPredictMusiCNN `(streaming) <streaming_TensorflowPredictMusiCNN.html>`__