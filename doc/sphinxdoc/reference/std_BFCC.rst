:orphan:

Algorithm reference - BFCC (standard mode)
==========================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the audio spectrum

Outputs
-------

 - ``bands`` (*vector_real*) - the energies in bark bands
 - ``bfcc`` (*vector_real*) - the bark frequency cepstrum coefficients

Parameters
----------

 - ``dctType`` (*integer ∈ [2, 3], default = 2*) :
     the DCT type
 - ``highFrequencyBound`` (*real ∈ (0, ∞), default = 11000*) :
     the upper bound of the frequency range [Hz]
 - ``inputSize`` (*integer ∈ (1, ∞), default = 1025*) :
     the size of input spectrum
 - ``liftering`` (*integer ∈ [0, ∞), default = 0*) :
     the liftering coefficient. Use '0' to bypass it
 - ``logType`` (*string ∈ {natural, dbpow, dbamp, log}, default = dbamp*) :
     logarithmic compression type. Use 'dbpow' if working with power and 'dbamp' if working with magnitudes
 - ``lowFrequencyBound`` (*real ∈ [0, ∞), default = 0*) :
     the lower bound of the frequency range [Hz]
 - ``normalize`` (*string ∈ {unit_sum, unit_max}, default = unit_sum*) :
     'unit_max' makes the vertex of all the triangles equal to 1, 'unit_sum' makes the area of all the triangles equal to 1
 - ``numberBands`` (*integer ∈ [1, ∞), default = 40*) :
     the number of bark bands in the filter
 - ``numberCoefficients`` (*integer ∈ [1, ∞), default = 13*) :
     the number of output cepstrum coefficients
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``type`` (*string ∈ {magnitude, power}, default = power*) :
     use magnitude or power spectrum
 - ``weighting`` (*string ∈ {warping, linear}, default = warping*) :
     type of weighting function for determining triangle area

Description
-----------

This algorithm computes the bark-frequency cepstrum coefficients of a spectrum. Bark bands and their subsequent usage in cepstral analysis have shown to be useful in percussive content [1, 2]
This algorithm is implemented using the Bark scaling approach in the Rastamat version of the MFCC algorithm and in a similar manner to the MFCC-FB40 default specs:

http://www.ee.columbia.edu/ln/rosa/matlab/rastamat/

  - filterbank of 40 bands from 0 to 11000Hz
  - take the log value of the spectrum energy in each bark band
  - DCT of the 40 bands down to 13 mel coefficients


The parameters of this algorithm can be configured in order to behave like Rastamat [3] as follows:

  - type = 'power' 
  - weighting = 'linear'
  - lowFrequencyBound = 0
  - highFrequencyBound = 8000
  - numberBands = 26
  - numberCoefficients = 13
  - normalize = 'unit_max'
  - dctType = 3
  - logType = 'log'
  - liftering = 22


In order to completely behave like Rastamat the audio signal has to be scaled by 2^15 before the processing and if the Windowing and FrameCutter algorithms are used they should also be configured as follows. 

FrameGenerator:

  - frameSize = 1102 
  - hopSize = 441 
  - startFromZero = True 
  - validFrameThresholdRatio = 1 


Windowing:

  - type = 'hann' 
  - size = 1102 
  - zeroPadding = 946 
  - normalized = False 


This algorithm depends on the algorithms TriangularBarkBands (not the regular BarkBands algo as it is non-configurable) and DCT and therefore inherits their parameter restrictions. An exception is thrown if any of these restrictions are not met. The input "spectrum" is passed to the TriangularBarkBands algorithm and thus imposes TriangularBarkBands' input requirements. Exceptions are inherited by TriangualrBarkBands as well as by DCT.


References:
  [1] P. Herrera, A. Dehamel, and F. Gouyon, "Automatic labeling of unpitched percussion sounds in
  Audio Engineering Society 114th Convention, 2003,
  [2] W. Brent, "Cepstral Analysis Tools for Percussive Timbre Identification in
  Proceedings of the 3rd International Pure Data Convention, Sao Paulo, Brazil, 2009,



See also
--------

BFCC `(streaming) <streaming_BFCC.html>`__
BarkBands `(standard) <std_BarkBands.html>`__
BarkBands `(streaming) <streaming_BarkBands.html>`__
DCT `(standard) <std_DCT.html>`__
DCT `(streaming) <streaming_DCT.html>`__
FrameCutter `(standard) <std_FrameCutter.html>`__
FrameCutter `(streaming) <streaming_FrameCutter.html>`__
FrameGenerator `(standard) <std_FrameGenerator.html>`__
MFCC `(standard) <std_MFCC.html>`__
MFCC `(streaming) <streaming_MFCC.html>`__
TriangularBarkBands `(standard) <std_TriangularBarkBands.html>`__
TriangularBarkBands `(streaming) <streaming_TriangularBarkBands.html>`__
Windowing `(standard) <std_Windowing.html>`__
Windowing `(streaming) <streaming_Windowing.html>`__