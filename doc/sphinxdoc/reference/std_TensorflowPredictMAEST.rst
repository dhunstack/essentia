:orphan:

Algorithm reference - TensorflowPredictMAEST (standard mode)
============================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input audio signal sampled at 16 kHz

Outputs
-------

 - ``predictions`` (*tensor_real*) - the output values from the model node named after `output`

Parameters
----------

 - ``batchSize`` (*integer ∈ [-1, ∞), default = 1*) :
     the batch size for prediction. This allows parallelization when GPUs are available. Set it to -1 or 0 to accumulate all the patches and run a single TensorFlow session at the end of the stream
 - ``graphFilename`` (*string, default = ""*) :
     the name of the file from which to load the TensorFlow graph
 - ``input`` (*string, default = serving_default_melspectrogram*) :
     the name of the input nodes in the Tensorflow graph
 - ``isTrainingName`` (*string, default = ""*) :
     the name of an additional input node indicating whether the model is to be run in a training mode (for models with a training mode, leave it empty otherwise)
 - ``lastPatchMode`` (*string ∈ {discard, repeat}, default = discard*) :
     what to do with the last frames: `repeat` them to fill the last patch or `discard` them
 - ``output`` (*string, default = StatefulPartitionedCall*) :
     the name of the node from which to retrieve the output tensors
 - ``patchHopSize`` (*integer ∈ [0, ∞), default = 1875*) :
     number of frames between the beginnings of adjacent patches. 0 to avoid overlap
 - ``patchSize`` (*integer ∈ [0, ∞), default = 1876*) :
     number of frames required for each inference. This parameter should match the model's expected input shape.
 - ``savedModel`` (*string, default = ""*) :
     the name of the TensorFlow SavedModel. Overrides parameter `graphFilename`

Description
-----------

This algorithm makes predictions using MAEST-based models.

Internally, it uses TensorflowInputMusiCNN for the input feature extraction. It feeds the model with mel-spectrogram patches and jumps a constant amount of frames determined by `patchHopSize`.

By setting the `batchSize` parameter to -1 or 0 the patches are stored to run a single TensorFlow session at the end of the stream. This allows to take advantage of parallelization when GPUs are available, but at the same time it can be memory exhausting for long files.

For the official MAEST models, the algorithm outputs the probabilities for 400 music style labels by default. Additionally, it is possible to retrieve the output of each attention layer by setting `output=StatefulParitionedCall:n`, where `n` is the index of the layer (starting from 1).
The output from the attention layers should be interpreted as follows:
  [batch_index, 1, token_number, embeddings_size]
Where the first and second tokens (e.g., [0, 0, :2, :]) correspond to the CLS and DIST tokens respectively, and the following ones to input signal ( refer to the original paper for details [1]).

The recommended pipeline is as follows::

  MonoLoader(sampleRate=16000, resampleQuality=4) >> TensorflowPredictMAEST

Note: this algorithm does not make any check on the input model so it is the user's responsibility to make sure it is a valid one.

Note: when `patchHopSize` and `patchSize` are not specified, the algorithm will parse the `graphFilename` string to try to set appropriate values.


References:

1. Alonso-Jiménez, P., Serra, X., & Bogdanov, D. (2023). Efficient Supervised Training of Audio Transformers for Music Representation Learning. In Proceedings of the 24th International Society for Music Information Retrieval Conference (ISMIR 2023)

2. Supported models at https://essentia.upf.edu/models.html#MAEST




See also
--------

MonoLoader `(standard) <std_MonoLoader.html>`__
MonoLoader `(streaming) <streaming_MonoLoader.html>`__
TensorflowInputMusiCNN `(standard) <std_TensorflowInputMusiCNN.html>`__
TensorflowInputMusiCNN `(streaming) <streaming_TensorflowInputMusiCNN.html>`__
TensorflowPredict `(standard) <std_TensorflowPredict.html>`__
TensorflowPredict `(streaming) <streaming_TensorflowPredict.html>`__
TensorflowPredictMAEST `(streaming) <streaming_TensorflowPredictMAEST.html>`__