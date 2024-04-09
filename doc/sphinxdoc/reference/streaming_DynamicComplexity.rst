:orphan:

Algorithm reference - DynamicComplexity (streaming mode)
========================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``dynamicComplexity`` (*real*) - the dynamic complexity coefficient
 - ``loudness`` (*real*) - an estimate of the loudness [dB]

Parameters
----------

 - ``frameSize`` (*real ∈ (0, ∞), default = 0.2*) :
     the frame size [s]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm computes the dynamic complexity defined as the average absolute deviation from the global loudness level estimate on the dB scale. It is related to the dynamic range and to the amount of fluctuation in loudness present in a recording. Silence at the beginning and at the end of a track are ignored in the computation in order not to deteriorate the results.


References:
  [1] S. Streich, Music complexity: a multi-faceted description of audio
  content, UPF, Barcelona, Spain, 2007.


See also
--------

DynamicComplexity `(standard) <std_DynamicComplexity.html>`__