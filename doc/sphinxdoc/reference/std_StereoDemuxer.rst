:orphan:

Algorithm reference - StereoDemuxer (standard mode)
===================================================

Inputs
------

 - ``audio`` (*vector_stereosample*) - the audio signal

Outputs
-------

 - ``left`` (*vector_real*) - the left channel of the audio signal
 - ``right`` (*vector_real*) - the right channel of the audio signal

Description
-----------

This algorithm outputs left and right channel separately given a stereo signal. If the signal is monophonic, it outputs a zero signal on the right channel.


See also
--------

StereoDemuxer `(streaming) <streaming_StereoDemuxer.html>`__