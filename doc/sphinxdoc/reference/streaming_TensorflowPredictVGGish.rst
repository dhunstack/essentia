:orphan:

Algorithm reference - TensorflowPredictVGGish (streaming mode)
==============================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal sampled at 16 kHz

Outputs
-------

 - ``predictions`` (*vector_real*) - the output values from the model node named after `output`

Parameters
----------

 - ``accumulate`` (*bool ∈ {true, false}, default = false*) :
     (deprecated, use `batchSize`) when true it runs a single Tensorflow session at the end of the stream. Otherwise a session is run for every new patch
 - ``batchSize`` (*integer ∈ [-1, ∞), default = 64*) :
     the batch size for prediction. This allows parallelization when GPUs are available. Set it to -1 or 0 to accumulate all the patches and run a single TensorFlow session at the end of the stream
 - ``graphFilename`` (*string, default = ""*) :
     the name of the file from which to load the TensorFlow graph
 - ``input`` (*string, default = model/Placeholder*) :
     the name of the input node in the TensorFlow graph
 - ``isTrainingName`` (*string, default = ""*) :
     the name of an additional input node to indicate the model if it is in training mode or not. Leave it empty when the model does not need such input
 - ``lastPatchMode`` (*string ∈ {discard, repeat}, default = discard*) :
     what to do with the last frames: `repeat` them to fill the last patch or `discard` them
 - ``output`` (*string, default = model/Sigmoid*) :
     the name of the node from which to retrieve the output tensors
 - ``patchHopSize`` (*integer ∈ [0, ∞), default = 93*) :
     the number of frames between the beginnings of adjacent patches. 0 to avoid overlap
 - ``patchSize`` (*integer ∈ [0, ∞), default = 96*) :
     number of frames required for each inference. This parameter should match the model's expected input shape.
 - ``savedModel`` (*string, default = ""*) :
     the name of the TensorFlow SavedModel. Overrides parameter `graphFilename`

Description
-----------

This algorithm makes predictions using VGGish-based models.

Internally, it uses TensorflowInputVGGish for the input feature extraction (mel bands). It feeds the model with patches of 96 mel bands frames and jumps a constant amount of frames determined by `patchHopSize`.

By setting the `batchSize` parameter to -1 or 0 the patches are stored to run a single TensorFlow session at the end of the stream. This allows to take advantage of parallelization when GPUs are available, but at the same time it can be memory exhausting for long files.

The recommended pipeline is as follows::

  MonoLoader(sampleRate=16000) >> TensorflowPredictVGGish

Note: This algorithm does not make any check on the input model so it is the user's responsibility to make sure it is a valid one.


References:

1. Gemmeke, J. et. al., AudioSet: An ontology and human-labelled dataset for audio events, ICASSP 2017

2. Hershey, S. et. al., CNN Architectures for Large-Scale Audio Classification, ICASSP 2017

3. Supported models at https://essentia.upf.edu/models/




See also
--------

MonoLoader `(standard) <std_MonoLoader.html>`__
MonoLoader `(streaming) <streaming_MonoLoader.html>`__
Scale `(standard) <std_Scale.html>`__
Scale `(streaming) <streaming_Scale.html>`__
TensorflowInputVGGish `(standard) <std_TensorflowInputVGGish.html>`__
TensorflowInputVGGish `(streaming) <streaming_TensorflowInputVGGish.html>`__
TensorflowPredict `(standard) <std_TensorflowPredict.html>`__
TensorflowPredict `(streaming) <streaming_TensorflowPredict.html>`__
TensorflowPredictVGGish `(standard) <std_TensorflowPredictVGGish.html>`__