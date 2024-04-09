:orphan:

Algorithm reference - Extractor (standard mode)
===============================================

Inputs
------

 - ``audio`` (*vector_real*) - the input audio signal

Outputs
-------

 - ``pool`` (*pool*) - the pool where to store the results

Parameters
----------

 - ``dynamics`` (*bool ∈ {true, false}, default = true*) :
     compute dynamics' features
 - ``dynamicsFrameSize`` (*integer ∈ (0, ∞), default = 88200*) :
     the frame size for level dynamics
 - ``dynamicsHopSize`` (*integer ∈ (0, ∞), default = 44100*) :
     the hop size for level dynamics
 - ``highLevel`` (*bool ∈ {true, false}, default = true*) :
     compute high level features
 - ``lowLevel`` (*bool ∈ {true, false}, default = true*) :
     compute low level features
 - ``lowLevelFrameSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the frame size for computing low level features
 - ``lowLevelHopSize`` (*integer ∈ (0, ∞), default = 1024*) :
     the hop size for computing low level features
 - ``midLevel`` (*bool ∈ {true, false}, default = true*) :
     compute mid level features
 - ``namespace`` (*string, default = ""*) :
     the main namespace under which to store the results
 - ``relativeIoi`` (*bool ∈ {true, false}, default = false*) :
     compute relative inter onset intervals
 - ``rhythm`` (*bool ∈ {true, false}, default = true*) :
     compute rhythm features
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate
 - ``tonalFrameSize`` (*integer ∈ (0, ∞), default = 4096*) :
     the frame size for low level tonal features
 - ``tonalHopSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the hop size for low level tonal features
 - ``tuning`` (*bool ∈ {true, false}, default = true*) :
     compute tuning frequency

Description
-----------

This algorithm extracts all low-level, mid-level and high-level features from an audio signal and stores them in a pool.

