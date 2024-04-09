:orphan:

Algorithm reference - BpmHistogramDescriptors (standard mode)
=============================================================

Inputs
------

 - ``bpmIntervals`` (*vector_real*) - the list of bpm intervals [s]

Outputs
-------

 - ``firstPeakBPM`` (*real*) - value for the highest peak [bpm]
 - ``firstPeakWeight`` (*real*) - weight of the highest peak
 - ``firstPeakSpread`` (*real*) - spread of the highest peak
 - ``secondPeakBPM`` (*real*) - value for the second highest peak [bpm]
 - ``secondPeakWeight`` (*real*) - weight of the second highest peak
 - ``secondPeakSpread`` (*real*) - spread of the second highest peak
 - ``histogram`` (*vector_real*) - bpm histogram [bpm]

Description
-----------

This algorithm computes beats per minute histogram and its statistics for the highest and second highest peak.
Note: histogram vector contains occurance frequency for each bpm value, 0-th element corresponds to 0 bpm value.


See also
--------

BpmHistogramDescriptors `(streaming) <streaming_BpmHistogramDescriptors.html>`__