:orphan:

Algorithm reference - MonoWriter (standard mode)
================================================

Inputs
------

 - ``audio`` (*vector_real*) - the audio signal

Parameters
----------

 - ``bitrate`` (*integer ∈ {32, 40, 48, 56, 64, 80, 96, 112, 128, 144, 160, 192, 224, 256, 320}, default = 192*) :
     the audio bit rate for compressed formats [kbps]
 - ``filename`` (*string*) :
     the name of the encoded file
 - ``format`` (*string ∈ {wav, aiff, mp3, ogg, flac}, default = wav*) :
     the audio output format
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the audio sampling rate [Hz]

Description
-----------

This algorithm writes a mono audio stream to a file.

The algorithm uses FFmpeg. Supported formats are wav, aiff, mp3, flac and ogg. An exception is thrown when other extensions are given. The default FFmpeg encoders are used for each format. Note that to encode in mp3 format it is mandatory that FFmpeg was configured with mp3 enabled.

If the file specified by filename could not be opened or the header of the file omits channel's information, an exception is thrown.


See also
--------

MonoWriter `(streaming) <streaming_MonoWriter.html>`__