:orphan:

Algorithm reference - HarmonicMask (streaming mode)
===================================================

Inputs
------

 - ``fft`` (*vector_complex*) - the input frame
 - ``pitch`` (*real*) - an estimate of the fundamental frequency of the signal [Hz]

Outputs
-------

 - ``fft`` (*vector_complex*) - the output frame

Parameters
----------

 - ``attenuation`` (*real ∈ [-∞, ∞), default = -200*) :
     attenuation in dB's of the muted pitched component. If value is positive the pitched component is attenuated (muted), if the value is negative the pitched component is soloed (i.e. background component is attenuated).
 - ``binWidth`` (*integer ∈ [0, ∞), default = 4*) :
     number of bins per harmonic partials applied to the mask. This will depend on the internal FFT size
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]

Description
-----------

This algorithm applies a spectral mask to remove a pitched source component from the signal. It computes first an harmonic mask corresponding to the input pitch and applies the mask to the input FFT to remove that pitch. The bin width determines how many spectral bins are masked per harmonic partial. 
An attenuation value in dB determines the amount of suppression of the pitched component w.r.t the background for the case of muting. A negative attenuation value allows soloing the pitched component. 


References:
 


See also
--------

FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__
HarmonicMask `(standard) <std_HarmonicMask.html>`__