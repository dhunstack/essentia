:orphan:

Algorithm reference - MaxFilter (standard mode)
===============================================

Inputs
------

 - ``signal`` (*vector_real*) - signal to be filtered

Outputs
-------

 - ``signal`` (*vector_real*) - filtered output

Parameters
----------

 - ``causal`` (*bool ∈ {true, false}, default = true*) :
     use casual filter (window is behind current element otherwise it is centered around)
 - ``width`` (*integer ∈ [2, ∞), default = 3*) :
     the window size, even size is auto-resized to the next odd value in the non-casual case

Description
-----------

This algorithm implements a maximum filter for 1d signal using van Herk/Gil-Werman (HGW) algorithm.


References:
  [1] Kutil, R., and Mraz, E., Short vector SIMD parallelization of maximum filter,
  Parallel Numerics 11: 70


See also
--------

MaxFilter `(streaming) <streaming_MaxFilter.html>`__