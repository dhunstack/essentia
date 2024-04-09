:orphan:

Algorithm reference - FlatnessSFX (streaming mode)
==================================================

Inputs
------

 - ``envelope`` (*vector_real*) - the envelope of the signal

Outputs
-------

 - ``flatness`` (*real*) - the flatness coefficient

Description
-----------

This algorithm calculates the flatness coefficient of a signal envelope.

There are two thresholds defined: a lower one at 20% and an upper one at 95%. The thresholds yield two values: one value which has 20% of the total values underneath, and one value which has 95% of the total values underneath. The flatness coefficient is then calculated as the ratio of these two values. This algorithm is meant to be plugged after Envelope algorithm, however in streaming mode a RealAccumulator algorithm should be connected in between the two.
In the current form the algorithm can't be calculated in streaming mode, since it would violate the streaming mode policy of having low memory consumption.

An exception is thrown if the input envelope is empty.


See also
--------

Envelope `(standard) <std_Envelope.html>`__
Envelope `(streaming) <streaming_Envelope.html>`__
FlatnessSFX `(standard) <std_FlatnessSFX.html>`__
RealAccumulator `(streaming) <streaming_RealAccumulator.html>`__