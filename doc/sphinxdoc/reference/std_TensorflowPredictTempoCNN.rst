:orphan:

Algorithm reference - TensorflowPredictTempoCNN (standard mode)
===============================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input audio signal sampled at 11025 Hz

Outputs
-------

 - ``predictions`` (*vector_vector_real*) - the output values from the model node named after `output`

Parameters
----------

 - ``batchSize`` (*integer ∈ [-1, ∞), default = 16*) :
     number of patches to process in parallel. Use -1 or 0 to accumulate all the patches and run a single TensorFlow session at the end of the stream.
 - ``graphFilename`` (*string, default = ""*) :
     the name of the file from which to load the TensorFlow graph
 - ``input`` (*string, default = input*) :
     the name of the input nodes in the Tensorflow graph
 - ``lastPatchMode`` (*string ∈ {discard, repeat}, default = discard*) :
     what to do with the last frames: `repeat` them to fill the last patch or `discard` them
 - ``output`` (*string, default = output*) :
     the name of the node from which to retrieve the output tensors
 - ``patchHopSize`` (*integer ∈ [0, ∞), default = 128*) :
     number of frames between the beginnings of adjacent patches. 0 to avoid overlap
 - ``savedModel`` (*string, default = ""*) :
     the name of the TensorFlow SavedModel. Overrides parameter `graphFilename`

Description
-----------

This algorithm makes predictions using TempoCNN-based models.

Internally, it uses TensorflowInputTempoCNN for the input feature extraction (mel bands). It feeds the model with patches of 256 mel bands frames and jumps a constant amount of frames determined by `patchHopSize`.

With the `batchSize` parameter set to -1 or 0 the patches are stored to run a single TensorFlow session at the end of the stream. This allows to take advantage of parallelization when GPUs are available, but at the same time it can be memory exhausting for long files.

The recommended pipeline is as follows::

  MonoLoader(sampleRate=11025) >> TensorflowPredictTempoCNN

Note: This algorithm does not make any check on the input model so it is the user's responsibility to make sure it is a valid one.


References:

1. Hendrik Schreiber, Meinard Müller, A Single-Step Approach to Musical Tempo Estimation Using a Convolutional Neural Network Proceedings of the 19th International Society for Music Information Retrieval Conference (ISMIR), Paris, France, Sept. 2018.

2. Hendrik Schreiber, Meinard Müller, Musical Tempo and Key Estimation using Convolutional Neural Networks with Directional Filters Proceedings of the Sound and Music Computing Conference (SMC), Málaga, Spain, 2019.

3. Original models and code at https://github.com/hendriks73/tempo-cnn

4. Supported models at https://essentia.upf.edu/models/




See also
--------

Key `(standard) <std_Key.html>`__
Key `(streaming) <streaming_Key.html>`__
MonoLoader `(standard) <std_MonoLoader.html>`__
MonoLoader `(streaming) <streaming_MonoLoader.html>`__
TempoCNN `(standard) <std_TempoCNN.html>`__
TempoCNN `(streaming) <streaming_TempoCNN.html>`__
TensorflowInputTempoCNN `(standard) <std_TensorflowInputTempoCNN.html>`__
TensorflowInputTempoCNN `(streaming) <streaming_TensorflowInputTempoCNN.html>`__
TensorflowPredict `(standard) <std_TensorflowPredict.html>`__
TensorflowPredict `(streaming) <streaming_TensorflowPredict.html>`__
TensorflowPredictTempoCNN `(streaming) <streaming_TensorflowPredictTempoCNN.html>`__