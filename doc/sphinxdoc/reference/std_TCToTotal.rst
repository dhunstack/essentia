:orphan:

Algorithm reference - TCToTotal (standard mode)
===============================================

Inputs
------

 - ``envelope`` (*vector_real*) - the envelope of the signal (its length must be greater than 1

Outputs
-------

 - ``TCToTotal`` (*real*) - the temporal centroid to total length ratio

Description
-----------

This algorithm calculates the ratio of the temporal centroid to the total length of a signal envelope. This ratio shows how the sound is 'balanced'. Its value is close to 0 if most of the energy lies at the beginning of the sound (e.g. decrescendo or impulsive sounds), close to 0.5 if the sound is symetric (e.g. 'delta unvarying' sounds), and close to 1 if most of the energy lies at the end of the sound (e.g. crescendo sounds).

Please note that the TCToTotal ratio will return 0.5 for a zero signal (a signal consisting of only zeros) as 0.5 is the middle point of the signal. TCToTotal is not defined for a signal of less than 2 elements.An exception is thrown if the given envelope's size is not larger than 1.

This algorithm is intended to be plugged after the Envelope algorithm


See also
--------

Envelope `(standard) <std_Envelope.html>`__
Envelope `(streaming) <streaming_Envelope.html>`__
TCToTotal `(streaming) <streaming_TCToTotal.html>`__