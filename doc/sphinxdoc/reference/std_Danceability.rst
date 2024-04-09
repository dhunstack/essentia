:orphan:

Algorithm reference - Danceability (standard mode)
==================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``danceability`` (*real*) - the danceability value. Normal values range from 0 to ~3. The higher, the more danceable.
 - ``dfa`` (*vector_real*) - the DFA exponent vector for considered segment length (tau) values

Parameters
----------

 - ``maxTau`` (*real ∈ (0, ∞), default = 8800*) :
     maximum segment length to consider [ms]
 - ``minTau`` (*real ∈ (0, ∞), default = 310*) :
     minimum segment length to consider [ms]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``tauMultiplier`` (*real ∈ (1, ∞), default = 1.1*) :
     multiplier to increment from min to max tau

Description
-----------

This algorithm estimates danceability of a given audio signal. The algorithm is derived from Detrended Fluctuation Analysis (DFA) described in [1]. The parameters minTau and maxTau are used to define the range of time over which DFA will be performed. The output of this algorithm is the danceability of the audio signal. These values usually range from 0 to 3 (higher values meaning more danceable).

Exception is thrown when minTau is greater than maxTau.


References:
  [1] Streich, S. and Herrera, P., Detrended Fluctuation Analysis of Music
  Signals: Danceability Estimation and further Semantic Characterization,
  Proceedings of the AES 118th Convention, Barcelona, Spain, 2005


See also
--------

Danceability `(streaming) <streaming_Danceability.html>`__