:orphan:

Algorithm reference - PitchYinFFT (standard mode)
=================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input spectrum (preferably created with a hann window)

Outputs
-------

 - ``pitch`` (*real*) - detected pitch [Hz]
 - ``pitchConfidence`` (*real*) - confidence with which the pitch was detected [0,1]

Parameters
----------

 - ``frameSize`` (*integer ∈ [2, ∞), default = 2048*) :
     number of samples in the input spectrum
 - ``interpolate`` (*bool ∈ {true, false}, default = true*) :
     boolean flag to enable interpolation
 - ``maxFrequency`` (*real ∈ (0, ∞), default = 22050*) :
     the maximum allowed frequency [Hz]
 - ``minFrequency`` (*real ∈ (0, ∞), default = 20*) :
     the minimum allowed frequency [Hz]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     sampling rate of the input spectrum [Hz]
 - ``tolerance`` (*real ∈ [0, 1], default = 1*) :
     tolerance for peak detection

Description
-----------

This algorithm estimates the fundamental frequency given the spectrum of a monophonic music signal. It is an implementation of YinFFT algorithm [1], which is an optimized version of Yin algorithm for computation in the frequency domain. It is recommended to window the input spectrum with a Hann window. The raw spectrum can be computed with the Spectrum algorithm.

An exception is thrown if an empty spectrum is provided.

Please note that if "pitchConfidence" is zero, "pitch" is undefined and should not be used for other algorithms.
Also note that a null "pitch" is never ouput by the algorithm and that "pitchConfidence" must always be checked out.


References:
  [1] P. M. Brossier, "Automatic Annotation of Musical Audio for Interactive
  Applications,” QMUL, London, UK, 2007.

  [2] Pitch detection algorithm - Wikipedia, the free encyclopedia
  http://en.wikipedia.org/wiki/Pitch_detection_algorithm


See also
--------

FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__
PitchYinFFT `(streaming) <streaming_PitchYinFFT.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__