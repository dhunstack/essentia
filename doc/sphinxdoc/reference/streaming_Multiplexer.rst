:orphan:

Algorithm reference - Multiplexer (streaming mode)
==================================================

Outputs
-------

 - ``data`` (*vector_real*) - the frame containing the input values and/or input frames

Parameters
----------

 - ``numberRealInputs`` (*integer ∈ [0, ∞), default = 0*) :
     the number of inputs of type Real to multiplex
 - ``numberVectorRealInputs`` (*integer ∈ [0, ∞), default = 0*) :
     the number of inputs of type vector<Real> to multiplex

Description
-----------

This algorithm returns a single vector from a given number of real values and/or frames. Frames from different inputs are multiplexed onto a single stream in an alternating fashion.

This algorithm throws an exception if the number of input reals (or vector<real>) is less than the number specified in configuration parameters or if the user tries to acces an input which has not been specified.


References:
  [1] Multiplexer - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Multiplexer



See also
--------

Multiplexer `(standard) <std_Multiplexer.html>`__