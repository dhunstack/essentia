:orphan:

Algorithm reference - Chromaprinter (streaming mode)
====================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``fingerprint`` (*string*) - the chromaprint as a base64-encoded string

Parameters
----------

 - ``analysisTime`` (*real ∈ (0, ∞), default = 30*) :
     a chromaprint is computed each 'analysisTime' seconds. It is not recommended use a value lower than 30.
 - ``concatenate`` (*bool ∈ {true, false}, default = true*) :
     if true, chromaprints are concatenated and returned as a single string. Otherwise a chromaprint is returned each 'analysisTime' seconds.
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the input audio sampling rate [Hz]

Description
-----------

This algorithm computes the fingerprint of the input signal using Chromaprint algorithm. It is a wrapper of the Chromaprint library [1,2]. The chromaprints are returned as base64-encoded strings.


References:
  [1] Chromaprint -- from the Acousticid project,
  https://acoustid.org/chromaprint

  [2] https://github.com/acoustid/chromaprint


See also
--------

Chromaprinter `(standard) <std_Chromaprinter.html>`__