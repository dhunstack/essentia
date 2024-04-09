:orphan:

Algorithm reference - LoudnessVickers (standard mode)
=====================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``loudness`` (*real*) - the Vickers loudness [dB]

Parameters
----------

 - ``sampleRate`` (*real ∈ [44100, 44100], default = 44100*) :
     the audio sampling rate of the input signal which is used to create the weight vector [Hz] (currently, this algorithm only works on signals with a sampling rate of 44100Hz)

Description
-----------

This algorithm computes Vickers's loudness of an audio signal. Currently, this algorithm only works for signals with a 44100Hz sampling rate. This algorithm is meant to be given frames of audio as input (not entire audio signals). The algorithm described in the paper performs a weighted average of the loudness value computed for each of the given frames, this step is left as a post processing step and is not performed by this algorithm.


References:
  [1] E. Vickers, "Automatic Long-term Loudness and Dynamics Matching," in
  The 111th AES Convention, 2001.


See also
--------

Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__
LoudnessVickers `(streaming) <streaming_LoudnessVickers.html>`__