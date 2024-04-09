:orphan:

Algorithm reference - Panning (streaming mode)
==============================================

Inputs
------

 - ``spectrumLeft`` (*vector_real*) - left channel's spectrum
 - ``spectrumRight`` (*vector_real*) - right channel's spectrum

Outputs
-------

 - ``panningCoeffs`` (*matrix_real*) - parameters that define the panning curve at each frame

Parameters
----------

 - ``averageFrames`` (*integer ∈ [0, ∞), default = 43*) :
     number of frames to take into account for averaging
 - ``numBands`` (*integer ∈ [1, ∞), default = 1*) :
     number of mel bands
 - ``numCoeffs`` (*integer ∈ (0, ∞), default = 20*) :
     number of coefficients used to define the panning curve at each frame
 - ``panningBins`` (*integer ∈ (1, ∞), default = 512*) :
     size of panorama histogram (in bins)
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     audio sampling rate [Hz]
 - ``warpedPanorama`` (*bool ∈ {false, true}, default = true*) :
     if true, warped panorama is applied, having more resolution in the center area

Description
-----------

This algorithm characterizes panorama distribution by comparing spectra from the left and right channels. The panning coefficients are extracted by:

- determining the spatial location of frequency bins given left and right channel spectra;

- computing panorama histogram weighted by the energy of frequency bins, averaging it across frames and normalizing;

- converting the normalized histogram into panning coefficients (IFFT of the log-histogram).

The resulting coefficients will show peaks on the initial bins for left panned audio, and right panning will appear as peaks in the upper bins.

Since panning can vary very rapidly from one frame to the next, the coefficients can be averaged over a time window of several frames by specifying "averageFrames" parameter. If a single vector of panning coefficients for the whole audio input is required, "averageFrames" should correspond to the length of audio input. In standard mode, sequential runs of compute() method on each frame are required for averaging across frames.

Application: music classification, in particular genre classification [2].

Note: At present time, the original algorithm has not been tested in multi-band mode. That is, numBands must remain 1.

References:
  [1] E. Gómez, P. Herrera, P. Cano, J. Janer, J. Serrà, J. Bonada,
  S. El-Hajj, T. Aussenac, and G. Holmberg, "Music similarity systems and
  methods using descriptors,” U.S. Patent WO 2009/0012022009.

  [2] Guaus, E. (2009). Audio content processing for automatic music genre
  classification: descriptors, databases, and classifiers. PhD Thesis.


See also
--------

FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__
IFFT `(standard) <std_IFFT.html>`__
IFFT `(streaming) <streaming_IFFT.html>`__
Panning `(standard) <std_Panning.html>`__