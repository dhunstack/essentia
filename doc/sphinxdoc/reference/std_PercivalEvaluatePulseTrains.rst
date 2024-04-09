:orphan:

Algorithm reference - PercivalEvaluatePulseTrains (standard mode)
=================================================================

Inputs
------

 - ``oss`` (*vector_real*) - onset strength signal (or other novelty curve)
 - ``positions`` (*vector_real*) - peak positions of BPM candidates

Outputs
-------

 - ``lag`` (*real*) - best tempo lag estimate

Description
-----------

This algorithm implements the 'Evaluate Pulse Trains' step as described in [1].Given an input onset detection function (ODF, called "onset strength signal", OSS, in the original paper) and a number of candidate BPM peak positions, the ODF is correlated with ideal expected pulse trains (for each candidate tempo lag) shifted in time by different amounts.The candidate tempo lag that generates a periodic pulse train with the best correlation to the ODF is returned as the best tempo estimate.
For more details check the referenced paper.Please note that in the original paper, the term OSS (Onset Strength Signal) is used instead of ODF.


References:
  [1] Percival, G., & Tzanetakis, G. (2014). Streamlined tempo estimation based on autocorrelation and cross-correlation with pulses.
  IEEE/ACM Transactions on Audio, Speech, and Language Processing, 22(12), 1765–1776.




See also
--------

PercivalEvaluatePulseTrains `(streaming) <streaming_PercivalEvaluatePulseTrains.html>`__