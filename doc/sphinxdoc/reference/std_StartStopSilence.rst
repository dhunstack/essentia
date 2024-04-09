:orphan:

Algorithm reference - StartStopSilence (standard mode)
======================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input audio frames

Outputs
-------

 - ``startFrame`` (*integer*) - number of the first non-silent frame
 - ``stopFrame`` (*integer*) - number of the last non-silent frame

Parameters
----------

 - ``threshold`` (*integer ∈ (-∞, 0]), default = -60*) :
     the threshold below which average energy is defined as silence [dB]

Description
-----------

This algorithm outputs the frame at which sound begins and the frame at which sound ends.

Note: In standard mode the algorithm is to be run iteratively on a sequence of frames. The outputs are updated on each iteration, and the final result is produced at the end of the sequence.


See also
--------

StartStopSilence `(streaming) <streaming_StartStopSilence.html>`__