:orphan:

Algorithm reference - OnsetRate (standard mode)
===============================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``onsets`` (*vector_real*) - the positions of detected onsets [s]
 - ``onsetRate`` (*real*) - the number of onsets per second

Description
-----------

This algorithm computes the number of onsets per second and their position in time for an audio signal. Onset detection functions are computed using both high frequency content and complex-domain methods available in OnsetDetection algorithm. See OnsetDetection for more information.
Please note that due to a dependence on the Onsets algorithm, this algorithm is only valid for audio signals with a sampling rate of 44100Hz.
This algorithm throws an exception if the input signal is empty.


See also
--------

OnsetDetection `(standard) <std_OnsetDetection.html>`__
OnsetDetection `(streaming) <streaming_OnsetDetection.html>`__
OnsetRate `(streaming) <streaming_OnsetRate.html>`__
Onsets `(standard) <std_Onsets.html>`__
Onsets `(streaming) <streaming_Onsets.html>`__