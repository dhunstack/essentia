:orphan:

Algorithm reference - BeatTrackerDegara (streaming mode)
========================================================

Inputs
------

 - ``signal`` (*real*) - input signal

Outputs
-------

 - ``ticks`` (*real*) - the estimated tick locations [s]

Parameters
----------

 - ``maxTempo`` (*integer ∈ [60, 250], default = 208*) :
     the fastest tempo to detect [bpm]
 - ``minTempo`` (*integer ∈ [40, 180], default = 40*) :
     the slowest tempo to detect [bpm]

Description
-----------

This algorithm estimates the beat positions given an input signal. It computes 'complex spectral difference' onset detection function and utilizes the beat tracking algorithm (TempoTapDegara) to extract beats [1]. The algorithm works with the optimized settings of 2048/1024 frame/hop size for the computation of the detection function, with its posterior x2 resampling.) While it has a lower accuracy than BeatTrackerMultifeature (see the evaluation results in [2]), its computational speed is significantly higher, which makes reasonable to apply this algorithm for batch processings of large amounts of audio signals.

Note that the algorithm requires the audio input with the 44100 Hz sampling rate in order to function correctly.


References:
  [1] N. Degara, E. A. Rua, A. Pena, S. Torres-Guijarro, M. E. Davies, and
  M. D. Plumbley, "Reliability-informed beat tracking of musical signals,"
  IEEE Transactions on Audio, Speech, and Language Processing, vol. 20,
  no. 1, pp. 290–301, 2012.

  [2] J.R. Zapata, M.E.P. Davies and E. Gómez, "Multi-feature beat tracking,"
  IEEE Transactions on Audio, Speech, and Language Processing, vol. 22,
  no. 4, pp. 816-825, 2014.


See also
--------

BeatTrackerDegara `(standard) <std_BeatTrackerDegara.html>`__
TempoTap `(standard) <std_TempoTap.html>`__
TempoTap `(streaming) <streaming_TempoTap.html>`__
TempoTapDegara `(standard) <std_TempoTapDegara.html>`__
TempoTapDegara `(streaming) <streaming_TempoTapDegara.html>`__