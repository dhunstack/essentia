:orphan:

Algorithm reference - SpectralCentroidTime (standard mode)
==========================================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``centroid`` (*real*) - the spectral centroid of the signal

Parameters
----------

 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     sampling rate of the input spectrum [Hz]

Description
-----------

This algorithm computes the spectral centroid of a signal in time domain. A first difference filter is applied to the input signal. Then the centroid is computed by dividing the norm of the resulting signal by the norm of the input signal. The centroid is given in hertz.

References:
 [1] Udo Zölzer (2002). DAFX Digital Audio Effects pag.364-365



See also
--------

SpectralCentroidTime `(streaming) <streaming_SpectralCentroidTime.html>`__