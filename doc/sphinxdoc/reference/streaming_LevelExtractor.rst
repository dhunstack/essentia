:orphan:

Algorithm reference - LevelExtractor (streaming mode)
=====================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``loudness`` (*real*) - the loudness values

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

LevelExtractor `(standard) <std_LevelExtractor.html>`__
Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__