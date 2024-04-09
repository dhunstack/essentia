:orphan:

Algorithm reference - ReplayGain (streaming mode)
=================================================

Inputs
------

 - ``signal`` (*real*) - the input signal

Outputs
-------

 - ``replayGain`` (*real*) - the ReplayGain gain value in dB

Parameters
----------

 - ``applyEqloud`` (*bool ∈ {true, false}, default = true*) :
     enables whether this algorithm should apply an equal-loudness filter (set to false if the input audio signal is already equal-loudness filtered)
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm computes the Replay Gain loudness value of an audio signal. The algorithm is described in detail in [1]. The value returned is the 'standard' ReplayGain value, not the value with 6dB preamplification as computed by lame, mp3gain, vorbisgain, and all widely used ReplayGain programs.

This algorithm is only defined for input signals which size is larger than 0.05ms, otherwise an exception will be thrown.

As a pre-processing step, the algorithm applies equal-loudness filtering to the input signal. This is always done in the standard mode, but it can be turned off in the streaming mode, which is useful in the case one already has an equal-loudness filtered signal.


References:
  [1] ReplayGain 1.0 specification, https://wiki.hydrogenaud.io/index.php?title=ReplayGain_1.0_specification



See also
--------

ReplayGain `(standard) <std_ReplayGain.html>`__