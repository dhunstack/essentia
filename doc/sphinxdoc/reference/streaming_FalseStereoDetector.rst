:orphan:

Algorithm reference - FalseStereoDetector (streaming mode)
==========================================================

Inputs
------

 - ``audio`` (*stereosample*) - the input audio

Outputs
-------

 - ``isFalseStereo`` (*integer*) - a flag indicating if the frame channes are simmilar
 - ``correlation`` (*real*) - correlation betweeen the input channels

Parameters
----------

 - ``correlationThreshold`` (*real ∈ [-1, 1], default = 0.9995*) :
     silence threshold. Silent frames will be skkiped.
 - ``frameSize`` (*integer ∈ (0, ∞), default = 512*) :
     desired frame size for the analysis.
 - ``silenceThreshold`` (*integer ∈ (-∞, 0), default = -70*) :
     correation computation can be skipped if not required.

Description
-----------

This algorithm detects if a stereo track has duplicated channels (false stereo).It is based on the Pearson linear correlation coefficient and thus it is robust scaling and shifting between channels.


See also
--------

FalseStereoDetector `(standard) <std_FalseStereoDetector.html>`__