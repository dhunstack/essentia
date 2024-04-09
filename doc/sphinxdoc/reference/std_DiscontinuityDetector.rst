:orphan:

Algorithm reference - DiscontinuityDetector (standard mode)
===========================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input frame (must be non-empty)

Outputs
-------

 - ``discontinuityLocations`` (*vector_real*) - the index of the detected discontinuities (if any)
 - ``discontinuityAmplitudes`` (*vector_real*) - the peak values of the prediction error for the discontinuities (if any)

Parameters
----------

 - ``detectionThreshold`` (*real ∈ [1, ∞), default = 8*) :
     'detectionThreshold' times the standard deviation plus the median of the frame is used as detection threshold
 - ``energyThreshold`` (*real ∈ (-∞, ∞), default = -60*) :
     threshold in dB to detect silent subframes
 - ``frameSize`` (*integer ∈ (0, ∞), default = 512*) :
     the expected size of the input audio signal (this is an optional parameter to optimize memory allocation)
 - ``hopSize`` (*integer ∈ [0, ∞), default = 256*) :
     hop size used for the analysis. This parameter must be set correctly as it cannot be obtained from the input data
 - ``kernelSize`` (*integer ∈ [1, ∞), default = 7*) :
     scalar giving the size of the median filter window. Must be odd
 - ``order`` (*integer ∈ [1, ∞), default = 3*) :
     scalar giving the number of LPCs to use
 - ``silenceThreshold`` (*integer ∈ (-∞, 0), default = -50*) :
     threshold to skip silent frames
 - ``subFrameSize`` (*integer ∈ [1, ∞), default = 32*) :
     size of the window used to compute silent subframes

Description
-----------

This algorithm uses LPC and some heuristics to detect discontinuities in an audio signal. [1].


References:
  [1] Mühlbauer, R. (2010). Automatic Audio Defect Detection.



See also
--------

DiscontinuityDetector `(streaming) <streaming_DiscontinuityDetector.html>`__
LPC `(standard) <std_LPC.html>`__
LPC `(streaming) <streaming_LPC.html>`__