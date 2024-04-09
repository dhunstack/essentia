:orphan:

Algorithm reference - TensorflowInputVGGish (streaming mode)
============================================================

Inputs
------

 - ``frame`` (*vector_real*) - the audio frame

Outputs
-------

 - ``bands`` (*vector_real*) - the log compressed mel bands

Description
-----------

This algorithm computes mel-bands specific to the input of VGGish-based models.


References:
  [1] Gemmeke, J. et. al., AudioSet: An ontology and human-labelled dataset for audio events, ICASSP 2017

  [2] Hershey, S. et. al., CNN Architectures for Large-Scale Audio Classification, ICASSP 2017

  [3] Supported models at https://essentia.upf.edu/models/


See also
--------

Scale `(standard) <std_Scale.html>`__
Scale `(streaming) <streaming_Scale.html>`__
TensorflowInputVGGish `(standard) <std_TensorflowInputVGGish.html>`__