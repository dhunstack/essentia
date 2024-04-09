:orphan:

Algorithm reference - Histogram (streaming mode)
================================================

Inputs
------

 - ``array`` (*vector_real*) - the input array

Outputs
-------

 - ``histogram`` (*vector_real*) - the values in the equally-spaced bins
 - ``binEdges`` (*vector_real*) - the edges of the equally-spaced bins. Size is _histogram.size() + 1

Parameters
----------

 - ``maxValue`` (*real ∈ [0, Inf), default = 1*) :
     the max value of the histogram
 - ``minValue`` (*real ∈ [0, Inf), default = 0*) :
     the min value of the histogram
 - ``normalize`` (*string ∈ {none, unit_sum, unit_max}, default = none*) :
     the normalization setting.
 - ``numberBins`` (*integer ∈ (0, Inf), default = 10*) :
     the number of bins

Description
-----------

This algorithm computes a histogram. Values outside the range are ignored


See also
--------

Histogram `(standard) <std_Histogram.html>`__