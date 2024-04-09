:orphan:

Algorithm reference - Scale (streaming mode)
============================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``signal`` (*real*) - the output audio signal

Parameters
----------

 - ``clipping`` (*bool ∈ {true, false}, default = true*) :
     boolean flag whether to apply clipping or not
 - ``factor`` (*real ∈ [0, ∞), default = 10*) :
     the multiplication factor by which the audio will be scaled
 - ``maxAbsValue`` (*real ∈ [0, ∞), default = 1*) :
     the maximum value above which to apply clipping

Description
-----------

This algorithm scales the audio by the specified factor using clipping if required.


See also
--------

Scale `(standard) <std_Scale.html>`__