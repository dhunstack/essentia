Audio loaders and metadata
==========================

Loading audio
-------------

Essentia relies on the `FFmpeg <https://en.wikipedia.org/wiki/FFmpeg>`__
library for audio input/output, and therefore there are many
possibilities when it comes to loading audio. See
`AudioLoader <https://essentia.upf.edu/reference/std_AudioLoader.html>`__,
`MonoLoader <https://essentia.upf.edu/reference/std_MonoLoader.html>`__,
and
`EasyLoader <https://essentia.upf.edu/reference/std_EasyLoader.html>`__
algorithms for more details.

Below are some examples of their usage loading audio files:

.. code:: ipython3

    import essentia.standard as es
    
    filename = 'audio/dubstep.flac'

.. code:: ipython3

    # Load the whole file in mono
    audio = es.MonoLoader(filename=filename)()
    print(audio.shape)


.. parsed-literal::

    (302085,)


.. code:: ipython3

    # Load the whole file in stereo
    audio, _, _, _, _, _ = es.AudioLoader(filename=filename)()
    print(audio.shape)


.. parsed-literal::

    (302085, 2)


.. code:: ipython3

    # Load and resample to 16000 Hz
    audio = es.MonoLoader(filename=filename, sampleRate=16000)()
    print(audio.shape)


.. parsed-literal::

    (109600,)


.. code:: ipython3

    # Load only a 10-seconds segment in mono, starting from the 2nd minute
    audio = es.EasyLoader(filename='audio/Vivaldi_Sonata_5_II_Allegro.flac', 
                          sampleRate=44100, startTime=60, endTime=70)()
    print(audio.shape)


.. parsed-literal::

    (441000,)


Reading file metadata
---------------------

Essentia also supports loading the metadata embedded in audio files
(such as `ID3 <https://en.wikipedia.org/wiki/ID3>`__) using
`MetadataReader <https://essentia.upf.edu/documentation/reference/std_MetadataReader.html>`__.

.. code:: ipython3

    # Replace with your own file
    es.MetadataReader(filename='audio/Mr. Bungle - Stubb (a Dub).mp3')()




.. parsed-literal::

    ('Stubb (a Dub)',
     'Mr. Bungle',
     'Mr. Bungle',
     '',
     'Avantgarde Metal',
     '6/10',
     '1991-08-13',
     <essentia.common.Pool at 0x7fcfd08aa390>,
     439,
     160,
     44100,
     2)



The output contains standard metadata fields (track name, artist, name,
album name, track number, etc.) as well as bitrate and samplerate. It
also includes an Essentia pool object containing all other fields found:

.. code:: ipython3

    metadata_pool = es.MetadataReader(filename='audio/Mr. Bungle - Stubb (a Dub).mp3')()[7]
    for d in metadata_pool.descriptorNames():
        print(d, metadata_pool[d])


.. parsed-literal::

    metadata.tags.album ['Mr. Bungle']
    metadata.tags.albumartist ['Mr. Bungle']
    metadata.tags.albumartistsort ['Mr. Bungle']
    metadata.tags.artist ['Mr. Bungle']
    metadata.tags.artists ['Mr. Bungle']
    metadata.tags.artistsort ['Mr. Bungle']
    metadata.tags.asin ['B000002LPW']
    metadata.tags.barcode ['075992664028']
    metadata.tags.catalognumber ['9 26640-2']
    metadata.tags.composer ['Mr. Bungle']
    metadata.tags.date ['1991-08-13']
    metadata.tags.discnumber ['1/1']
    metadata.tags.genre ['Avantgarde Metal']
    metadata.tags.isrc ['USWB19903997']
    metadata.tags.label ['Warner Bros. Records']
    metadata.tags.media ['CD']
    metadata.tags.musicbrainz album release country ['US']
    metadata.tags.musicbrainz album status ['official']
    metadata.tags.musicbrainz album type ['album']
    metadata.tags.musicbrainz release track id ['64236797-30a7-3dab-8398-eea09e92218d']
    metadata.tags.musicbrainz_albumartistid ['277e21a9-2d64-452d-96c4-2d23a7af5891']
    metadata.tags.musicbrainz_albumid ['6e2a6ac8-e3b0-4992-b107-3968f2ddcad6']
    metadata.tags.musicbrainz_artistid ['277e21a9-2d64-452d-96c4-2d23a7af5891']
    metadata.tags.musicbrainz_releasegroupid ['8033ef41-a96d-30e0-8e98-f2e17f59db5f']
    metadata.tags.musicbrainz_trackid ['af930c80-3c0b-4d60-9b70-44a8a7b1cc32']
    metadata.tags.originaldate ['1991']
    metadata.tags.originalyear ['1991']
    metadata.tags.script ['Latn']
    metadata.tags.title ['Stubb (a Dub)']
    metadata.tags.tracknumber ['6/10']

