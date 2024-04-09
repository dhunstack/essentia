:orphan:

Algorithm reference - NoiseAdder (streaming mode)
=================================================

Inputs
------

 - ``signal`` (*real*) - the input signal

Outputs
-------

 - ``signal`` (*real*) - the output signal with the added noise

Parameters
----------

 - ``fixSeed`` (*bool ∈ {true, false}, default = false*) :
     if true, 0 is used as the seed for generating random values
 - ``level`` (*integer ∈ (-∞, 0], default = -100*) :
     power level of the noise generator [dB]

Description
-----------

This algorithm adds noise to an input signal. The average energy of the noise in dB is defined by the level parameter, and is generated using the Mersenne Twister random number generator.


References:
  [1] Mersenne Twister: A random number generator (since 1997/10),
  http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/emt.html

  [2] Mersenne twister - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Mersenne_twister


See also
--------

NoiseAdder `(standard) <std_NoiseAdder.html>`__