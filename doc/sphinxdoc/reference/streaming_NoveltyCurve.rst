:orphan:

Algorithm reference - NoveltyCurve (streaming mode)
===================================================

Inputs
------

 - ``frequencyBands`` (*vector_real*) - the frequency bands

Outputs
-------

 - ``novelty`` (*real*) - the novelty curve as a single vector

Parameters
----------

 - ``frameRate`` (*real ∈ [1, ∞), default = 344.531*) :
     the sampling rate of the input audio
 - ``normalize`` (*bool ∈ {true, false}, default = false*) :
     whether to normalize each band's energy
 - ``weightCurve`` (*vector_real, default = []*) :
     vector containing the weights for each frequency band. Only if weightCurveType==supplied
 - ``weightCurveType`` (*string ∈ {flat, triangle, inverse_triangle, parabola, inverse_parabola, linear, quadratic, inverse_quadratic, supplied}, default = inverse_quadratic*) :
     the type of weighting to be used for the bands novelty

Description
-----------

This algorithm computes the "novelty curve" (Grosche & Müller, 2009) onset detection function. The algorithm expects as an input a frame-wise sequence of frequency-bands energies or spectrum magnitudes as originally proposed in [1] (see FrequencyBands and Spectrum algorithms). Novelty in each band (or frequency bin) is computed as a derivative between log-compressed energy (magnitude) values in consequent frames. The overall novelty value is then computed as a weighted sum that can be configured using 'weightCurve' parameter. The resulting novelty curve can be used for beat tracking and onset detection (see BpmHistogram and Onsets).

Notes:

- Recommended frame/hop size for spectrum computation is 2048/1024 samples (44.1 kHz sampling rate) [2].
- Log compression is applied with C=1000 as in [1].
- Frequency bands energies (see FrequencyBands) as well as bin magnitudes for the whole spectrum can be used as an input. The implementation for the original algorithm [2] works with spectrum bin magnitudes for which novelty functions are computed separately and are then summarized into bands.
- In the case if 'weightCurve' is set to 'hybrid' a complex combination of flat, quadratic, linear and inverse quadratic weight curves is used. It was reported to improve performance of beat tracking in some informal in-house experiments (Note: this information is probably outdated).


References:

1. Grosche, P. & Müller, M. (2009). A mid-level representation for capturing dominant tempo and pulse information in music recordings. International Society for Music Information Retrieval Conference (ISMIR 2009).

2. Tempogram Toolbox (Matlab implementation), http://resources.mpi%2Dinf.mpg.de/MIR/tempogramtoolbox




See also
--------

BpmHistogram `(standard) <std_BpmHistogram.html>`__
BpmHistogram `(streaming) <streaming_BpmHistogram.html>`__
FrequencyBands `(standard) <std_FrequencyBands.html>`__
FrequencyBands `(streaming) <streaming_FrequencyBands.html>`__
Histogram `(standard) <std_Histogram.html>`__
Histogram `(streaming) <streaming_Histogram.html>`__
NoveltyCurve `(standard) <std_NoveltyCurve.html>`__
Onsets `(standard) <std_Onsets.html>`__
Onsets `(streaming) <streaming_Onsets.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__