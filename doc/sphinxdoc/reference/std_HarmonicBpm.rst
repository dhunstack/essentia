:orphan:

Algorithm reference - HarmonicBpm (standard mode)
=================================================

Inputs
------

 - ``bpms`` (*vector_real*) - list of bpm candidates

Outputs
-------

 - ``harmonicBpms`` (*vector_real*) - a list of bpms which are harmonically related to the bpm parameter 

Parameters
----------

 - ``bpm`` (*real ∈ [1, ∞), default = 60*) :
     the bpm used to find its harmonics
 - ``threshold`` (*real ∈ [1, ∞), default = 20*) :
     bpm threshold below which greatest common divisors are discarded
 - ``tolerance`` (*real ∈ [0, ∞), default = 5*) :
     percentage tolerance to consider two bpms are equal or equal to a harmonic

Description
-----------

This algorithm extracts bpms that are harmonically related to the tempo given by the 'bpm' parameter.
The algorithm assumes a certain bpm is harmonically related to parameter bpm, when the greatest common divisor between both bpms is greater than threshold.
The 'tolerance' parameter is needed in order to consider if two bpms are related. For instance, 120, 122 and 236 may be related or not depending on how much tolerance is given


References:
  [1] Greatest common divisor - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Greatest_common_divisor


See also
--------

HarmonicBpm `(streaming) <streaming_HarmonicBpm.html>`__