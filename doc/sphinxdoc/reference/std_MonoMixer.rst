:orphan:

Algorithm reference - MonoMixer (standard mode)
===============================================

Inputs
------

 - ``audio`` (*vector_stereosample*) - the input stereo signal
 - ``numberChannels`` (*integer*) - the number of channels of the input signal

Outputs
-------

 - ``audio`` (*vector_real*) - the downmixed signal

Parameters
----------

 - ``type`` (*string ∈ {left, right, mix}, default = mix*) :
     the type of downmixing performed

Description
-----------

This algorithm downmixes the signal into a single channel given a stereo signal. If the signal was already a monoaural, it is left unchanged.


References:
  [1] downmixing - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Downmixing



See also
--------

MonoMixer `(streaming) <streaming_MonoMixer.html>`__