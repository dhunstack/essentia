:orphan:

Algorithm reference - AudioLoader (streaming mode)
==================================================

Outputs
-------

 - ``audio`` (*stereosample*) - the input audio signal
 - ``sampleRate`` (*real*) - the sampling rate of the audio signal [Hz]
 - ``numberChannels`` (*integer*) - the number of channels
 - ``md5`` (*string*) - the MD5 checksum of raw undecoded audio payload
 - ``bit_rate`` (*integer*) - the bit rate of the input audio, as reported by the decoder codec
 - ``codec`` (*string*) - the codec that is used to decode the input audio

Parameters
----------

 - ``audioStream`` (*integer ∈ [0, ∞), default = 0*) :
     audio stream index to be loaded. Other streams are not taken into account (e.g. if stream 0 is video and 1 is audio use index 0 to access it.)
 - ``computeMD5`` (*bool ∈ {true, false}, default = false*) :
     compute the MD5 checksum
 - ``filename`` (*string*) :
     the name of the file from which to read

Description
-----------

This algorithm loads the single audio stream contained in a given audio or video file. Supported formats are all those supported by the FFmpeg library including wav, aiff, flac, ogg and mp3.

This algorithm will throw an exception if it was not properly configured which is normally due to not specifying a valid filename. Invalid names comprise those with extensions different than the supported  formats and non existent files. If using this algorithm on Windows, you must ensure that the filename is encoded as UTF-8

Note: ogg files are decoded in reverse phase, due to be using ffmpeg library.


References:
  [1] WAV - Wikipedia, the free encyclopedia,
      http://en.wikipedia.org/wiki/Wav
  [2] Audio Interchange File Format - Wikipedia, the free encyclopedia,
      http://en.wikipedia.org/wiki/Aiff
  [3] Free Lossless Audio Codec - Wikipedia, the free encyclopedia,
      http://en.wikipedia.org/wiki/Flac
  [4] Vorbis - Wikipedia, the free encyclopedia,
      http://en.wikipedia.org/wiki/Vorbis
  [5] MP3 - Wikipedia, the free encyclopedia,
      http://en.wikipedia.org/wiki/Mp3


See also
--------

AudioLoader `(standard) <std_AudioLoader.html>`__