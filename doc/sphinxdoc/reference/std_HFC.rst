:orphan:

Algorithm reference - HFC (standard mode)
=========================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input audio spectrum

Outputs
-------

 - ``hfc`` (*real*) - the high-frequency coefficient

Parameters
----------

 - ``sampleRate`` (*real ∈ (0, ∞], default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``type`` (*string ∈ {Masri, Jensen, Brossier}, default = Masri*) :
     the type of HFC coefficient to be computed

Description
-----------

This algorithm computes the High Frequency Content of a spectrum. It can be computed according to the following techniques:

  - 'Masri' (default) which does: sum \|X(n)\|^2*k,
  - 'Jensen' which does: sum \|X(n)\|*k^2
  - 'Brossier' which does: sum \|X(n)\|*k


Exception is thrown for empty input spectra.


References:
  [1] P. Masri and A. Bateman, “Improved modelling of attack transients in
  music analysis-resynthesis,” in Proceedings of the International
  Computer Music Conference, 1996, pp. 100–103.

  [2] K. Jensen and T. H. Andersen, “Beat estimation on the beat,” in
  Applications of Signal Processing to Audio and Acoustics, 2003 IEEE
  Workshop on., 2003, pp. 87–90.

  [3] High frequency content measure - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/High_Frequency_Content_measure



See also
--------

HFC `(streaming) <streaming_HFC.html>`__