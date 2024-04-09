:orphan:

Algorithm reference - Slicer (streaming mode)
=============================================

Inputs
------

 - ``audio`` (*real*) - the input signal

Outputs
-------

 - ``frame`` (*vector_real*) - the frames of the sliced input signal

Parameters
----------

 - ``endTimes`` (*vector_real, default = []*) :
     the list of end times for the slices you want to extract
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``startTimes`` (*vector_real, default = []*) :
     the list of start times for the slices you want to extract
 - ``timeUnits`` (*string ∈ {samples, seconds}, default = seconds*) :
     the units of time of the start and end times

Description
-----------

This algorithm splits an audio signal into segments given their start and end times.

The parameters, "startTimes" and "endTimes" must be coherent. If these parameters differ in size, an exception is thrown. If a particular startTime is larger than its corresponding endTime, an exception is thrown.


See also
--------

Slicer `(standard) <std_Slicer.html>`__