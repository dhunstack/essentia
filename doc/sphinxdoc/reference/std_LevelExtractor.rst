:orphan:

Algorithm reference - LevelExtractor (standard mode)
====================================================

Inputs
------

 - ``signal`` (*vector_real*) - the audio input signal

Outputs
-------

 - ``loudness`` (*vector_real*) - the loudness values

Parameters
----------

 - ``frameSize`` (*integer ∈ (0, ∞), default = 88200*) :
     frame size to compute loudness
 - ``hopSize`` (*integer ∈ (0, ∞), default = 44100*) :
     hop size to compute loudness

Description
-----------

This algorithm extracts the loudness of an audio signal in frames using Loudness algorithm.


See also
--------

LevelExtractor `(streaming) <streaming_LevelExtractor.html>`__
Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__