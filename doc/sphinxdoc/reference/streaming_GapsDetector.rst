:orphan:

Algorithm reference - GapsDetector (streaming mode)
===================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input frame (must be non-empty)

Outputs
-------

 - ``starts`` (*vector_real*) - the start indexes of the detected gaps (if any) in seconds
 - ``ends`` (*vector_real*) - the end indexes of the detected gaps (if any) in seconds

Parameters
----------

 - ``attackTime`` (*real ∈ [0, ∞), default = 0.05*) :
     the attack time of the first order lowpass in the attack phase [ms]
 - ``frameSize`` (*integer ∈ [0, ∞), default = 2048*) :
     frame size used for the analysis. Should match the input frame size. Otherwise, an exception will be thrown
 - ``hopSize`` (*integer ∈ [0, ∞), default = 1024*) :
     hop size used for the analysis
 - ``kernelSize`` (*integer ∈ [1, ∞), default = 11*) :
     scalar giving the size of the median filter window. Must be odd
 - ``maximumTime`` (*real ∈ (0, ∞), default = 3500*) :
     time of the maximum gap duration [ms]
 - ``minimumTime`` (*real ∈ (0, ∞), default = 10*) :
     time of the minimum gap duration [ms]
 - ``postpowerTime`` (*real ∈ (0, ∞), default = 40*) :
     time for the postpower calculation [ms]
 - ``prepowerThreshold`` (*real ∈ (-∞, ∞), default = -30*) :
     prepower threshold [dB]. 
 - ``prepowerTime`` (*real ∈ (0, ∞), default = 40*) :
     time for the prepower calculation [ms]
 - ``releaseTime`` (*real ∈ [0, ∞), default = 0.05*) :
     the release time of the first order lowpass in the release phase [ms]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     sample rate used for the analysis
 - ``silenceThreshold`` (*real ∈ (-∞, ∞), default = -50*) :
     silence threshold [dB]

Description
-----------

This algorithm uses energy and time thresholds to detect gaps in the waveform. A median filter is used to remove spurious silent samples. The power of a small audio region before the detected gaps (prepower) is thresholded to detect intentional pauses as described in [1]. This technique is extended to the region after the gap.
The algorithm was designed for a framewise use and returns the start and end timestamps related to the first frame processed. Call configure() or reset() in order to restart the count.


References:
  [1] Mühlbauer, R. (2010). Automatic Audio Defect Detection.



See also
--------

GapsDetector `(standard) <std_GapsDetector.html>`__