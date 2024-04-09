:orphan:

Algorithm reference - TempoTap (streaming mode)
===============================================

Inputs
------

 - ``featuresFrame`` (*vector_real*) - input temporal features of a frame

Outputs
-------

 - ``periods`` (*vector_real*) - list of tempo estimates found for each input feature, in frames
 - ``phases`` (*vector_real*) - list of initial phase candidates found for each input feature, in frames

Parameters
----------

 - ``frameHop`` (*integer ∈ (0, ∞), default = 1024*) :
     number of feature frames separating two evaluations
 - ``frameSize`` (*integer ∈ (0, ∞), default = 256*) :
     number of audio samples in a frame
 - ``maxTempo`` (*integer ∈ [60, 250], default = 208*) :
     fastest tempo allowed to be detected [bpm]
 - ``minTempo`` (*integer ∈ [40, 180], default = 40*) :
     slowest tempo allowed to be detected [bpm]
 - ``numberFrames`` (*integer ∈ (0, ∞), default = 1024*) :
     number of feature frames to buffer on
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``tempoHints`` (*vector_real, default = []*) :
     optional list of initial beat locations, to favor the detection of pre-determined tempo period and beats alignment [s]

Description
-----------

This algorithm estimates the periods and phases of a periodic signal, represented by a sequence of values of any number of detection functions, such as energy bands, onsets locations, etc. It requires to be sequentially run on a vector of such values ("featuresFrame") for each particular audio frame in order to get estimations related to that frames. The estimations are done for each detection function separately, utilizing the latest "frameHop" frames, including the present one, to compute autocorrelation. Empty estimations will be returned until enough frames are accumulated in the algorithm's buffer.
The algorithm uses elements of the following beat-tracking methods:

 - BeatIt, elaborated by Fabien Gouyon and Simon Dixon (input features) [1]
 - Multi-comb filter with Rayleigh weighting, Mathew Davies [2]


Parameter "maxTempo" should be 20bpm larger than "minTempo", otherwise an exception is thrown. The same applies for parameter "frameHop", which should not be greater than numberFrames. If the supplied "tempoHints" did not match any realistic bpm value, an exeception is thrown.

This algorithm is thought to provide the input for TempoTapTicks algorithm. The "featureFrame" vectors can be formed by Multiplexer algorithm in the case of combining different features.

Quality: outdated (use TempoTapDegara instead)


References:
  [1] F. Gouyon, "A computational approach to rhythm description: Audio
  features for the computation of rhythm periodicity functions and their use
  in tempo induction and music content processing," UPF, Barcelona, Spain,
  2005.

  [2] M. Davies and M. Plumbley, "Causal tempo tracking of audio," in
  International Symposium on Music Information Retrieval (ISMIR'04), 2004.


See also
--------

Multiplexer `(standard) <std_Multiplexer.html>`__
Multiplexer `(streaming) <streaming_Multiplexer.html>`__
TempoTap `(standard) <std_TempoTap.html>`__
TempoTapDegara `(standard) <std_TempoTapDegara.html>`__
TempoTapDegara `(streaming) <streaming_TempoTapDegara.html>`__
TempoTapTicks `(standard) <std_TempoTapTicks.html>`__
TempoTapTicks `(streaming) <streaming_TempoTapTicks.html>`__