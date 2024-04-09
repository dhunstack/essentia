:orphan:

Algorithm reference - StereoDemuxer (streaming mode)
====================================================

Inputs
------

 - ``audio`` (*stereosample*) - the input stereo signal

Outputs
-------

 - ``left`` (*real*) - the left channel of the audio signal
 - ``right`` (*real*) - the right channel of the audio signal

Description
-----------

This algorithm outputs left and right channel separately given a stereo signal. If the signal is monophonic, it outputs a zero signal on the right channel.


See also
--------

StereoDemuxer `(standard) <std_StereoDemuxer.html>`__