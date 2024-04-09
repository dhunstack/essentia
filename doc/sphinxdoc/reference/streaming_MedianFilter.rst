:orphan:

Algorithm reference - MedianFilter (streaming mode)
===================================================

Inputs
------

 - ``array`` (*vector_real*) - the input array (must be non-empty)

Outputs
-------

 - ``filteredArray`` (*vector_real*) - the median-filtered input array

Parameters
----------

 - ``kernelSize`` (*integer ∈ [1, ∞), default = 11*) :
     scalar giving the size of the median filter window. Must be odd

Description
-----------

This algorithm computes the median filtered version of the input signal giving the kernel size as detailed in [1].


References:
  [1] Median Filter -- from Wikipedia.org, 
  https://en.wikipedia.org/wiki/Median_filter


See also
--------

Median `(standard) <std_Median.html>`__
Median `(streaming) <streaming_Median.html>`__
MedianFilter `(standard) <std_MedianFilter.html>`__