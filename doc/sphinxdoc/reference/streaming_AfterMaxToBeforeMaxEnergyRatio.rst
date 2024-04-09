:orphan:

Algorithm reference - AfterMaxToBeforeMaxEnergyRatio (streaming mode)
=====================================================================

Inputs
------

 - ``pitch`` (*real*) - the array of pitch values [Hz]

Outputs
-------

 - ``afterMaxToBeforeMaxEnergyRatio`` (*real*) - the ratio between the pitch energy after the pitch maximum to the pitch energy                   before the pitch maximum

Description
-----------

This algorithm computes the ratio between the pitch energy after the pitch maximum and the pitch energy before the pitch maximum. Sounds having an monotonically ascending pitch or one unique pitch will show a value of (0,1], while sounds having a monotonically descending pitch will show a value of [1,∞). In case there is no energy before the max pitch, the algorithm will return the energy after the maximum pitch.

The algorithm throws exception when input is either empty or contains only zeros.


See also
--------

AfterMaxToBeforeMaxEnergyRatio `(standard) <std_AfterMaxToBeforeMaxEnergyRatio.html>`__