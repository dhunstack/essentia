:orphan:

Algorithm reference - Welch (streaming mode)
============================================

Inputs
------

 - ``frame`` (*vector_real*) - the input stereo audio signal

Outputs
-------

 - ``psd`` (*vector_real*) - Power Spectral Density [dB] or [dB/Hz]

Parameters
----------

 - ``averagingFrames`` (*integer ∈ (0, ∞), default = 10*) :
     amount of frames to average
 - ``fftSize`` (*integer ∈ (0, ∞), default = 1024*) :
     size of the FFT. Zero padding is added if this is larger the input frame size.
 - ``frameSize`` (*integer ∈ (0, ∞), default = 512*) :
     the expected size of the input audio signal (this is an optional parameter to optimize memory allocation)
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``scaling`` (*string ∈ {density, power}, default = density*) :
     'density' normalizes the result to the bandwidth while 'power' outputs the unnormalized power spectrum
 - ``windowType`` (*string ∈ {hamming, hann, triangular, square, blackmanharris62, blackmanharris70, blackmanharris74, blackmanharris92}, default = hann*) :
     the window type

Description
-----------

 This algorithm estimates the Power Spectral Density of the input signal using the Welch's method [1].
 The input should be fed with the overlapped audio frames. The algorithm stores internally therequired past frames to compute each output. Call reset() to clear the buffers. This implentation is based on Scipy [2]


References:
  [1] The Welch's method - Wikipedia, the free encyclopedia,
https://en.wikipedia.org/wiki/Welch%27s_method
  [2] https://docs.scipy.org/doc/scipy-0.14.0/reference/generated/scipy.signal.welch.html


See also
--------

Welch `(standard) <std_Welch.html>`__