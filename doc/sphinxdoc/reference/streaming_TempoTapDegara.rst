:orphan:

Algorithm reference - TempoTapDegara (streaming mode)
=====================================================

Inputs
------

 - ``onsetDetections`` (*real*) - per-frame onset detection values

Outputs
-------

 - ``ticks`` (*real*) - the list of resulting ticks [s]

Parameters
----------

 - ``maxTempo`` (*integer ∈ [60, 250], default = 208*) :
     fastest tempo allowed to be detected [bpm]
 - ``minTempo`` (*integer ∈ [40, 180], default = 40*) :
     slowest tempo allowed to be detected [bpm]
 - ``resample`` (*string ∈ {none, x2, x3, x4}, default = none*) :
     use upsampling of the onset detection function (may increase accuracy)
 - ``sampleRateODF`` (*real ∈ (0, ∞), default = 86.1328*) :
     the sampling rate of the onset detection function [Hz]

Description
-----------

This algorithm estimates beat positions given an onset detection function.  The detection function is partitioned into 6-second frames with a 1.5-second increment, and the autocorrelation is computed for each frame, and is weighted by a tempo preference curve [2]. Periodicity estimations are done frame-wisely, searching for the best match with the Viterbi algorith [3]. The estimated periods are then passed to the probabilistic beat tracking algorithm [1], which computes beat positions.

Note that the input values of the onset detection functions must be non-negative otherwise an exception is thrown. Parameter "maxTempo" should be 20bpm larger than "minTempo", otherwise an exception is thrown.


References:
  [1] Degara, N., Rua, E. A., Pena, A., Torres-Guijarro, S., Davies, M. E., & Plumbley, M. D. (2012). Reliability-informed beat tracking of musical signals. Audio, Speech, and Language Processing, IEEE Transactions on, 20(1), 290-301.
  [2] Davies, M. E., & Plumbley, M. D. (2007). Context-dependent beat tracking of musical audio. Audio, Speech, and Language Processing, IEEE Transactions on, 15(3), 1009-1020.
  [3] Stark, A. M., Davies, M. E., & Plumbley, M. D. (2009, September). Real-time beatsynchronous analysis of musical audio. In 12th International Conference on Digital Audio Effects (DAFx-09), Como, Italy.


See also
--------

TempoTapDegara `(standard) <std_TempoTapDegara.html>`__
Viterbi `(standard) <std_Viterbi.html>`__
Viterbi `(streaming) <streaming_Viterbi.html>`__