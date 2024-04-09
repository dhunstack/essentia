:orphan:

Algorithm reference - BinaryOperator (standard mode)
====================================================

Inputs
------

 - ``array1`` (*vector_real*) - the first operand input array
 - ``array2`` (*vector_real*) - the second operand input array

Outputs
-------

 - ``array`` (*vector_real*) - the array containing the result of binary operation

Parameters
----------

 - ``type`` (*string ∈ {add, subtract, multiply, divide}, default = add*) :
     the type of the binary operator to apply to the input arrays

Description
-----------

This algorithm performs basic arithmetical operations element by element given two arrays.
Note:

  - using this algorithm in streaming mode can cause diamond shape graphs which have not been tested with the current scheduler. There is NO GUARANTEE of its correct work for diamond shape graphs.
  - for y=0, x/y is invalid



See also
--------

BinaryOperator `(streaming) <streaming_BinaryOperator.html>`__