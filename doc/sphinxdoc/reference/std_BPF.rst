:orphan:

Algorithm reference - BPF (standard mode)
=========================================

Inputs
------

 - ``x`` (*real*) - the input coordinate (x-axis)

Outputs
-------

 - ``y`` (*real*) - the output coordinate (y-axis)

Parameters
----------

 - ``xPoints`` (*vector_real, default = [0, 1]*) :
     the x-coordinates of the points forming the break-point function (the points must be arranged in ascending order and cannot contain duplicates)
 - ``yPoints`` (*vector_real, default = [0, 1]*) :
     the y-coordinates of the points forming the break-point function

Description
-----------

This algorithm implements a break point function which linearly interpolates between discrete xy-coordinates to construct a continuous function.

Exceptions are thrown when the size the vectors specified in parameters is not equal and at least they contain two elements. Also if the parameter vector for x-coordinates is not sorted ascendantly. A break point function cannot interpolate outside the range specified in parameter "xPoints". In that case an exception is thrown.
 

References:
  [1] Linear interpolation - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Linear_interpolation


See also
--------

BPF `(streaming) <streaming_BPF.html>`__