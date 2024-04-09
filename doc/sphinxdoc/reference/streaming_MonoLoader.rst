:orphan:

Algorithm reference - MonoLoader (streaming mode)
=================================================

Outputs
-------

 - ``audio`` (*real*) - the mono audio signal

Parameters
----------

 - ``audioStream`` (*integer ∈ [0, ∞), default = 0*) :
     audio stream index to be loaded. Other streams are no taken into account (e.g. if stream 0 is video and 1 is audio use index 0 to access it.)
 - ``downmix`` (*string ∈ {left, right, mix}, default = mix*) :
     the mixing type for stereo files
 - ``filename`` (*string*) :
     the name of the file from which to read
 - ``resampleQuality`` (*integer ∈ [0, 4], default = 1*) :
     the resampling quality, 0 for best quality, 4 for fast linear approximation
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the desired output sampling rate [Hz]

Description
-----------

This algorithm loads the raw audio data from an audio file and downmixes it to mono. Audio is resampled using Resample in case the given sampling rate does not match the sampling rate of the input signal.

This algorithm uses AudioLoader and thus inherits all of its input requirements and exceptions.


See also
--------

AudioLoader `(standard) <std_AudioLoader.html>`__
AudioLoader `(streaming) <streaming_AudioLoader.html>`__
MonoLoader `(standard) <std_MonoLoader.html>`__
Resample `(standard) <std_Resample.html>`__
Resample `(streaming) <streaming_Resample.html>`__