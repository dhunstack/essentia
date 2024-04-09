:orphan:

Algorithm reference - BeatTrackerMultiFeature (streaming mode)
==============================================================

Inputs
------

 - ``signal`` (*real*) - input signal

Outputs
-------

 - ``ticks`` (*real*) - the estimated tick locations [s]
 - ``confidence`` (*real*) - confidence of the beat tracker [0, 5.32]

Parameters
----------

 - ``maxTempo`` (*integer ∈ [60, 250], default = 208*) :
     the fastest tempo to detect [bpm]
 - ``minTempo`` (*integer ∈ [40, 180], default = 40*) :
     the slowest tempo to detect [bpm]

Description
-----------

This algorithm estimates the beat positions given an input signal. It computes a number of onset detection functions and estimates beat location candidates from them using TempoTapDegara algorithm. Thereafter the best candidates are selected using TempoTapMaxAgreement. The employed detection functions, and the optimal frame/hop sizes used for their computation are:

  - complex spectral difference (see 'complex' method in OnsetDetection algorithm, 2048/1024 with posterior x2 upsample or the detection function)
  - energy flux (see 'rms' method in OnsetDetection algorithm, the same settings)
  - spectral flux in Mel-frequency bands (see 'melflux' method in OnsetDetection algorithm, the same settings)
  - beat emphasis function (see 'beat_emphasis' method in OnsetDetectionGlobal algorithm, 2048/512)
  - spectral flux between histogrammed spectrum frames, measured by the modified information gain (see 'infogain' method in OnsetDetectionGlobal algorithm, 2048/512)


You can follow these guidelines [2] to assess the quality of beats estimation based on the computed confidence value:

  - [0, 1)      very low confidence, the input signal is hard for the employed candidate beat trackers
  - [1, 1.5]    low confidence
  - (1.5, 3.5]  good confidence, accuracy around 80% in AMLt measure
  - (3.5, 5.32] excellent confidence


Note that the algorithm requires the audio input with the 44100 Hz sampling rate in order to function correctly.


References:
  [1] J. Zapata, M. Davies and E. Gómez, "Multi-feature beat tracker,"
  IEEE/ACM Transactions on Audio, Speech and Language Processing. 22(4),
  816-825, 2014

  [2] J.R. Zapata, A. Holzapfel, M.E.P. Davies, J.L. Oliveira, F. Gouyon,
  "Assigning a confidence threshold on automatic beat annotation in large
  datasets", International Society for Music Information Retrieval Conference
  (ISMIR'12), pp. 157-162, 2012



See also
--------

BeatTrackerMultiFeature `(standard) <std_BeatTrackerMultiFeature.html>`__
OnsetDetection `(standard) <std_OnsetDetection.html>`__
OnsetDetection `(streaming) <streaming_OnsetDetection.html>`__
OnsetDetectionGlobal `(standard) <std_OnsetDetectionGlobal.html>`__
OnsetDetectionGlobal `(streaming) <streaming_OnsetDetectionGlobal.html>`__
TempoTap `(standard) <std_TempoTap.html>`__
TempoTap `(streaming) <streaming_TempoTap.html>`__
TempoTapDegara `(standard) <std_TempoTapDegara.html>`__
TempoTapDegara `(streaming) <streaming_TempoTapDegara.html>`__
TempoTapMaxAgreement `(standard) <std_TempoTapMaxAgreement.html>`__
TempoTapMaxAgreement `(streaming) <streaming_TempoTapMaxAgreement.html>`__