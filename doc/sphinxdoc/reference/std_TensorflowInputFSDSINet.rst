:orphan:

Algorithm reference - TensorflowInputFSDSINet (standard mode)
=============================================================

Inputs
------

 - ``frame`` (*vector_real*) - the audio frame

Outputs
-------

 - ``bands`` (*vector_real*) - the log-compressed mel bands

Description
-----------

This algorithm computes mel bands from an audio frame with the specific parametrization required by the FSD-SINet models.


References:
  [1] Fonseca, E., Ferraro, A., & Serra, X. (2021). Improving sound event classification by increasing shift invariance in convolutional neural networks. arXiv preprint arXiv:2107.00623.
  [2] https://github.com/edufonseca/shift_sec


See also
--------

TensorflowInputFSDSINet `(streaming) <streaming_TensorflowInputFSDSINet.html>`__