:orphan:

Algorithm reference - SilenceRate (standard mode)
=================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input frame

Parameters
----------

 - ``thresholds`` (*vector_real, default = []*) :
     the threshold values

Description
-----------

This algorithm estimates if a frame is silent. Given a list of thresholds, this algorithm creates a equally-sized list of outputs and returns 1 on a given output whenever the instant power of the input frame is below the given output's respective threshold, and returns 0 otherwise. This is done for each frame with respect to all outputs. In other words, if a given frame's instant power is below several given thresholds, then each of the corresponding outputs will emit a 1.


See also
--------

SilenceRate `(streaming) <streaming_SilenceRate.html>`__