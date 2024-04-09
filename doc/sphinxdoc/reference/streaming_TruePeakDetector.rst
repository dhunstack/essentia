:orphan:

Algorithm reference - TruePeakDetector (streaming mode)
=======================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input audio signal

Outputs
-------

 - ``output`` (*vector_real*) - the processed signal
 - ``peakLocations`` (*vector_real*) - the peak locations in the ouput signal

Parameters
----------

 - ``blockDC`` (*bool ∈ {true, false}, default = false*) :
     flag to activate the optional DC blocker
 - ``emphasise`` (*bool ∈ {true, false}, default = false*) :
     flag to activate the optional emphasis filter
 - ``oversamplingFactor`` (*integer ∈ [1, ∞), default = 4*) :
     times the signal is oversapled
 - ``quality`` (*integer ∈ [0, 4], default = 1*) :
     type of interpolation applied (see libresmple)
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``threshold`` (*real ∈ (-∞, ∞), default = -0.0002*) :
     threshold to detect peaks [dB]
 - ``version`` (*integer ∈ {2, 4}, default = 4*) :
     algorithm version

Description
-----------

This algorithm implements a “true-peak” level meter for clipping detection. According to the ITU-R recommendations, “true-peak” values overcoming the full-scale range are potential sources of “clipping in subsequent processes, such as within particular D/A converters or during sample-rate conversion”.
The ITU-R BS.1770-4[1] (by default) and the ITU-R BS.1770-2[2] signal-flows can be used. Go to the references for information about the differences.
Only the peaks (if any) exceeding the configurable amplitude threshold are returned.
Note: the parameters 'blockDC' and 'emphasise' work only when 'version' is set to 2.

References:
  [1] Series, B. S. (2011). Recommendation  ITU-R  BS.1770-4. Algorithms to measure audio programme loudness and true-peak audio level,
  https://www.itu.int/dms_pubrec/itu-r/rec/bs/R-REC-BS.1770-4-201510-I!!PDF-E.pdf
  [2] Series, B. S. (2011). Recommendation  ITU-R  BS.1770-2. Algorithms to measure audio programme loudness and true-peak audio level,
  https://www.itu.int/dms_pubrec/itu-r/rec/bs/R-REC-BS.1770-2-201103-S!!PDF-E.pdf



See also
--------

TruePeakDetector `(standard) <std_TruePeakDetector.html>`__