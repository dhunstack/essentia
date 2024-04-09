:orphan:

Algorithm reference - EasyLoader (standard mode)
================================================

Outputs
-------

 - ``audio`` (*vector_real*) - the audio signal

Parameters
----------

 - ``audioStream`` (*integer ∈ [0, ∞), default = 0*) :
     audio stream index to be loaded. Other streams are no taken into account (e.g. if stream 0 is video and 1 is audio use index 0 to access it.)
 - ``downmix`` (*string ∈ {left, right, mix}, default = mix*) :
     the mixing type for stereo files
 - ``endTime`` (*real ∈ [0, ∞), default = 1e+06*) :
     the end time of the slice to be extracted [s]
 - ``filename`` (*string*) :
     the name of the file from which to read
 - ``replayGain`` (*real ∈ (-∞, ∞), default = -6*) :
     the value of the replayGain that should be used to normalize the signal [dB]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the output sampling rate [Hz]
 - ``startTime`` (*real ∈ [0, ∞), default = 0*) :
     the start time of the slice to be extracted [s]

Description
-----------

This algorithm loads the raw audio data from an audio file, downmixes it to mono and normalizes using replayGain. The audio is resampled in case the given sampling rate does not match the sampling rate of the input signal and is normalized by the given replayGain value.

This algorithm uses MonoLoader and therefore inherits all of its input requirements and exceptions.


References:
  [1] Replay Gain - A Proposed Standard,
  http://replaygain.hydrogenaudio.org


See also
--------

EasyLoader `(streaming) <streaming_EasyLoader.html>`__
MonoLoader `(standard) <std_MonoLoader.html>`__
MonoLoader `(streaming) <streaming_MonoLoader.html>`__