:orphan:

Algorithm reference - LoudnessEBUR128Filter (streaming mode)
============================================================

Inputs
------

 - ``signal`` (*stereosample*) - the input stereo audio signal

Outputs
-------

 - ``signal`` (*real*) - the filtered signal (the sum of squared amplitudes of both channels filtered by ITU-R BS.1770 algorithm

Parameters
----------

 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

An auxilary signal preprocessing algorithm used within the LoudnessEBUR128 algorithm. It applies the pre-processing K-weighting filter and computes signal representation requiered by LoudnessEBUR128 in accordance with the EBU R128 recommendation.


References:
  [2] ITU-R BS.1770-2. "Algorithms to measure audio programme loudness and true-peak audio level




See also
--------

Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__
LoudnessEBUR128 `(standard) <std_LoudnessEBUR128.html>`__
LoudnessEBUR128 `(streaming) <streaming_LoudnessEBUR128.html>`__