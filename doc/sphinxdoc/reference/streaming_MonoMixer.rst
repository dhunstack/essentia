:orphan:

Algorithm reference - MonoMixer (streaming mode)
================================================

Inputs
------

 - ``audio`` (*stereosample*) - the input stereo signal
 - ``numberChannels`` (*integer*) - the number of channels of the input signal

Outputs
-------

 - ``audio`` (*real*) - the downmixed signal

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

MonoMixer `(standard) <std_MonoMixer.html>`__