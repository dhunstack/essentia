:orphan:

Algorithm reference - StartStopCut (standard mode)
==================================================

Inputs
------

 - ``audio`` (*vector_real*) - the input audio 

Outputs
-------

 - ``startCut`` (*integer*) - 1 if there is a cut at the begining of the audio
 - ``stopCut`` (*integer*) - 1 if there is a cut at the end of the audio

Parameters
----------

 - ``frameSize`` (*integer ∈ (0, ∞), default = 256*) :
     the frame size for the internal power analysis
 - ``hopSize`` (*integer ∈ (0, ∞), default = 256*) :
     the hop size for the internal power analysis
 - ``maximumStartTime`` (*real ∈ [0, ∞), default = 10*) :
     if the first non-silent frame occurs before maximumStartTime startCut is activated [ms]
 - ``maximumStopTime`` (*real ∈ [0, ∞), default = 10*) :
     if the last non-silent frame occurs after maximumStopTime to the end stopCut is activated [ms]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sample rate
 - ``threshold`` (*integer ∈ (-∞, 0], default = -60*) :
     the threshold below which average energy is defined as silence [dB]

Description
-----------

This algorithm outputs if there is a cut at the beginning or at the end of the audio by locating the first and last non-silent frames and comparing their positions to the actual beginning and end of the audio. The input audio is considered to be cut at the beginning (or the end) and the corresponding flag is activated if the first (last) non-silent frame occurs before (after) the configurable time threshold.

Notes: This algorithm is designed to operate on the entire (file) audio. In the streaming mode, use it in combination with RealAccumulator.
The encoding/decoding process of lossy formats can introduce some padding at the beginning/end of the file. E.g. an MP3 file encoded and decoded with LAME using the default parameters will introduce a delay of 1104 samples [http://lame.sourceforge.net/tech-FAQ.txt]. In this case, the maximumStartTime can be increased by 1104 ÷ 44100 × 1000 = 25 ms to prevent misdetections.



See also
--------

RealAccumulator `(streaming) <streaming_RealAccumulator.html>`__
StartStopCut `(streaming) <streaming_StartStopCut.html>`__