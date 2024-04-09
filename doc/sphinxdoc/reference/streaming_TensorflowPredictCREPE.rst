:orphan:

Algorithm reference - TensorflowPredictCREPE (streaming mode)
=============================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal sampled at 16 kHz

Outputs
-------

 - ``predictions`` (*vector_real*) - the output values from the model node named after `output`

Parameters
----------

 - ``batchSize`` (*integer ∈ [-1, ∞), default = 64*) :
     the batch size for prediction. This allows parallelization when a GPU is available. Set it to -1 or 0 to accumulate all the patches and run a single TensorFlow session at the end of the stream
 - ``graphFilename`` (*string, default = ""*) :
     the name of the file from which to load the TensorFlow graph
 - ``hopSize`` (*real ∈ (0, ∞), default = 10*) :
     the hop size in milliseconds for running pitch estimations
 - ``input`` (*string, default = frames*) :
     the name of the input node in the TensorFlow graph
 - ``output`` (*string, default = model/classifier/Sigmoid*) :
     the name of the node from which to retrieve the output tensors
 - ``savedModel`` (*string, default = ""*) :
     the name of the TensorFlow SavedModel. Overrides parameter `graphFilename`

Description
-----------

This algorithm generates activations of monophonic audio signals using CREPE models.

`input` and `output` are the input and output node names in the neural network and are defaulted to the names of the official models. `hopSize` allows to change the pitch estimation rate. `batchSize` controls how many pitch timestamps to process in parallel. By default it processes everything at the end of the audio stream, but it can be set to process batches periodically for online applications.

The recommended pipeline is as follows::

  MonoLoader(sampleRate=16000) >> TensorflowPredictCREPE()

Notes:
This algorithm does not make any check on the input model so it is the user's responsibility to make sure it is a valid one.
The required sample rate of input signal is 16 KHz. Other sample rates will lead to an incorrect behavior.


References:

1. CREPE: A Convolutional Representation for Pitch Estimation. Jong Wook Kim, Justin Salamon, Peter Li, Juan Pablo Bello. Proceedings of the IEEE International Conference on Acoustics, Speech, and Signal Processing (ICASSP), 2018.

2. Original models and code at https://github.com/marl/crepe/

3. Supported models at https://essentia.upf.edu/models/




See also
--------

MonoLoader `(standard) <std_MonoLoader.html>`__
MonoLoader `(streaming) <streaming_MonoLoader.html>`__
TensorflowPredict `(standard) <std_TensorflowPredict.html>`__
TensorflowPredict `(streaming) <streaming_TensorflowPredict.html>`__
TensorflowPredictCREPE `(standard) <std_TensorflowPredictCREPE.html>`__