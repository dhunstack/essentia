:orphan:

Algorithm reference - TuningFrequency (streaming mode)
======================================================

Inputs
------

 - ``frequencies`` (*vector_real*) - the frequencies of the spectral peaks [Hz]
 - ``magnitudes`` (*vector_real*) - the magnitudes of the spectral peaks

Outputs
-------

 - ``tuningFrequency`` (*real*) - the tuning frequency [Hz]
 - ``tuningCents`` (*real*) - the deviation from 440 Hz (between -35 to 65 cents)

Parameters
----------

 - ``resolution`` (*real ∈ (0, ∞), default = 1*) :
     resolution in cents (logarithmic scale, 100 cents = 1 semitone) for tuning frequency determination

Description
-----------

This algorithm estimates the tuning frequency give a sequence/set of spectral peaks. The result is the tuning frequency in Hz, and its distance from 440Hz in cents. This version is slightly adapted from the original algorithm [1], but gives the same results.

Input vectors should have the same size, otherwise an exception is thrown. This algorithm should be given the outputs of the spectral peaks algorithm.

Application: Western vs non-western music classification, key estimation, HPCP computation, tonal similarity.

References:
  [1] E. Gómez, "Key estimation from polyphonic audio," in Music Information
  Retrieval Evaluation Exchange (MIREX’05), 2005.


See also
--------

HPCP `(standard) <std_HPCP.html>`__
HPCP `(streaming) <streaming_HPCP.html>`__
Key `(standard) <std_Key.html>`__
Key `(streaming) <streaming_Key.html>`__
TuningFrequency `(standard) <std_TuningFrequency.html>`__