:orphan:

Algorithm reference - TensorflowPredict2D (standard mode)
=========================================================

Inputs
------

 - ``signal`` (*matrix_real*) - the input features

Outputs
-------

 - ``predictions`` (*vector_vector_real*) - the output predictions from the node named after `output`

Parameters
----------

 - ``accumulate`` (*bool ∈ {true, false}, default = false*) :
     (deprecated, use `batchSize`) when true it runs a single TensorFlow session at the end of the stream. Otherwise, a session is run for every new patch
 - ``batchSize`` (*integer ∈ [-1, ∞), default = 64*) :
     batch size for prediction. This allows parallelization when GPUs are available. Set it to -1 or 0 to accumulate all the patches and run a single TensorFlow session at the end of the stream
 - ``dimensions`` (*integer ∈ [0, ∞), default = 200*) :
     number of dimensions on the input features. This parameter is overridden by the shape of the input data
 - ``graphFilename`` (*string, default = ""*) :
     name of the file from which to load the TensorFlow graph
 - ``input`` (*string, default = model/Placeholder*) :
     name of the input node in the TensorFlow graph
 - ``isTrainingName`` (*string, default = ""*) :
     name of an additional input node to indicate the model if it is in training mode or not. Leave it empty when the model does not need such input
 - ``lastPatchMode`` (*string ∈ {discard, repeat}, default = discard*) :
     what to do with the last timestamps: `repeat` them to fill the last patch or `discard` them
 - ``output`` (*string, default = model/Sigmoid*) :
     name of the node from which to retrieve the output tensors
 - ``patchHopSize`` (*integer ∈ [0, ∞), default = 1*) :
     number of timestamps between the beginning of adjacent patches. 0 to avoid overlap
 - ``patchSize`` (*integer ∈ [0, ∞), default = 1*) :
     number of timestamps required for each inference. This parameter should match the model's expected input shape.
 - ``savedModel`` (*string, default = ""*) :
     name of the TensorFlow SavedModel. Overrides the parameter `graphFilename`

Description
-----------

This algorithm makes predictions using models expecting 2D representations.

It expects an input feature matrix with shape (timestamps, dimensions) and processes it sequentially along the time axis. Internally, the algorithm generates tensors with shape (batchSize, 1, patchSize, dimensions) so that the input can be processed by TensorflowPredict. `patchSize` is the number of timestamps that the model expects, `batchSize` is the number of patches to be fed to the model at once (most useful when a GPU is available), and `patchHopSize` is the number of timestamps that separate the beginning of adjacent patches.

By setting the `batchSize` parameter to -1 or 0 the patches are stored to run a single TensorFlow session at the end of the stream. This allows taking advantage of parallelization when GPUs are available, but at the same time, it can be memory exhausting for long files.

A possible pipeline is as follows::

  MonoLoader(sampleRate=16000) >> TensorflowPredictMusiCNN(graphFilename='embedding_model.pb') >> TensorflowPredict2D(graphFilename='classification_model.pb')

Note: This algorithm does not make any check on the input model so it is the user's responsibility to make sure it is a valid one.

Note 2: In standard mode, the `dimensions` parameter is overridden with the shape of the input data. However, in streaming mode, the user is responsible for setting `dimensions` to the adequate value. Otherwise, an exception is thrown.


References:

1. Supported models at https://essentia.upf.edu/models/




See also
--------

MonoLoader `(standard) <std_MonoLoader.html>`__
MonoLoader `(streaming) <streaming_MonoLoader.html>`__
TensorflowPredict `(standard) <std_TensorflowPredict.html>`__
TensorflowPredict `(streaming) <streaming_TensorflowPredict.html>`__
TensorflowPredict2D `(streaming) <streaming_TensorflowPredict2D.html>`__
TensorflowPredictMusiCNN `(standard) <std_TensorflowPredictMusiCNN.html>`__
TensorflowPredictMusiCNN `(streaming) <streaming_TensorflowPredictMusiCNN.html>`__