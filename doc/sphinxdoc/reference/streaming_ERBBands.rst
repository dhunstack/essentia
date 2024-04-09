:orphan:

Algorithm reference - ERBBands (streaming mode)
===============================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the audio spectrum

Outputs
-------

 - ``bands`` (*vector_real*) - the energies/magnitudes of each band

Parameters
----------

 - ``highFrequencyBound`` (*real ∈ [0, ∞), default = 22050*) :
     an upper-bound limit for the frequencies to be included in the bands
 - ``inputSize`` (*integer ∈ (1, ∞), default = 1025*) :
     the size of the spectrum
 - ``lowFrequencyBound`` (*real ∈ [0, ∞), default = 50*) :
     a lower-bound limit for the frequencies to be included in the bands
 - ``numberBands`` (*integer ∈ (1, ∞), default = 40*) :
     the number of output bands
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``type`` (*string ∈ {magnitude, power}, default = power*) :
     use magnitude or power spectrum
 - ``width`` (*real ∈ (0, ∞), default = 1*) :
     filter width with respect to ERB

Description
-----------

This algorithm computes energies/magnitudes in ERB bands of a spectrum. The Equivalent Rectangular Bandwidth (ERB) scale is used. The algorithm applies a frequency domain filterbank using gammatone filters. Adapted from matlab code in:  D. P. W. Ellis (2009). 'Gammatone-like spectrograms', web resource [1].


References:
  [1] http://www.ee.columbia.edu/~dpwe/resources/matlab/gammatonegram/

  [2] B. C. Moore and B. R. Glasberg, "Suggested formulae for calculating
  auditory-filter bandwidths and excitation patterns," Journal of the
  Acoustical Society of America, vol. 74, no. 3, pp. 750–753, 1983.


See also
--------

ERBBands `(standard) <std_ERBBands.html>`__