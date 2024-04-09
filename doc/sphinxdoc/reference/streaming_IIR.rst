:orphan:

Algorithm reference - IIR (streaming mode)
==========================================

Inputs
------

 - ``signal`` (*real*) - the input signal

Outputs
-------

 - ``signal`` (*real*) - the filtered signal

Parameters
----------

 - ``denominator`` (*vector_real, default = [1]*) :
     the list of coefficients of the denominator. Often referred to as the A coefficient vector.
 - ``numerator`` (*vector_real, default = [1]*) :
     the list of coefficients of the numerator. Often referred to as the B coefficient vector.

Description
-----------

This algorithm implements a standard IIR filter. It filters the data in the input vector with the filter described by parameter vectors 'numerator' and 'denominator' to create the output filtered vector. In the litterature, the numerator is often referred to as the 'B' coefficients and the denominator as the 'A' coefficients.

The filter is a Direct Form II Transposed implementation of the standard difference equation:
  a(0)*y(n) = b(0)*x(n) + b(1)*x(n-1) + ... + b(nb-1)*x(n-nb+1) - a(1)*y(n-1) - ... - a(nb-1)*y(n-na+1)

This algorithm maintains a state which is the state of the delays. One should call the reset() method to reinitialize the state to all zeros.

An exception is thrown if the "numerator" or "denominator" parameters are empty. An exception is also thrown if the first coefficient of the "denominator" parameter is 0.


References:
  [1] Smith, J.O.  Introduction to Digital Filters with Audio Applications,
  http://ccrma-www.stanford.edu/~jos/filters/

  [2] Infinite Impulse Response - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/IIR


See also
--------

IIR `(standard) <std_IIR.html>`__