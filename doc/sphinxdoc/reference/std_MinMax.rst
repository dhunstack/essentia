:orphan:

Algorithm reference - MinMax (standard mode)
============================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``real`` (*real*) - the minimum or maximum of the input array, according to the type parameter
 - ``int`` (*integer*) - the index of the value

Parameters
----------

 - ``type`` (*string ∈ {min, max}, default = min*) :
     the type of the operation

Description
-----------

This algorithm calculates the minimum or maximum value of an array.
If the array has more than one minimum or maximum value, the index of the first one is returned


See also
--------

MinMax `(streaming) <streaming_MinMax.html>`__