:orphan:

Algorithm reference - Loudness (streaming mode)
===============================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``loudness`` (*real*) - the loudness of the input signal

Description
-----------

This algorithm computes the loudness of an audio signal defined by Steven's power law. It computes loudness as the energy of the signal raised to the power of 0.67.


References:
  [1] Energy (signal processing) - Wikipedia, the free encyclopedia
  http://en.wikipedia.org/wiki/Energy_%28signal_processing%29

  [2] Stevens' power law - Wikipedia, the free encyclopedia
  http://en.wikipedia.org/wiki/Stevens%27_power_law

  [3] S. S. Stevens, Psychophysics. Transaction Publishers, 1975.


See also
--------

Energy `(standard) <std_Energy.html>`__
Energy `(streaming) <streaming_Energy.html>`__
Loudness `(standard) <std_Loudness.html>`__