:orphan:

Algorithm reference - FalseStereoDetector (standard mode)
=========================================================

Inputs
------

 - ``frame`` (*vector_stereosample*) - the input frame (must be non-empty)

Outputs
-------

 - ``isFalseStereo`` (*integer*) - a flag indicating if the frame channes are simmilar
 - ``correlation`` (*real*) - correlation betweeen the input channels

Parameters
----------

 - ``correlationThreshold`` (*real ∈ [-1, 1], default = 0.9995*) :
     threshold to activate the isFalseStereo flag
 - ``silenceThreshold`` (*integer ∈ (-∞, 0), default = -70*) :
     Silent frames will be skkiped.

Description
-----------

This algorithm detects if a stereo track has duplicated channels (false stereo).It is based on the Pearson linear correlation coefficient and thus it is robust scaling and shifting between channels.


See also
--------

FalseStereoDetector `(streaming) <streaming_FalseStereoDetector.html>`__