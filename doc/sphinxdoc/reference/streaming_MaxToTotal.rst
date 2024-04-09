:orphan:

Algorithm reference - MaxToTotal (streaming mode)
=================================================

Inputs
------

 - ``envelope`` (*real*) - the envelope of the signal

Outputs
-------

 - ``maxToTotal`` (*real*) - the maximum amplitude position to total length ratio

Description
-----------

This algorithm computes the ratio between the index of the maximum value of the envelope of a signal and the total length of the envelope. This ratio shows how much the maximum amplitude is off-center. Its value is close to 0 if the maximum is close to the beginning (e.g. Decrescendo or Impulsive sounds), close to 0.5 if it is close to the middle (e.g. Delta sounds) and close to 1 if it is close to the end of the sound (e.g. Crescendo sounds). This algorithm is intended to be fed by the output of the Envelope algorithm

MaxToTotal will throw an exception if the input envelope is empty.


See also
--------

Envelope `(standard) <std_Envelope.html>`__
Envelope `(streaming) <streaming_Envelope.html>`__
MaxToTotal `(standard) <std_MaxToTotal.html>`__