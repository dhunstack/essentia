:orphan:

Algorithm reference - TuningFrequencyExtractor (streaming mode)
===============================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``tuningFrequency`` (*real*) - the computed tuning frequency

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

TuningFrequencyExtractor `(standard) <std_TuningFrequencyExtractor.html>`__