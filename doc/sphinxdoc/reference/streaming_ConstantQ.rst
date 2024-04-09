:orphan:

Algorithm reference - ConstantQ (streaming mode)
================================================

Inputs
------

 - ``frame`` (*vector_real*) - the windowed input audio frame

Outputs
-------

 - ``constantq`` (*vector_complex*) - the Constant Q transform

Parameters
----------

 - ``binsPerOctave`` (*integer ∈ [1, ∞), default = 12*) :
     number of bins per octave
 - ``minFrequency`` (*real ∈ [1, ∞), default = 32.7*) :
     minimum frequency [Hz]
 - ``minimumKernelSize`` (*integer ∈ [2, ∞), default = 4*) :
     minimum size allowed for frequency kernels
 - ``numberBins`` (*integer ∈ [1, ∞), default = 84*) :
     number of frequency bins, starting at minFrequency
 - ``sampleRate`` (*real ∈ [0, ∞), default = 44100*) :
     FFT sampling rate [Hz]
 - ``scale`` (*real ∈ [0, ∞), default = 1*) :
     filters scale. Larger values use longer windows
 - ``threshold`` (*real ∈ [0, 1), default = 0.01*) :
     bins whose magnitude is below this quantile are discarded
 - ``windowType`` (*string ∈ {hamming, hann, hannnsgcq, triangular, square, blackmanharris62, blackmanharris70, blackmanharris74, blackmanharris92}, default = hann*) :
     the window type
 - ``zeroPhase`` (*bool ∈ {true, false}, default = true*) :
     a boolean value that enables zero-phase windowing. Input audio frames should be windowed with the same phase mode

Description
-----------

This algorithm computes Constant Q Transform using the FFT for fast calculation. It transforms a windowed audio frame into the log frequency domain.


References:
  [1] Constant Q transform - Wikipedia, the free encyclopedia,
  https://en.wikipedia.org/wiki/Constant_Q_transform
  [2] Brown, J. C., & Puckette, M. S. (1992). An efficient algorithm for the
  calculation of a constant Q transform. The Journal of the Acoustical Society
  of America, 92(5), 2698-2701.
  [3] Schörkhuber, C., & Klapuri, A. (2010). Constant-Q transform toolbox for
  music processing. In 7th Sound and Music Computing Conference, Barcelona,
  Spain (pp. 3-64).


See also
--------

ConstantQ `(standard) <std_ConstantQ.html>`__
FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__