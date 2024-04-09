:orphan:

Algorithm reference - RhythmExtractor2013 (standard mode)
=========================================================

Inputs
------

 - ``signal`` (*vector_real*) - the audio input signal

Outputs
-------

 - ``bpm`` (*real*) - the tempo estimation [bpm]
 - ``ticks`` (*vector_real*) -  the estimated tick locations [s]
 - ``confidence`` (*real*) - confidence with which the ticks are detected (ignore this value if using 'degara' method)
 - ``estimates`` (*vector_real*) - the list of bpm estimates characterizing the bpm distribution for the signal [bpm]
 - ``bpmIntervals`` (*vector_real*) - list of beats interval [s]

Parameters
----------

 - ``maxTempo`` (*integer ∈ [60, 250], default = 208*) :
     the fastest tempo to detect [bpm]
 - ``method`` (*string ∈ {multifeature, degara}, default = multifeature*) :
     the method used for beat tracking
 - ``minTempo`` (*integer ∈ [40, 180], default = 40*) :
     the slowest tempo to detect [bpm]

Description
-----------

This algorithm extracts the beat positions and estimates their confidence as well as tempo in bpm for an audio signal. The beat locations can be computed using:

  - 'multifeature', the BeatTrackerMultiFeature algorithm
  - 'degara', the BeatTrackerDegara algorithm (note that there is no confidence estimation for this method, the output confidence value is always 0)


See BeatTrackerMultiFeature and BeatTrackerDegara algorithms for more details.

Note that the algorithm requires the sample rate of the input signal to be 44100 Hz in order to work correctly.



See also
--------

BeatTrackerDegara `(standard) <std_BeatTrackerDegara.html>`__
BeatTrackerDegara `(streaming) <streaming_BeatTrackerDegara.html>`__
BeatTrackerMultiFeature `(standard) <std_BeatTrackerMultiFeature.html>`__
BeatTrackerMultiFeature `(streaming) <streaming_BeatTrackerMultiFeature.html>`__
RhythmExtractor2013 `(streaming) <streaming_RhythmExtractor2013.html>`__