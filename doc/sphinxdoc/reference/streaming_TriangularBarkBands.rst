:orphan:

Algorithm reference - TriangularBarkBands (streaming mode)
==========================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the audio spectrum

Outputs
-------

 - ``bands`` (*vector_real*) - the energy in bark bands

Parameters
----------

 - ``highFrequencyBound`` (*real ∈ [0, ∞), default = 22050*) :
     an upper-bound limit for the frequencies to be included in the bands
 - ``inputSize`` (*integer ∈ (1, ∞), default = 1025*) :
     the size of the spectrum
 - ``log`` (*bool ∈ {true, false}, default = false*) :
     compute log-energies (log2 (1 + energy))
 - ``lowFrequencyBound`` (*real ∈ [0, ∞), default = 0*) :
     a lower-bound limit for the frequencies to be included in the bands
 - ``normalize`` (*string ∈ {unit_sum, unit_max}, default = unit_sum*) :
     'unit_max' makes the vertex of all the triangles equal to 1, 'unit_sum' makes the area of all the triangles equal to 1
 - ``numberBands`` (*integer ∈ (1, ∞), default = 24*) :
     the number of output bands
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sample rate
 - ``type`` (*string ∈ {magnitude, power}, default = power*) :
     'power' to output squared units, 'magnitude' to keep it as the input
 - ``weighting`` (*string ∈ {warping, linear}, default = warping*) :
     type of weighting function for determining triangle area

Description
-----------

This algorithm computes energy in the bark bands of a spectrum. It is different to the regular BarkBands algorithm in that is more configurable so that it can be used in the BFCC algorithm to produce output similar to Rastamat (http://www.ee.columbia.edu/ln/rosa/matlab/rastamat/)
See the BFCC algorithm documentation for more information as to why you might want to choose this over Mel frequency analysis
It is recommended that the input "spectrum" be calculated by the Spectrum algorithm.




See also
--------

BFCC `(standard) <std_BFCC.html>`__
BFCC `(streaming) <streaming_BFCC.html>`__
BarkBands `(standard) <std_BarkBands.html>`__
BarkBands `(streaming) <streaming_BarkBands.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__
TriangularBarkBands `(standard) <std_TriangularBarkBands.html>`__