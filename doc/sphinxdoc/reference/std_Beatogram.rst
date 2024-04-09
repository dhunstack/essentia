:orphan:

Algorithm reference - Beatogram (standard mode)
===============================================

Inputs
------

 - ``loudness`` (*vector_real*) - the loudness at each beat
 - ``loudnessBandRatio`` (*vector_vector_real*) - matrix of loudness ratios at each band and beat

Outputs
-------

 - ``beatogram`` (*vector_vector_real*) - filtered matrix loudness

Parameters
----------

 - ``size`` (*integer ∈ [1, ∞), default = 16*) :
     number of beats for dynamic filtering

Description
-----------

This algorithm filters the loudness matrix given by BeatsLoudness algorithm in order to keep only the most salient beat band representation.
This algorithm has been found to be useful for estimating time signatures.

Quality: experimental (not evaluated, do not use)


See also
--------

Beatogram `(streaming) <streaming_Beatogram.html>`__
BeatsLoudness `(standard) <std_BeatsLoudness.html>`__
BeatsLoudness `(streaming) <streaming_BeatsLoudness.html>`__
Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__