:orphan:

Algorithm reference - Larm (streaming mode)
===========================================

Inputs
------

 - ``signal`` (*vector_real*) - the audio input signal

Outputs
-------

 - ``larm`` (*real*) - the LARM loudness estimate [dB]

Parameters
----------

 - ``attackTime`` (*real ∈ [0, ∞), default = 10*) :
     the attack time of the first order lowpass in the attack phase [ms]
 - ``power`` (*real ∈ (-∞, ∞), default = 1.5*) :
     the power used for averaging
 - ``releaseTime`` (*real ∈ [0, ∞), default = 1500*) :
     the release time of the first order lowpass in the release phase [ms]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm estimates the long-term loudness of an audio signal. The LARM model is based on the asymmetrical low-pass filtering of the Peak Program Meter (PPM), combined with Revised Low-frequency B-weighting (RLB) and power mean calculations. LARM has shown to be a reliable and objective loudness estimate of music and speech.

It accepts a power parameter to define the exponential for computing the power mean. Note that if the parameter's value is 2, this algorithm would be equivalent to RMS and if 1, this algorithm would be the mean of the absolute value.


References:
 [1] E. Skovenborg and S. H. Nielsen, "Evaluation of different loudness
 models with music and speech material,” in The 117th AES Convention, 2004.


See also
--------

Larm `(standard) <std_Larm.html>`__
Meter `(standard) <std_Meter.html>`__
Meter `(streaming) <streaming_Meter.html>`__
RMS `(standard) <std_RMS.html>`__
RMS `(streaming) <streaming_RMS.html>`__