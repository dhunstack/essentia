:orphan:

Algorithm reference - PeakDetection (streaming mode)
====================================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``positions`` (*vector_real*) - the positions of the peaks
 - ``amplitudes`` (*vector_real*) - the amplitudes of the peaks

Parameters
----------

 - ``interpolate`` (*bool ∈ {true, false}, default = true*) :
     boolean flag to enable interpolation
 - ``maxPeaks`` (*integer ∈ [1, ∞), default = 100*) :
     the maximum number of returned peaks
 - ``maxPosition`` (*real ∈ (0, ∞), default = 1*) :
     the maximum value of the range to evaluate
 - ``minPeakDistance`` (*real ∈ [0, ∞), default = 0*) :
     minimum distance between consecutive peaks (0 to bypass this feature)
 - ``minPosition`` (*real ∈ [0, ∞), default = 0*) :
     the minimum value of the range to evaluate
 - ``orderBy`` (*string ∈ {position, amplitude}, default = position*) :
     the ordering type of the output peaks (ascending by position or descending by value)
 - ``range`` (*real ∈ (0, ∞), default = 1*) :
     the input range
 - ``threshold`` (*real ∈ (-∞, ∞), default = -1e+06*) :
     peaks below this given threshold are not output

Description
-----------

This algorithm detects local maxima (peaks) in an array. The algorithm finds positive slopes and detects a peak when the slope changes sign and the peak is above the threshold.
It optionally interpolates using parabolic curve fitting.
When two consecutive peaks are closer than the `minPeakDistance` parameter, the smallest one is discarded. A value of 0 bypasses this feature.

Exceptions are thrown if parameter "minPosition" is greater than parameter "maxPosition", also if the size of the input array is less than 2 elements.


References:
  [1] Peak Detection,
  http://ccrma.stanford.edu/~jos/parshl/Peak_Detection_Steps_3.html


See also
--------

PeakDetection `(standard) <std_PeakDetection.html>`__