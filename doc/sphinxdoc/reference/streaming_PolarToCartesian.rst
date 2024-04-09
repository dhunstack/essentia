:orphan:

Algorithm reference - PolarToCartesian (streaming mode)
=======================================================

Inputs
------

 - ``magnitude`` (*vector_real*) - the magnitude vector
 - ``phase`` (*vector_real*) - the phase vector

Outputs
-------

 - ``complex`` (*vector_complex*) - the resulting complex vector

Description
-----------

This algorithm converts an array of complex numbers from polar to cartesian form. It uses the Euler formula:
  z = x + i*y = \|z\|(cos(α) + i sin(α))
    where x = Real part, y = Imaginary part,
    and \|z\| = modulus = magnitude, α = phase

An exception is thrown if the size of the magnitude vector does not match the size of the phase vector.


References:
  [1] Polar coordinate system - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Polar_coordinates


See also
--------

PolarToCartesian `(standard) <std_PolarToCartesian.html>`__