:orphan:

Algorithm reference - TensorflowPredictEffnetDiscogs (standard mode)
====================================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input audio signal sampled at 16 kHz

Outputs
-------

 - ``predictions`` (*vector_vector_real*) - the output values from the model node named after `output`

Parameters
----------

 - ``batchSize`` (*integer ∈ [-1, ∞), default = 64*) :
     the batch size for prediction. This allows parallelization when GPUs are available. Set it to -1 or 0 to accumulate all the patches and run a single TensorFlow session at the end of the stream
 - ``graphFilename`` (*string, default = ""*) :
     the name of the file from which to load the TensorFlow graph
 - ``input`` (*string, default = serving_default_melspectrogram*) :
     the name of the input node in the TensorFlow graph
 - ``lastBatchMode`` (*string ∈ {discard, zeros, same}, default = same*) :
     some EffnetDiscogs models operate on a fixed batch size. The options are to `discard` the last patches or to pad with `zeros` to make a final batch. Additionally `same` zero-pads the input but returns only the predictions corresponding to patches with signal
 - ``lastPatchMode`` (*string ∈ {discard, repeat}, default = discard*) :
     what to do with the last frames: `repeat` them to fill the last patch or `discard` them
 - ``output`` (*string, default = PartitionedCall*) :
     the name of the node from which to retrieve the output tensors
 - ``patchHopSize`` (*integer ∈ [0, ∞), default = 62*) :
     the number of frames between the beginnings of adjacent patches. 0 to avoid overlap. The default value is 62 frames which corresponds to a prediction rate of 1.008 Hz
 - ``patchSize`` (*integer ∈ [0, ∞), default = 128*) :
     number of frames required for each inference. This parameter should match the model's expected input shape.
 - ``savedModel`` (*string, default = ""*) :
     the name of the TensorFlow SavedModel. Overrides parameter `graphFilename`

Description
-----------

This algorithm makes predictions using EffnetDiscogs-based models.

Internally, it uses TensorflowInputMusiCNN for the input feature extraction (mel-spectrograms). It feeds the model with patches of 128 frames and jumps a constant amount of frames determined by `patchHopSize`.

By setting the `batchSize` parameter to -1 or 0 the patches are stored to run a single TensorFlow session at the end of the stream. This allows to take advantage of parallelization when GPUs are available, but at the same time it can be memory exhausting for long files. This option is not supported by some EffnetDiscogs models that require a fixed batch size.

The recommended pipeline is as follows::

  MonoLoader(sampleRate=16000) >> TensorflowPredictEffnetDiscogs

Note: This algorithm does not make any check on the input model so it is the user's responsibility to make sure it is a valid one.


References:

1. Supported models at https://essentia.upf.edu/models/




See also
--------

MonoLoader `(standard) <std_MonoLoader.html>`__
MonoLoader `(streaming) <streaming_MonoLoader.html>`__
TensorflowInputMusiCNN `(standard) <std_TensorflowInputMusiCNN.html>`__
TensorflowInputMusiCNN `(streaming) <streaming_TensorflowInputMusiCNN.html>`__
TensorflowPredict `(standard) <std_TensorflowPredict.html>`__
TensorflowPredict `(streaming) <streaming_TensorflowPredict.html>`__
TensorflowPredictEffnetDiscogs `(streaming) <streaming_TensorflowPredictEffnetDiscogs.html>`__