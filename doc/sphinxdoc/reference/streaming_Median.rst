:orphan:

Algorithm reference - Median (streaming mode)
=============================================

Inputs
------

 - ``array`` (*vector_real*) - the input array (must be non-empty)

Outputs
-------

 - ``median`` (*real*) - the median of the input array

Description
-----------

This algorithm computes the median of an array. When there is an odd number of numbers, the median is simply the middle number. For example, the median of 2, 4, and 7 is 4. When there is an even number of numbers, the median is the mean of the two middle numbers. Thus, the median of the numbers 2, 4, 7, 12 is (4+7)/2 = 5.5. See [1] for more info.


References:
  [1] Statistical Median -- from Wolfram MathWorld,
  http://mathworld.wolfram.com/StatisticalMedian.html


See also
--------

Median `(standard) <std_Median.html>`__