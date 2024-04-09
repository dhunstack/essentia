:orphan:

Algorithm reference - TuningFrequencyExtractor (standard mode)
==============================================================

Inputs
------

 - ``signal`` (*vector_real*) - the audio input signal

Outputs
-------

 - ``tuningFrequency`` (*vector_real*) - the computed tuning frequency

Parameters
----------

 - ``frameSize`` (*integer ∈ (0, ∞), default = 4096*) :
     the frameSize for computing tuning frequency
 - ``hopSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the hopsize for computing tuning frequency

Description
-----------

This algorithm extracts the tuning frequency of an audio signal


See also
--------

TuningFrequencyExtractor `(streaming) <streaming_TuningFrequencyExtractor.html>`__