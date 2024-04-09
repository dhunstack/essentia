:orphan:

Algorithm reference - SuperFluxExtractor (standard mode)
========================================================

Inputs
------

 - ``signal`` (*vector_real*) - the audio input signal

Outputs
-------

 - ``onsets`` (*vector_real*) - the onsets times

Parameters
----------

 - ``combine`` (*real ∈ (0, ∞), default = 20*) :
     time threshold for double onsets detections (ms)
 - ``frameSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the frame size for computing low-level features
 - ``hopSize`` (*integer ∈ (0, ∞), default = 256*) :
     the hop size for computing low-level features
 - ``ratioThreshold`` (*real ∈ [0, ∞), default = 16*) :
     ratio threshold for peak picking with respect to novelty_signal/novelty_average rate, use 0 to disable it (for low-energy onsets)
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]
 - ``threshold`` (*real ∈ [0, ∞), default = 0.05*) :
     threshold for peak peaking with respect to the difference between novelty_signal and average_signal (for onsets in ambient noise)

Description
-----------

This algorithm detects onsets given an audio signal using SuperFlux algorithm. This implementation is based on the available reference implementation in python [2]. The algorithm computes spectrum of the input signal, summarizes it into triangular band energies, and computes a onset detection function based on spectral flux tracking spectral trajectories with a maximum filter (SuperFluxNovelty). The peaks of the function are then detected (SuperFluxPeaks).


References:
  [1] Böck, S. and Widmer, G., Maximum Filter Vibrato Suppression for Onset
  Detection, Proceedings of the 16th International Conference on Digital
  Audio Effects (DAFx-13), 2013
  [2] https://github.com/CPJKU/SuperFlux


See also
--------

Flux `(standard) <std_Flux.html>`__
Flux `(streaming) <streaming_Flux.html>`__
SuperFluxExtractor `(streaming) <streaming_SuperFluxExtractor.html>`__
SuperFluxNovelty `(standard) <std_SuperFluxNovelty.html>`__
SuperFluxNovelty `(streaming) <streaming_SuperFluxNovelty.html>`__
SuperFluxPeaks `(standard) <std_SuperFluxPeaks.html>`__
SuperFluxPeaks `(streaming) <streaming_SuperFluxPeaks.html>`__
Vibrato `(standard) <std_Vibrato.html>`__
Vibrato `(streaming) <streaming_Vibrato.html>`__