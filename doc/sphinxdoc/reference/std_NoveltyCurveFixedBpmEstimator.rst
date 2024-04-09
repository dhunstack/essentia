:orphan:

Algorithm reference - NoveltyCurveFixedBpmEstimator (standard mode)
===================================================================

Inputs
------

 - ``novelty`` (*vector_real*) - the novelty curve of the audio signal

Outputs
-------

 - ``bpms`` (*vector_real*) - the bpm candidates sorted by magnitude
 - ``amplitudes`` (*vector_real*) - the magnitude of each bpm candidate

Parameters
----------

 - ``hopSize`` (*integer, default = 512*) :
     the hopSize used to computeh the novelty curve from the original signal
 - ``maxBpm`` (*real ∈ (0, ∞), default = 560*) :
     the maximum bpm to look for
 - ``minBpm`` (*real ∈ (0, ∞), default = 30*) :
     the minimum bpm to look for
 - ``sampleRate`` (*real ∈ [1, ∞), default = 44100*) :
     the sampling rate original audio signal [Hz]
 - ``tolerance`` (*real ∈ (0, 100], default = 3*) :
     tolerance (in percentage) for considering bpms to be equal

Description
-----------

This algorithm outputs a histogram of the most probable bpms assuming the signal has constant tempo given the novelty curve. This algorithm is based on the autocorrelation of the novelty curve (see NoveltyCurve algorithm) and should only be used for signals that have a constant tempo or as a first tempo estimator to be used in conjunction with other algorithms such as BpmHistogram.It is a simplified version of the algorithm described in [1] as, in order to predict the best BPM candidate,  it computes autocorrelation of the entire novelty curve instead of analyzing it on frames and histogramming the peaks over frames.


References:
  [1] E. Aylon and N. Wack, "Beat detection using plp," in Music Information
  Retrieval Evaluation Exchange (MIREX’10), 2010.



See also
--------

BpmHistogram `(standard) <std_BpmHistogram.html>`__
BpmHistogram `(streaming) <streaming_BpmHistogram.html>`__
Histogram `(standard) <std_Histogram.html>`__
Histogram `(streaming) <streaming_Histogram.html>`__
NoveltyCurve `(standard) <std_NoveltyCurve.html>`__
NoveltyCurve `(streaming) <streaming_NoveltyCurve.html>`__