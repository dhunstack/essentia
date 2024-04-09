:orphan:

Algorithm reference - DerivativeSFX (streaming mode)
====================================================

Inputs
------

 - ``envelope`` (*vector_real*) - the envelope of the signal

Outputs
-------

 - ``derAvAfterMax`` (*real*) - the weighted average of the derivative after the maximum amplitude
 - ``maxDerBeforeMax`` (*real*) - the maximum derivative before the maximum amplitude

Description
-----------

This algorithm computes two descriptors that are based on the derivative of a signal envelope.

The first descriptor is calculated after the maximum value of the input signal occurred. It is the average of the signal's derivative weighted by its amplitude. This coefficient helps discriminating impulsive sounds, which have a steep release phase, from non-impulsive sounds. The smaller the value the more impulsive.

The second descriptor is the maximum derivative, before the maximum value of the input signal occurred. This coefficient helps discriminating sounds that have a smooth attack phase, and therefore a smaller value than sounds with a fast attack.

This algorithm is meant to be fed by the outputs of the Envelope algorithm. If used in streaming mode, RealAccumulator should be connected in between.
An exception is thrown if the input signal is empty.


See also
--------

DerivativeSFX `(standard) <std_DerivativeSFX.html>`__
Envelope `(standard) <std_Envelope.html>`__
Envelope `(streaming) <streaming_Envelope.html>`__
RealAccumulator `(streaming) <streaming_RealAccumulator.html>`__