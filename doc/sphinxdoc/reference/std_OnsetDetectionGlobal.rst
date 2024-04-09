:orphan:

Algorithm reference - OnsetDetectionGlobal (standard mode)
==========================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``onsetDetections`` (*vector_real*) - the frame-wise values of the detection function

Parameters
----------

 - ``frameSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the frame size for computing onset detection function
 - ``hopSize`` (*integer ∈ (0, ∞), default = 512*) :
     the hop size for computing onset detection function
 - ``method`` (*string ∈ {infogain, beat_emphasis}, default = infogain*) :
     the method used for onset detection
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm computes various onset detection functions. Detection values are computed frame-wisely given an input signal. The output of this algorithm should be post-processed in order to determine whether the frame contains an onset or not. Namely, it could be fed to the Onsets algorithm.
The following method are available:

  - 'infogain', the spectral difference measured by the modified information gain [1]. For each frame, it accounts for energy change in between preceding and consecutive frames, histogrammed together, in order to suppress short-term variations on frame-by-frame basis.
  - 'beat_emphasis', the beat emphasis function [1]. This function is a linear combination of onset detection functions (complex spectral differences) in a number of sub-bands, weighted by their beat strength computed over the entire input signal.

Note:

  - 'infogain' onset detection has been optimized for the default sampleRate=44100Hz, frameSize=2048, hopSize=512.
  - 'beat_emphasis' is optimized for a fixed resolution of 11.6ms, which corresponds to the default sampleRate=44100Hz, frameSize=1024, hopSize=512.

  Optimal performance of beat detection with TempoTapDegara is not guaranteed for other settings.


References:
  [1] S. Hainsworth and M. Macleod, "Onset detection in musical audio
  signals," in International Computer Music Conference (ICMC’03), 2003,
  pp. 163–6.

  [2] M. E. P. Davies, M. D. Plumbley, and D. Eck, "Towards a musical beat
  emphasis function," in IEEE Workshop on Applications of Signal Processing
  to Audio and Acoustics, 2009. WASPAA  ’09, 2009, pp. 61–64.


See also
--------

OnsetDetectionGlobal `(streaming) <streaming_OnsetDetectionGlobal.html>`__
Onsets `(standard) <std_Onsets.html>`__
Onsets `(streaming) <streaming_Onsets.html>`__
TempoTap `(standard) <std_TempoTap.html>`__
TempoTap `(streaming) <streaming_TempoTap.html>`__
TempoTapDegara `(standard) <std_TempoTapDegara.html>`__
TempoTapDegara `(streaming) <streaming_TempoTapDegara.html>`__