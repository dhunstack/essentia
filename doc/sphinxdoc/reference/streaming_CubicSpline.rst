:orphan:

Algorithm reference - CubicSpline (streaming mode)
==================================================

Inputs
------

 - ``x`` (*real*) - the input coordinate (x-axis)

Outputs
-------

 - ``y`` (*real*) - the value of the spline at x
 - ``dy`` (*real*) - the first derivative of the spline at x
 - ``ddy`` (*real*) - the second derivative of the spline at x

Parameters
----------

 - ``leftBoundaryFlag`` (*integer ∈ {0, 1, 2}, default = 0*) :
     type of boundary condition for the left boundary
 - ``leftBoundaryValue`` (*real ∈ (-∞, ∞), default = 0*) :
     the value to be used in the left boundary, when leftBoundaryFlag is 1 or 2
 - ``rightBoundaryFlag`` (*integer ∈ {0, 1, 2}, default = 0*) :
     type of boundary condition for the right boundary
 - ``rightBoundaryValue`` (*real ∈ (-∞, ∞), default = 0*) :
     the value to be used in the right boundary, when rightBoundaryFlag is 1 or 2
 - ``xPoints`` (*vector_real, default = [0, 1]*) :
     the x-coordinates where data is specified (the points must be arranged in ascending order and cannot contain duplicates)
 - ``yPoints`` (*vector_real, default = [0, 1]*) :
     the y-coordinates to be interpolated (i.e. the known data)

Description
-----------

Computes the second derivatives of a piecewise cubic spline.
The input value, i.e. the point at which the spline is to be evaluated typically should be between xPoints[0] and xPoints[size-1]. If the value lies outside this range, extrapolation is used.
Regarding [left/right] boundary condition flag parameters:

  - 0: the cubic spline should be a quadratic over the first interval
  - 1: the first derivative at the [left/right] endpoint should be [left/right]BoundaryFlag
  - 2: the second derivative at the [left/right] endpoint should be [left/right]BoundaryFlag


References:
  [1] Spline interpolation - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Spline_interpolation


See also
--------

CubicSpline `(standard) <std_CubicSpline.html>`__
Spline `(standard) <std_Spline.html>`__
Spline `(streaming) <streaming_Spline.html>`__