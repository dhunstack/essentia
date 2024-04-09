:orphan:

Algorithm reference - AudioWriter (streaming mode)
==================================================

Inputs
------

 - ``audio`` (*stereosample*) - the input audio

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

This algorithm encodes an input stereo signal into a stereo audio file.

The algorithm uses the FFmpeg library. Supported formats are wav, aiff, mp3, flac and ogg. The default FFmpeg encoders are used for each format.

An exception is thrown when other extensions are given. Note that to encode in mp3 format it is mandatory that FFmpeg was configured with mp3 enabled.


See also
--------

AudioWriter `(standard) <std_AudioWriter.html>`__