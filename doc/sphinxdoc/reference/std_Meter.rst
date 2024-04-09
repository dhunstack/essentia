:orphan:

Algorithm reference - Meter (standard mode)
===========================================

Inputs
------

 - ``beatogram`` (*vector_vector_real*) - filtered matrix loudness

Outputs
-------

 - ``meter`` (*real*) - the time signature

Description
-----------

This algorithm estimates the time signature of a given beatogram by finding the highest correlation between beats.

Quality: experimental (not evaluated, do not use)


See also
--------

Meter `(streaming) <streaming_Meter.html>`__