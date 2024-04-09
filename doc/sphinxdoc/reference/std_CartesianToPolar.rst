:orphan:

Algorithm reference - CartesianToPolar (standard mode)
======================================================

Inputs
------

 - ``complex`` (*vector_complex*) - the complex input vector

Outputs
-------

 - ``magnitude`` (*vector_real*) - the magnitude vector
 - ``phase`` (*vector_real*) - the phase vector

Description
-----------

This algorithm converts an array of complex numbers from cartesian to polar form. It uses the Euler formula:
  z = x + i*y = \|z\|(cos(α) + i sin(α))
    where x = Real part, y = Imaginary part,
    and \|z\| = modulus = magnitude, α = phase in (-π,π]

It returns the magnitude and the phase as 2 separate vectors.


References:
  [1] Polar Coordinates -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/PolarCoordinates.html

  [2] Polar coordinate system - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Polar_coordinates


See also
--------

CartesianToPolar `(streaming) <streaming_CartesianToPolar.html>`__