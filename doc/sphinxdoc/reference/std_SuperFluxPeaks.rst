:orphan:

Algorithm reference - SuperFluxPeaks (standard mode)
====================================================

Inputs
------

 - ``novelty`` (*vector_real*) - the input onset detection function

Outputs
-------

 - ``peaks`` (*vector_real*) - detected peaks' instants [s]

Parameters
----------

 - ``combine`` (*real ∈ (0, ∞), default = 30*) :
     time threshold for double onsets detections (ms)
 - ``frameRate`` (*real ∈ (0, ∞), default = 172*) :
     frameRate
 - ``pre_avg`` (*real ∈ (0, ∞), default = 100*) :
     look back duration for moving average filter [ms]
 - ``pre_max`` (*real ∈ (0, ∞), default = 30*) :
     look back duration for moving maximum filter [ms]
 - ``ratioThreshold`` (*real ∈ [0, ∞), default = 16*) :
     ratio threshold for peak picking with respect to novelty_signal/novelty_average rate, use 0 to disable it (for low-energy onsets)
 - ``threshold`` (*real ∈ [0, ∞), default = 0.05*) :
     threshold for peak peaking with respect to the difference between novelty_signal and average_signal (for onsets in ambient noise)

Description
-----------

This algorithm detects peaks of an onset detection function computed by the SuperFluxNovelty algorithm. See SuperFluxExtractor for more details.


See also
--------

Extractor `(standard) <std_Extractor.html>`__
Flux `(standard) <std_Flux.html>`__
Flux `(streaming) <streaming_Flux.html>`__
SuperFluxExtractor `(standard) <std_SuperFluxExtractor.html>`__
SuperFluxExtractor `(streaming) <streaming_SuperFluxExtractor.html>`__
SuperFluxNovelty `(standard) <std_SuperFluxNovelty.html>`__
SuperFluxNovelty `(streaming) <streaming_SuperFluxNovelty.html>`__
SuperFluxPeaks `(streaming) <streaming_SuperFluxPeaks.html>`__