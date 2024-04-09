:orphan:

Algorithm reference - TensorflowInputTempoCNN (streaming mode)
==============================================================

Inputs
------

 - ``frame`` (*vector_real*) - the audio frame

Outputs
-------

 - ``bands`` (*vector_real*) - the mel bands

Description
-----------

This algorithm computes mel-bands specific to the input of TempoCNN-based models.


References:
  [1] Hendrik Schreiber, Meinard Müller, A Single-Step Approach to Musical Tempo Estimation Using a Convolutional Neural Network Proceedings of the 19th International Society for Music Information Retrieval Conference (ISMIR), Paris, France, Sept. 2018.
  [2] Hendrik Schreiber, Meinard Müller, Musical Tempo and Key Estimation using Convolutional Neural Networks with Directional Filters Proceedings of the Sound and Music Computing Conference (SMC), Málaga, Spain, 2019.
  [3] Original models and code at https://github.com/hendriks73/tempo-cnn
  [4] Supported models at https://essentia.upf.edu/models/


See also
--------

Key `(standard) <std_Key.html>`__
Key `(streaming) <streaming_Key.html>`__
TempoCNN `(standard) <std_TempoCNN.html>`__
TempoCNN `(streaming) <streaming_TempoCNN.html>`__
TensorflowInputTempoCNN `(standard) <std_TensorflowInputTempoCNN.html>`__