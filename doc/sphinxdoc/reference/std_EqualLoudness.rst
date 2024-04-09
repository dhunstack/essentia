:orphan:

Algorithm reference - EqualLoudness (standard mode)
===================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``signal`` (*vector_real*) - the filtered signal

Parameters
----------

 - ``sampleRate`` (*real ∈ {8000, 16000, 32000, 44100, 48000}, default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm implements an equal-loudness filter. The human ear does not perceive sounds of all frequencies as having equal loudness, and to account for this, the signal is filtered by an inverted approximation of the equal-loudness curves. Technically, the filter is a cascade of a 10th order Yulewalk filter with a 2nd order Butterworth high pass filter.

This algorithm depends on the IIR algorithm. Any requirements of the IIR algorithm are imposed for this algorithm. This algorithm is only defined for the sampling rates specified in parameters. It will throw an exception if attempting to configure with any other sampling rate.


References:
  [1] Replay Gain - Equal Loudness Filter,
  http://replaygain.hydrogenaud.io/proposal/equal_loudness.html


See also
--------

EqualLoudness `(streaming) <streaming_EqualLoudness.html>`__
IIR `(standard) <std_IIR.html>`__
IIR `(streaming) <streaming_IIR.html>`__
Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__