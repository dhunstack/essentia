:orphan:

Algorithm reference - PowerSpectrum (streaming mode)
====================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``powerSpectrum`` (*vector_real*) - power spectrum of the input signal

Parameters
----------

 - ``size`` (*integer ∈ [1, ∞), default = 2048*) :
     the expected size of the input frame (this is purely optional and only targeted at optimizing the creation time of the FFT object)

Description
-----------

This algorithm computes the power spectrum of an array of Reals. The resulting power spectrum has a size which is half the size of the input array plus one. Bins contain squared magnitude values.


References:
  [1] Power Spectrum - from Wolfram MathWorld,
  http://mathworld.wolfram.com/PowerSpectrum.html


See also
--------

PowerSpectrum `(standard) <std_PowerSpectrum.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__