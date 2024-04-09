:orphan:

Algorithm reference - WarpedAutoCorrelation (streaming mode)
============================================================

Inputs
------

 - ``array`` (*vector_real*) - the array to be analyzed

Outputs
-------

 - ``warpedAutoCorrelation`` (*vector_real*) - the warped auto-correlation vector

Parameters
----------

 - ``maxLag`` (*integer ∈ (0, ∞), default = 1*) :
     the maximum lag for which the auto-correlation is computed (inclusive) (must be smaller than signal size) 
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]

Description
-----------

This algorithm computes the warped auto-correlation of an audio signal. The implementation is an adapted version of K. Schmidt's implementation of the matlab algorithm from the 'warped toolbox' by Aki Harma and Matti Karjalainen found [2]. For a detailed explanation of the algorithm, see [1].
This algorithm is only defined for positive lambda = 1.0674*sqrt(2.0*atan(0.00006583*sampleRate)/PI) - 0.1916, thus it will throw an exception when the supplied sampling rate does not pass the requirements.
If maxLag is larger than the size of the input array, an exception is thrown.


References:
  [1] A. Härmä, M. Karjalainen, L. Savioja, V. Välimäki, U. K. Laine, and
  J. Huopaniemi, "Frequency-Warped Signal Processing for Audio Applications,"
  JAES, vol. 48, no. 11, pp. 1011–1031, 2000.

  [2] WarpTB - Matlab Toolbox for Warped DSP
  http://www.acoustics.hut.fi/software/warp


See also
--------

WarpedAutoCorrelation `(standard) <std_WarpedAutoCorrelation.html>`__