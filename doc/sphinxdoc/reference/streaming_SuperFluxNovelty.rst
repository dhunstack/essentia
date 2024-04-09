:orphan:

Algorithm reference - SuperFluxNovelty (streaming mode)
=======================================================

Inputs
------

 - ``bands`` (*vector_real*) - the input bands spectrogram

Outputs
-------

 - ``differences`` (*real*) - SuperFlux novelty curve

Parameters
----------

 - ``binWidth`` (*integer ∈ [3, ∞), default = 3*) :
     filter width (number of frequency bins)
 - ``frameWidth`` (*integer ∈ (0, ∞), default = 2*) :
     differentiation offset (compute the difference with the N-th previous frame)

Description
-----------

Onset detection function for Superflux algorithm. See SuperFluxExtractor for more details.


See also
--------

Extractor `(standard) <std_Extractor.html>`__
Flux `(standard) <std_Flux.html>`__
Flux `(streaming) <streaming_Flux.html>`__
SuperFluxExtractor `(standard) <std_SuperFluxExtractor.html>`__
SuperFluxExtractor `(streaming) <streaming_SuperFluxExtractor.html>`__
SuperFluxNovelty `(standard) <std_SuperFluxNovelty.html>`__