:orphan:

Algorithm reference - SpectrumToCent (standard mode)
====================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input spectrum (must be greater than size one)

Outputs
-------

 - ``bands`` (*vector_real*) - the energy in each band
 - ``frequencies`` (*vector_real*) - the central frequency of each band

Parameters
----------

 - ``bands`` (*integer ∈ [1, ∞), default = 720*) :
     number of bins to compute. Default is 720 (6 octaves with the default 'centBinResolution')
 - ``centBinResolution`` (*real ∈ (0, ∞), default = 10*) :
     Width of each band in cents. Default is 10 cents
 - ``inputSize`` (*integer ∈ (1, ∞), default = 32768*) :
     the size of the spectrum
 - ``log`` (*bool ∈ {true, false}, default = true*) :
     compute log-energies (log2 (1 + energy))
 - ``minimumFrequency`` (*real ∈ (0, ∞), default = 164*) :
     central frequency of the first band of the bank [Hz]
 - ``normalize`` (*string ∈ {unit_sum, unit_max}, default = unit_sum*) :
     use unit area or vertex equal to 1 triangles.
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``type`` (*string ∈ {magnitude, power}, default = power*) :
     use magnitude or power spectrum

Description
-----------

This algorithm computes energy in triangular frequency bands of a spectrum equally spaced on the cent scale. Each band is computed to have a constant wideness in the cent scale. For each band the power-spectrum (mag-squared) is summed.

Parameter "centBinResolution" should be and integer greater than 1, otherwise an exception will be thrown. TriangularBands is only defined for spectrum, which size is greater than 1.



See also
--------

SpectrumToCent `(streaming) <streaming_SpectrumToCent.html>`__
TriangularBands `(standard) <std_TriangularBands.html>`__
TriangularBands `(streaming) <streaming_TriangularBands.html>`__