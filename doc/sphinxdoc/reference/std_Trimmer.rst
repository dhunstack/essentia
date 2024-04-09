:orphan:

Algorithm reference - Trimmer (standard mode)
=============================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``signal`` (*vector_real*) - the trimmed signal

Parameters
----------

 - ``checkRange`` (*bool ∈ {true, false}, default = false*) :
     check whether the specified time range for a slice fits the size of input signal (throw exception if not)
 - ``endTime`` (*real ∈ [0, ∞), default = 1e+06*) :
     the end time of the slice you want to extract [s]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the input audio signal [Hz]
 - ``startTime`` (*real ∈ [0, ∞), default = 0*) :
     the start time of the slice you want to extract [s]

Description
-----------

This algorithm extracts a segment of an audio signal given its start and end times.
Giving "startTime" greater than "endTime" will raise an exception.


See also
--------

Trimmer `(streaming) <streaming_Trimmer.html>`__