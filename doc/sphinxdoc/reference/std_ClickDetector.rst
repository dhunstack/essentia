:orphan:

Algorithm reference - ClickDetector (standard mode)
===================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input frame (must be non-empty)

Outputs
-------

 - ``starts`` (*vector_real*) - starting indexes of the clicks
 - ``ends`` (*vector_real*) - ending indexes of the clicks

Parameters
----------

 - ``detectionThreshold`` (*real ∈ (-∞, ∞), default = 30*) :
     'detectionThreshold' the threshold is based on the instant power of the noisy excitation signal plus detectionThreshold dBs
 - ``frameSize`` (*integer ∈ (0, ∞), default = 512*) :
     the expected size of the input audio signal (this is an optional parameter to optimize memory allocation)
 - ``hopSize`` (*integer ∈ (0, ∞), default = 256*) :
     hop size used for the analysis. This parameter must be set correctly as it cannot be obtained from the input data
 - ``order`` (*integer ∈ [1, ∞), default = 12*) :
     scalar giving the number of LPCs to use
 - ``powerEstimationThreshold`` (*integer ∈ (0, ∞), default = 10*) :
     the noisy excitation is clipped to 'powerEstimationThreshold' times its median.
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     sample rate used for the analysis
 - ``silenceThreshold`` (*integer ∈ (-∞, 0), default = -50*) :
     threshold to skip silent frames

Description
-----------

This algorithm detects the locations of impulsive noises (clicks and pops) on the input audio frame. It relies on LPC coefficients to inverse-filter the audio in order to attenuate the stationary part and enhance the prediction error (or excitation noise)[1]. After this, a matched filter is used to further enhance the impulsive peaks. The detection threshold is obtained from a robust estimate of the excitation noise power [2] plus a parametric gain value.


References:
[1] Vaseghi, S. V., & Rayner, P. J. W. (1990). Detection and suppression of impulsive noise in speech communication systems. IEE Proceedings I (Communications, Speech and Vision), 137(1), 38-46.
[2] Vaseghi, S. V. (2008). Advanced digital signal processing and noise reduction. John Wiley & Sons. Page 355


See also
--------

ClickDetector `(streaming) <streaming_ClickDetector.html>`__
LPC `(standard) <std_LPC.html>`__
LPC `(streaming) <streaming_LPC.html>`__