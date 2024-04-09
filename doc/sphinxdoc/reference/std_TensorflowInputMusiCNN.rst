:orphan:

Algorithm reference - TensorflowInputMusiCNN (standard mode)
============================================================

Inputs
------

 - ``frame`` (*vector_real*) - the audio frame

Outputs
-------

 - ``bands`` (*vector_real*) - the log compressed mel bands

Description
-----------

This algorithm computes mel-bands specific to the input of MusiCNN-based models.


References:
  [1] Pons, J., & Serra, X. (2019). musicnn: Pre-trained convolutional neural networks for music audio tagging. arXiv preprint arXiv:1909.06654.

  [2] Supported models at https://essentia.upf.edu/models/


See also
--------

TensorflowInputMusiCNN `(streaming) <streaming_TensorflowInputMusiCNN.html>`__