:orphan:

Algorithm reference - PercivalEnhanceHarmonics (standard mode)
==============================================================

Inputs
------

 - ``array`` (*vector_real*) - the input signal

Outputs
-------

 - ``array`` (*vector_real*) - the input signal with enhanced harmonics

Description
-----------

This algorithm implements the 'Enhance Harmonics' step as described in [1].Given an input autocorrelation signal, two time-stretched versions of it scaled by factors of 2 and 4 are added to the original.For more details check the referenced paper.


References:
  [1] Percival, G., & Tzanetakis, G. (2014). Streamlined tempo estimation based on autocorrelation and cross-correlation with pulses.
  IEEE/ACM Transactions on Audio, Speech, and Language Processing, 22(12), 1765–1776.




See also
--------

PercivalEnhanceHarmonics `(streaming) <streaming_PercivalEnhanceHarmonics.html>`__