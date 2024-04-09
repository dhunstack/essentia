:orphan:

Algorithm reference - NoiseBurstDetector (standard mode)
========================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input frame (must be non-empty)

Outputs
-------

 - ``indexes`` (*vector_real*) - indexes of the noisy samples

Parameters
----------

 - ``alpha`` (*real ∈ (0, 1), default = 0.9*) :
     alpha coefficient for the Exponential Moving Average threshold estimation.
 - ``silenceThreshold`` (*integer ∈ (-∞, 0), default = -50*) :
     threshold to skip silent frames
 - ``threshold`` (*integer ∈ (-∞, ∞), default = 8*) :
     factor to control the dynamic theshold

Description
-----------

This algorithm detects noise bursts in the waveform by thresholding  the peaks of the second derivative. The threshold is computed using an Exponential Moving Average filter over the RMS of the second derivative of the input frame.


See also
--------

NoiseBurstDetector `(streaming) <streaming_NoiseBurstDetector.html>`__
RMS `(standard) <std_RMS.html>`__
RMS `(streaming) <streaming_RMS.html>`__