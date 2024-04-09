:orphan:

Algorithm reference - StereoTrimmer (streaming mode)
====================================================

Inputs
------

 - ``signal`` (*stereosample*) - the input stereo signal

Outputs
-------

 - ``signal`` (*stereosample*) - the trimmed stereo signal

Parameters
----------

 - ``endTime`` (*real ∈ [0, ∞), default = 1e+06*) :
     the end time of the slice you want to extract [s]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the input audio signal [Hz]
 - ``startTime`` (*real ∈ [0, ∞), default = 0*) :
     the start time of the slice you want to extract [s]

Description
-----------

This algorithm extracts a segment of a stereo audio signal given its start and end times.
Giving "startTime" greater than "endTime" will raise an exception.


See also
--------

StereoTrimmer `(standard) <std_StereoTrimmer.html>`__