:orphan:

Algorithm reference - MinToTotal (standard mode)
================================================

Inputs
------

 - ``envelope`` (*vector_real*) - the envelope of the signal

Outputs
-------

 - ``minToTotal`` (*real*) - the minimum amplitude position to total length ratio

Description
-----------

This algorithm computes the ratio between the index of the minimum value of the envelope of a signal and the total length of the envelope.

An exception is thrown if the input envelop is empty.


See also
--------

MinToTotal `(streaming) <streaming_MinToTotal.html>`__