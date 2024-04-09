:orphan:

Algorithm reference - UnaryOperator (streaming mode)
====================================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``array`` (*vector_real*) - the input array transformed by unary operation

Parameters
----------

 - ``scale`` (*real ∈ (-∞, ∞), default = 1*) :
     multiply result by factor
 - ``shift`` (*real ∈ (-∞, ∞), default = 0*) :
     shift result by value (add value)
 - ``type`` (*string ∈ {identity, abs, log10, log, ln, lin2db, db2lin, sin, cos, sqrt, square}, default = identity*) :
     the type of the unary operator to apply to input array

Description
-----------

This algorithm performs basic arithmetical operations element by element given an array.
Note:

  - log and ln are equivalent to the natural logarithm
  - for log, ln, log10 and lin2db, x is clipped to 1e-30 for x<1e-30
  - for x<0, sqrt(x) is invalid
  - scale and shift parameters define linear transformation to be applied to the resulting elements



See also
--------

UnaryOperator `(standard) <std_UnaryOperator.html>`__