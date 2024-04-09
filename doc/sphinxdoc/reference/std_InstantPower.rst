:orphan:

Algorithm reference - InstantPower (standard mode)
==================================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``power`` (*real*) - the instant power of the input array

Description
-----------

This algorithm computes the instant power of an array. That is, the energy of the array over its size.

An exception is thrown when input array is empty.


References:
  [1] Energy (signal processing) - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Energy_%28signal_processing%29


See also
--------

Energy `(standard) <std_Energy.html>`__
Energy `(streaming) <streaming_Energy.html>`__
InstantPower `(streaming) <streaming_InstantPower.html>`__