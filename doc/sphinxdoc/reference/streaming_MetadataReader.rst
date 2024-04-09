:orphan:

Algorithm reference - MetadataReader (streaming mode)
=====================================================

Outputs
-------

 - ``title`` (*string*) - the title of the track
 - ``artist`` (*string*) - the artist of the track
 - ``album`` (*string*) - the album on which this track appears
 - ``comment`` (*string*) - the comment field stored in the tags
 - ``genre`` (*string*) - the genre as stored in the tags
 - ``tracknumber`` (*string*) - the track number
 - ``date`` (*string*) - the date of publication
 - ``duration`` (*integer*) - the duration of the track, in seconds
 - ``bitrate`` (*integer*) - the bitrate of the track [kb/s]
 - ``sampleRate`` (*integer*) - the sample rate [Hz]
 - ``channels`` (*integer*) - the number of channels

Parameters
----------

 - ``failOnError`` (*bool ∈ {true, false}, default = false*) :
     if true, the algorithm throws an exception when encountering an error (e.g. trying to open an unsupported file format), otherwise the algorithm leaves all fields blank
 - ``filename`` (*string, default = ""*) :
     the name of the file from which to read the tags

Description
-----------

This algorithm loads the metadata tags from an audio file as well as outputs its audio properties. Supported audio file types are:

  - mp3
  - flac
  - ogg

An exception is thrown if unsupported filetype is given or if the file does not exist.
Please observe that the .wav format is not supported. Also note that this algorithm incorrectly calculates the number of channels for a file in mp3 format only for versions less than 1.5 of taglib in Linux and less or equal to 1.5 in Mac OS X
If using this algorithm on Windows, you must ensure that the filename is encoded as UTF-8.
This algorithm also contains some heuristic to try to deal with encoding errors in the tags and tries to do the appropriate conversion if a problem was found (mostly twice latin1->utf8 conversion).

MetadataReader reads all metadata tags found in audio and stores them in the pool tagPool. Standard metadata tags found in audio files include strings mentioned in [1,2]. Tag strings are case-sensitive and they are converted to lower-case when stored to the pool. It is possible to filter these tags by using 'filterMetadataTags' parameter. This parameter should specify a white-list of tag strings as they are found in the audio file (e.g., "ARTIST").


References:
  [1] https://taglib.github.io/api/classTagLib_1_1PropertyMap.html#details

  [2] https://picard.musicbrainz.org/docs/mappings/


See also
--------

MetadataReader `(standard) <std_MetadataReader.html>`__