:orphan:

Algorithm reference - SineModelAnal (standard mode)
===================================================

Inputs
------

 - ``fft`` (*vector_complex*) - the input frame

Outputs
-------

 - ``frequencies`` (*vector_real*) - the frequencies of the sinusoidal peaks [Hz]
 - ``magnitudes`` (*vector_real*) - the magnitudes of the sinusoidal peaks
 - ``phases`` (*vector_real*) - the phases of the sinusoidal peaks

Parameters
----------

 - ``freqDevOffset`` (*real ∈ (0, ∞), default = 20*) :
     minimum frequency deviation at 0Hz
 - ``freqDevSlope`` (*real ∈ (-∞, ∞), default = 0.01*) :
     slope increase of minimum frequency deviation
 - ``magnitudeThreshold`` (*real ∈ (-∞, ∞), default = -74*) :
     peaks below this given threshold are not outputted
 - ``maxFrequency`` (*real ∈ (0, ∞), default = 22050*) :
     the maximum frequency of the range to evaluate [Hz]
 - ``maxPeaks`` (*integer ∈ [1, ∞), default = 250*) :
     the maximum number of returned peaks
 - ``maxnSines`` (*integer ∈ (0, ∞), default = 100*) :
     maximum number of sines per frame
 - ``minFrequency`` (*real ∈ [0, ∞), default = 0*) :
     the minimum frequency of the range to evaluate [Hz]
 - ``orderBy`` (*string ∈ {frequency, magnitude}, default = frequency*) :
     the ordering type of the outputted peaks (ascending by frequency or descending by magnitude)
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm computes the sine model analysis. 

It is recommended that the input "spectrum" be computed by the Spectrum algorithm. This algorithm uses PeakDetection. See documentation for possible exceptions and input requirements on input "spectrum".


References:
  [1] Peak Detection,
  http://ccrma.stanford.edu/~jos/parshl/Peak_Detection_Steps_3.html


See also
--------

PeakDetection `(standard) <std_PeakDetection.html>`__
PeakDetection `(streaming) <streaming_PeakDetection.html>`__
SineModelAnal `(streaming) <streaming_SineModelAnal.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__