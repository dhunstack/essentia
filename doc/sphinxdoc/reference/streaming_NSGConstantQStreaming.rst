:orphan:

Algorithm reference - NSGConstantQStreaming (streaming mode)
============================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input audio signal

Outputs
-------

 - ``constantq`` (*vector_complex*) - the constant Q transform of the input frame
 - ``constantqdc`` (*vector_complex*) - the DC band transform of the input frame. Only needed for the inverse transform
 - ``constantqnf`` (*vector_complex*) - the Nyquist band transform of the input frame. Only needed for the inverse transform
 - ``framestamps`` (*integer*) - this vector sets the beginnings of each frame in the 'constantq' buffer

Parameters
----------

 - ``binsPerOctave`` (*integer ∈ [1, ∞), default = 48*) :
     the number of bins per octave
 - ``gamma`` (*integer ∈ [0, ∞), default = 0*) :
     The bandwidth of each filter is given by Bk = 1/Q \* fk + gamma
 - ``inputSize`` (*integer ∈ (0, ∞), default = 4096*) :
     the size of the input
 - ``maxFrequency`` (*real ∈ (0, ∞), default = 7040*) :
     the maximum frequency
 - ``minFrequency`` (*real ∈ (0, ∞), default = 27.5*) :
     the minimum frequency
 - ``minimumWindow`` (*integer ∈ [2, ∞), default = 4*) :
     minimum size allowed for the windows
 - ``normalize`` (*string ∈ {sine, impulse, none}, default = none*) :
     coefficient normalization
 - ``phaseMode`` (*string ∈ {local, global}, default = global*) :
     'local' to use zero-centered filters. 'global' to use a phase mapping function as described in [1]
 - ``rasterize`` (*string ∈ {none, full, piecewise}, default = full*) :
     hop sizes for each frequency channel. With 'none' each frequency channel is distinct. 'full' sets the hop sizes of all the channels to the smallest. 'piecewise' rounds down the hop size to a power of two
 - ``sampleRate`` (*real ∈ [0, ∞), default = 44100*) :
     the desired sampling rate [Hz]
 - ``window`` (*string ∈ {hamming, hann, hannnsgcq, triangular, square, blackmanharris62, blackmanharris70, blackmanharris74, blackmanharris92}, default = hannnsgcq*) :
     the type of window for the frequency filters. It is not recommended to change the default window.
 - ``windowSizeFactor`` (*integer ∈ [1, ∞), default = 1*) :
     window sizes are rounded to multiples of this

Description
-----------

This algorithm computes a constant Q transform using non stationary Gabor frames and returns a complex time-frequency representation of the input vector.
The implementation is inspired by the toolbox described in [1].

References:
  [1] Schörkhuber, C., Klapuri, A., Holighaus, N., & Dörfler, M. (n.d.). A Matlab Toolbox for Efficient Perfect Reconstruction Time-Frequency Transforms with Log-Frequency Resolution.

