:orphan:

Algorithm reference - Flux (standard mode)
==========================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input spectrum

Outputs
-------

 - ``flux`` (*real*) - the spectral flux of the input spectrum

Parameters
----------

 - ``halfRectify`` (*bool ∈ {true, false}, default = false*) :
     half-rectify the differences in each spectrum bin
 - ``norm`` (*string ∈ {L1, L2}, default = L2*) :
     the norm to use for difference computation

Description
-----------

This algorithm computes the spectral flux of a spectrum. Flux is defined as the L2-norm [1] or L1-norm [2] of the difference between two consecutive frames of the magnitude spectrum. The frames have to be of the same size in order to yield a meaningful result. The default L2-norm is used more commonly.

An exception is thrown if the size of the input spectrum does not equal the previous input spectrum's size.


References:
  [1] Tzanetakis, G., Cook, P., "Multifeature Audio Segmentation for
  Browsing and Annotation", Proceedings of the 1999 IEEE Workshop on
  Applications of Signal Processing to Audio and Acoustics, New Paltz,
  NY, USA, 1999, W99 1-4

  [2] S. Dixon, "Onset detection revisited", in International Conference on
  Digital Audio Effects (DAFx'06), 2006, vol. 120, pp. 133-137.

  [3] http://en.wikipedia.org/wiki/Spectral_flux



See also
--------

Flux `(streaming) <streaming_Flux.html>`__