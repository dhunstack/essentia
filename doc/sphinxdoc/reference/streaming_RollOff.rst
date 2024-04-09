:orphan:

Algorithm reference - RollOff (streaming mode)
==============================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input audio spectrum (must have more than one elements)

Outputs
-------

 - ``rollOff`` (*real*) - the roll-off frequency [Hz]

Parameters
----------

 - ``cutoff`` (*real ∈ (0, 1), default = 0.85*) :
     the ratio of total energy to attain before yielding the roll-off frequency
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal (used to normalize rollOff) [Hz]

Description
-----------

This algorithm computes the roll-off frequency of a spectrum. The roll-off frequency is defined as the frequency under which some percentage (cutoff) of the total energy of the spectrum is contained. The roll-off frequency can be used to distinguish between harmonic (below roll-off) and noisy sounds (above roll-off).

An exception is thrown if the input audio spectrum is smaller than 2.

References:
  [1] G. Peeters, "A large set of audio features for sound description
  (similarity and classification) in the CUIDADO project," CUIDADO I.S.T.
  Project Report, 2004


See also
--------

RollOff `(standard) <std_RollOff.html>`__