:orphan:

Algorithm reference - Leq (streaming mode)
==========================================

Inputs
------

 - ``signal`` (*real*) - the input signal (must be non-empty)

Outputs
-------

 - ``leq`` (*real*) - the equivalent sound level estimate [dB]

Description
-----------

This algorithm computes the Equivalent sound level (Leq) of an audio signal. The Leq measure can be derived from the Revised Low-frequency B-weighting (RLB) or from the raw signal as described in [1]. If the signal contains no energy, Leq defaults to essentias definition of silence which is -90dB.
This algorithm will throw an exception on empty input.


References:
  [1] G. A. Soulodre, "Evaluation of Objective Loudness Meters," in
  The 116th AES Convention, 2004.


See also
--------

Leq `(standard) <std_Leq.html>`__
Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__
Meter `(standard) <std_Meter.html>`__
Meter `(streaming) <streaming_Meter.html>`__