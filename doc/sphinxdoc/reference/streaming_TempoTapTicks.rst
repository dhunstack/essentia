:orphan:

Algorithm reference - TempoTapTicks (streaming mode)
====================================================

Inputs
------

 - ``periods`` (*vector_real*) - tempo period candidates for the current frame, in frames
 - ``phases`` (*vector_real*) - tempo ticks phase candidates for the current frame, in frames

Outputs
-------

 - ``ticks`` (*vector_real*) - the list of resulting ticks [s]
 - ``matchingPeriods`` (*vector_real*) - list of matching periods [s]

Parameters
----------

 - ``frameHop`` (*integer ∈ (0, ∞), default = 512*) :
     number of feature frames separating two evaluations
 - ``hopSize`` (*integer ∈ (0, ∞), default = 256*) :
     number of audio samples per features
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     sampling rate of the audio signal [Hz]

Description
-----------

This algorithm builds the list of ticks from the period and phase candidates given by the TempoTap algorithm.

Quality: outdated (use TempoTapDegara instead)


References:
  [1] F. Gouyon, "A computational approach to rhythm description: Audio
  features for the computation of rhythm periodicity functions and their use
  in tempo induction and music content processing," UPF, Barcelona, Spain,
  2005.



See also
--------

TempoTap `(standard) <std_TempoTap.html>`__
TempoTap `(streaming) <streaming_TempoTap.html>`__
TempoTapDegara `(standard) <std_TempoTapDegara.html>`__
TempoTapDegara `(streaming) <streaming_TempoTapDegara.html>`__
TempoTapTicks `(standard) <std_TempoTapTicks.html>`__