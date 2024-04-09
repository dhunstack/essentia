:orphan:

Algorithm reference - LoopBpmEstimator (streaming mode)
=======================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``bpm`` (*real*) - the estimated bpm (will be 0 if unsure)

Parameters
----------

 - ``confidenceThreshold`` (*real ∈ [0, 1], default = 0.95*) :
     confidence threshold below which bpm estimate will be considered unreliable

Description
-----------

This algorithm estimates the BPM of audio loops. It internally uses PercivalBpmEstimator algorithm to produce a BPM estimate and LoopBpmConfidence to asses the reliability of the estimate. If the provided estimate is below the given confidenceThreshold, the algorithm outputs a BPM 0.0, otherwise it outputs the estimated BPM. For more details on the BPM estimation method and the confidence measure please check the used algorithms.


See also
--------

LoopBpmConfidence `(standard) <std_LoopBpmConfidence.html>`__
LoopBpmConfidence `(streaming) <streaming_LoopBpmConfidence.html>`__
LoopBpmEstimator `(standard) <std_LoopBpmEstimator.html>`__
PercivalBpmEstimator `(standard) <std_PercivalBpmEstimator.html>`__
PercivalBpmEstimator `(streaming) <streaming_PercivalBpmEstimator.html>`__