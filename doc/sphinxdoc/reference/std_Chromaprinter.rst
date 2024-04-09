:orphan:

Algorithm reference - Chromaprinter (standard mode)
===================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input audio signal

Outputs
-------

 - ``fingerprint`` (*string*) - the chromaprint as a base64-encoded string

Parameters
----------

 - ``maxLength`` (*real ∈ [0, ∞), default = 0*) :
     use the first 'maxLength' seconds to compute the chromaprint. 0 to use the full audio length [s]
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

Chromaprinter `(streaming) <streaming_Chromaprinter.html>`__