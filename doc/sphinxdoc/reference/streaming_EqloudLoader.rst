:orphan:

Algorithm reference - EqloudLoader (streaming mode)
===================================================

Outputs
-------

 - ``audio`` (*real*) - the audio signal

Parameters
----------

 - ``downmix`` (*string ∈ {left, right, mix}, default = mix*) :
     the mixing type for stereo files
 - ``endTime`` (*real ∈ [0, ∞), default = 1e+06*) :
     the end time of the slice to be extracted [s]
 - ``filename`` (*string*) :
     the name of the file from which to read
 - ``replayGain`` (*real ∈ (-∞, ∞), default = -6*) :
     the value of the replayGain [dB] that should be used to normalize the signal [dB]
 - ``sampleRate`` (*real ∈ {32000, 44100, 48000}, default = 44100*) :
     the output sampling rate [Hz]
 - ``startTime`` (*real ∈ [0, ∞), default = 0*) :
     the start time of the slice to be extracted [s]

Description
-----------

This algorithm loads the raw audio data from an audio file, downmixes it to mono and normalizes using replayGain and equal-loudness filter. Audio is resampled in case the given sampling rate does not match the sampling rate of the input signal and normalized by the given replayGain gain. In addition, audio data is filtered through an equal-loudness filter.

This algorithm uses MonoLoader and thus inherits all of its input requirements and exceptions.


References:
  [1] Replay Gain - A Proposed Standard,
  http://replaygain.hydrogenaudio.org
  [2] Replay Gain - Equal Loudness Filter,
  http://replaygain.hydrogenaudio.org/proposal/equal_loudness.html


See also
--------

EqloudLoader `(standard) <std_EqloudLoader.html>`__
Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__
MonoLoader `(standard) <std_MonoLoader.html>`__
MonoLoader `(streaming) <streaming_MonoLoader.html>`__