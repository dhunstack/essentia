:orphan:

Algorithm reference - RhythmDescriptors (streaming mode)
========================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``beats_position`` (*vector_real*) - See RhythmExtractor2013 algorithm documentation
 - ``confidence`` (*real*) - See RhythmExtractor2013 algorithm documentation
 - ``bpm`` (*real*) - See RhythmExtractor2013 algorithm documentation
 - ``bpm_estimates`` (*vector_real*) - See RhythmExtractor2013 algorithm documentation
 - ``bpm_intervals`` (*vector_real*) - See RhythmExtractor2013 algorithm documentation
 - ``first_peak_bpm`` (*real*) - See BpmHistogramDescriptors algorithm documentation
 - ``first_peak_spread`` (*real*) - See BpmHistogramDescriptors algorithm documentation
 - ``first_peak_weight`` (*real*) - See BpmHistogramDescriptors algorithm documentation
 - ``second_peak_bpm`` (*real*) - See BpmHistogramDescriptors algorithm documentation
 - ``second_peak_spread`` (*real*) - See BpmHistogramDescriptors algorithm documentation
 - ``second_peak_weight`` (*real*) - See BpmHistogramDescriptors algorithm documentation
 - ``histogram`` (*vector_real*) - bpm histogram [bpm]

Description
-----------

This algorithm computes rhythm features (bpm, beat positions, beat histogram peaks) for an audio signal. It combines RhythmExtractor2013 for beat tracking and BPM estimation with BpmHistogramDescriptors algorithms.


See also
--------

BpmHistogram `(standard) <std_BpmHistogram.html>`__
BpmHistogram `(streaming) <streaming_BpmHistogram.html>`__
BpmHistogramDescriptors `(standard) <std_BpmHistogramDescriptors.html>`__
BpmHistogramDescriptors `(streaming) <streaming_BpmHistogramDescriptors.html>`__
Extractor `(standard) <std_Extractor.html>`__
Histogram `(standard) <std_Histogram.html>`__
Histogram `(streaming) <streaming_Histogram.html>`__
RhythmDescriptors `(standard) <std_RhythmDescriptors.html>`__
RhythmExtractor `(standard) <std_RhythmExtractor.html>`__
RhythmExtractor `(streaming) <streaming_RhythmExtractor.html>`__
RhythmExtractor2013 `(standard) <std_RhythmExtractor2013.html>`__
RhythmExtractor2013 `(streaming) <streaming_RhythmExtractor2013.html>`__