:orphan:

Algorithm reference - MusicExtractor (standard mode)
====================================================

Inputs
------

 - ``filename`` (*string*) - the input audiofile

Outputs
-------

 - ``results`` (*pool*) - Analysis results pool with across-frames statistics
 - ``resultsFrames`` (*pool*) - Analysis results pool with computed frame values

Parameters
----------

 - ``analysisSampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the analysis sampling rate of the audio signal [Hz]
 - ``chromaprintCompute`` (*bool ∈ {true, false}, default = false*) :
     compute the Chromaprint
 - ``chromaprintDuration`` (*real ∈ [0, ∞), default = 0*) :
     the amount of time from the beginning used to compute the Chromaprint. 0 to use the full audio length [s]
 - ``endTime`` (*real ∈ [0, ∞), default = 1e+06*) :
     the end time of the slice you want to extract [s]
 - ``gfccStats`` (*vector_string, default = ["mean", "cov", "icov"]*) :
     the statistics to compute for GFCC features
 - ``loudnessFrameSize`` (*integer ∈ (0, ∞), default = 88200*) :
     the frame size for computing average loudness
 - ``loudnessHopSize`` (*integer ∈ (0, ∞), default = 44100*) :
     the hop size for computing average loudness
 - ``lowlevelFrameSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the frame size for computing low-level features
 - ``lowlevelHopSize`` (*integer ∈ (0, ∞), default = 1024*) :
     the hop size for computing low-level features
 - ``lowlevelSilentFrames`` (*string ∈ {drop, keep, noise}, default = noise*) :
     whether to [keep/drop/add noise to] silent frames for computing low-level features
 - ``lowlevelStats`` (*vector_string, default = ["mean", "var", "stdev", "median", "min", "max", "dmean", "dmean2", "dvar", "dvar2"]*) :
     the statistics to compute for low-level features
 - ``lowlevelWindowType`` (*string ∈ {hamming, hann, triangular, square, blackmanharris62, blackmanharris70, blackmanharris74, blackmanharris92}, default = blackmanharris62*) :
     the window type for computing low-level features
 - ``lowlevelZeroPadding`` (*integer ∈ [0, ∞), default = 0*) :
     zero padding factor for computing low-level features
 - ``mfccStats`` (*vector_string, default = ["mean", "cov", "icov"]*) :
     the statistics to compute for MFCC features
 - ``profile`` (*string*) :
     profile filename. If specified, default parameter values are overwritten by values in the profile yaml file. If not specified (empty string), use values configured by user like in other normal algorithms
 - ``requireMbid`` (*bool ∈ {true, false}, default = false*) :
     ignore audio files without musicbrainz recording id tag (throw exception)
 - ``rhythmMaxTempo`` (*integer ∈ [60, 250], default = 208*) :
     the fastest tempo to detect [bpm]
 - ``rhythmMethod`` (*string ∈ {multifeature, degara}, default = degara*) :
     the method used for beat tracking
 - ``rhythmMinTempo`` (*integer ∈ [40, 180], default = 40*) :
     the slowest tempo to detect [bpm]
 - ``rhythmStats`` (*vector_string, default = ["mean", "var", "stdev", "median", "min", "max", "dmean", "dmean2", "dvar", "dvar2"]*) :
     the statistics to compute for rhythm features
 - ``startTime`` (*real ∈ [0, ∞), default = 0*) :
     the start time of the slice you want to extract [s]
 - ``tonalFrameSize`` (*integer ∈ (0, ∞), default = 4096*) :
     the frame size for computing tonal features
 - ``tonalHopSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the hop size for computing tonal features
 - ``tonalSilentFrames`` (*string ∈ {drop, keep, noise}, default = noise*) :
     whether to [keep/drop/add noise to] silent frames for computing tonal features
 - ``tonalStats`` (*vector_string, default = ["mean", "var", "stdev", "median", "min", "max", "dmean", "dmean2", "dvar", "dvar2"]*) :
     the statistics to compute for tonal features
 - ``tonalWindowType`` (*string ∈ {hamming, hann, triangular, square, blackmanharris62, blackmanharris70, blackmanharris74, blackmanharris92}, default = blackmanharris62*) :
     the window type for computing tonal features
 - ``tonalZeroPadding`` (*integer ∈ [0, ∞), default = 0*) :
     zero padding factor for computing tonal features

Description
-----------

This algorithm is a wrapper for Music Extractor. See documentation for '`essentia_streaming_extractor_music <../streaming_extractor_music.html>`__'.


See also
--------

Extractor `(standard) <std_Extractor.html>`__