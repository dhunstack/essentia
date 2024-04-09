:orphan:

Algorithm reference - Chromagram (streaming mode)
=================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input audio frame

Outputs
-------

 - ``chromagram`` (*vector_real*) - the magnitude constant-Q chromagram

Parameters
----------

 - ``binsPerOctave`` (*integer ∈ [1, ∞), default = 12*) :
     number of bins per octave
 - ``minFrequency`` (*real ∈ [1, ∞), default = 32.7*) :
     minimum frequency [Hz]
 - ``minimumKernelSize`` (*integer ∈ [2, ∞), default = 4*) :
     minimum size allowed for frequency kernels
 - ``normalizeType`` (*string ∈ {none, unit_sum, unit_max}, default = unit_max*) :
     normalize type
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

This algorithm computes the Constant-Q chromagram using FFT. See ConstantQ algorithm for more details.



See also
--------

Chromagram `(standard) <std_Chromagram.html>`__
ConstantQ `(standard) <std_ConstantQ.html>`__
ConstantQ `(streaming) <streaming_ConstantQ.html>`__
FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__