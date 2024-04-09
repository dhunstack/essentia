:orphan:

Algorithm reference - SaturationDetector (standard mode)
========================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input audio frame

Outputs
-------

 - ``starts`` (*vector_real*) - starting times of the detected saturated regions [s]
 - ``ends`` (*vector_real*) - ending times of the detected saturated regions [s]

Parameters
----------

 - ``differentialThreshold`` (*real ∈ [0, ∞), default = 0.001*) :
     minimum difference between contiguous samples of the salturated regions
 - ``energyThreshold`` (*real ∈ (-∞, 0], default = -1*) :
     mininimum energy of the samples in the saturated regions [dB]
 - ``frameSize`` (*integer ∈ (0, ∞), default = 512*) :
     expected input frame size
 - ``hopSize`` (*integer ∈ (0, ∞), default = 256*) :
     hop size used for the analysis
 - ``minimumDuration`` (*real ∈ [0, ∞), default = 0.005*) :
     minimum duration of the saturated regions [ms]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     sample rate used for the analysis

Description
-----------

this algorithm outputs the staring/ending locations of the saturated regions in seconds. Saturated regions are found by means of a tripe criterion:
	 1. samples in a saturated region should have more energy than a given threshold.
	 2. the difference between the samples in a saturated region should be smaller than a given threshold.
	 3. the duration of the saturated region should be longer than a given threshold.

note: The algorithm was designed for a framewise use and the returned timestamps are related to the first frame processed. Use reset() or configure() to restart the count.


See also
--------

SaturationDetector `(streaming) <streaming_SaturationDetector.html>`__