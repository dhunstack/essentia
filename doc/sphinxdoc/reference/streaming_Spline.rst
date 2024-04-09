:orphan:

Algorithm reference - Spline (streaming mode)
=============================================

Inputs
------

 - ``x`` (*real*) - the input coordinate (x-axis)

Outputs
-------

 - ``y`` (*real*) - the value of the spline at x

Parameters
----------

 - ``beta1`` (*real ∈ [0, ∞], default = 1*) :
     the skew or bias parameter (only available for type beta)
 - ``beta2`` (*real ∈ [0, ∞), default = 0*) :
     the tension parameter
 - ``type`` (*string ∈ {b, beta, quadratic}, default = b*) :
     the type of spline to be computed
 - ``xPoints`` (*vector_real, default = [0, 1]*) :
     the x-coordinates where data is specified (the points must be arranged in ascending order and cannot contain duplicates)
 - ``yPoints`` (*vector_real, default = [0, 1]*) :
     the y-coordinates to be interpolated (i.e. the known data)

Description
-----------

Evaluates a piecewise spline of type b, beta or quadratic.
The input value, i.e. the point at which the spline is to be evaluated typically should be between xPoins[0] and xPoinst[size-1]. If the value lies outside this range, extrapolation is used.
Regarding spline types:

  - B: evaluates a cubic B spline approximant.
  - Beta: evaluates a cubic beta spline approximant. For beta splines parameters 'beta1' and 'beta2' can be supplied. For no bias set beta1 to 1 and for no tension set beta2 to 0. Note that if beta1=1 and beta2=0, the cubic beta becomes a cubic B spline. On the other hand if beta1=1 and beta2 is large the beta spline turns into a linear spline.
  - Quadratic: evaluates a piecewise quadratic spline at a point. Note that size of input must be odd.



References:
  [1] Spline interpolation - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Spline_interpolation


See also
--------

Spline `(standard) <std_Spline.html>`__