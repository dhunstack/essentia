:orphan:

Algorithm reference - SpectralPeaks (streaming mode)
====================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input spectrum

Outputs
-------

 - ``frequencies`` (*vector_real*) - the frequencies of the spectral peaks [Hz]
 - ``magnitudes`` (*vector_real*) - the magnitudes of the spectral peaks

Parameters
----------

 - ``magnitudeThreshold`` (*real ∈ (-∞, ∞), default = 0*) :
     peaks below this given threshold are not outputted
 - ``maxFrequency`` (*real ∈ (0, ∞), default = 5000*) :
     the maximum frequency of the range to evaluate [Hz]
 - ``maxPeaks`` (*integer ∈ [1, ∞), default = 100*) :
     the maximum number of returned peaks
 - ``minFrequency`` (*real ∈ [0, ∞), default = 0*) :
     the minimum frequency of the range to evaluate [Hz]
 - ``orderBy`` (*string ∈ {frequency, magnitude}, default = frequency*) :
     the ordering type of the outputted peaks (ascending by frequency or descending by magnitude)
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm extracts peaks from a spectrum. It is important to note that the peak algorithm is independent of an input that is linear or in dB, so one has to adapt the threshold to fit with the type of data fed to it. The algorithm relies on PeakDetection algorithm which is run with parabolic interpolation [1]. The exactness of the peak-searching depends heavily on the windowing type. It gives best results with dB input, a blackman-harris 92dB window and interpolation set to true. According to [1], spectral peak frequencies tend to be about twice as accurate when dB magnitude is used rather than just linear magnitude. For further information about the peak detection, see the description of the PeakDetection algorithm.

It is recommended that the input "spectrum" be computed by the Spectrum algorithm. This algorithm uses PeakDetection. See documentation for possible exceptions and input requirements on input "spectrum".


References:
  [1] Peak Detection,
  http://ccrma.stanford.edu/~jos/parshl/Peak_Detection_Steps_3.html


See also
--------

PeakDetection `(standard) <std_PeakDetection.html>`__
PeakDetection `(streaming) <streaming_PeakDetection.html>`__
SpectralPeaks `(standard) <std_SpectralPeaks.html>`__
Spectrum `(standard) <std_Spectrum.html>`__
Spectrum `(streaming) <streaming_Spectrum.html>`__