:orphan:

Algorithm reference - TonicIndianArtMusic (standard mode)
=========================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``tonic`` (*real*) - the estimated tonic frequency [Hz]

Parameters
----------

 - ``binResolution`` (*real ∈ (0, ∞), default = 10*) :
     salience function bin resolution [cents]
 - ``frameSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the frame size for computing pitch saliecnce
 - ``harmonicWeight`` (*real ∈ (0, 1), default = 0.85*) :
     harmonic weighting parameter (weight decay ratio between two consequent harmonics, =1 for no decay)
 - ``hopSize`` (*integer ∈ (0, ∞), default = 512*) :
     the hop size with which the pitch salience function was computed
 - ``magnitudeCompression`` (*real ∈ (0, 1], default = 1*) :
     magnitude compression parameter (=0 for maximum compression, =1 for no compression)
 - ``magnitudeThreshold`` (*real ∈ [0, ∞), default = 40*) :
     peak magnitude threshold (maximum allowed difference from the highest peak in dBs)
 - ``maxTonicFrequency`` (*real ∈ [0, ∞), default = 375*) :
     the maximum allowed tonic frequency [Hz]
 - ``minTonicFrequency`` (*real ∈ [0, ∞), default = 100*) :
     the minimum allowed tonic frequency [Hz]
 - ``numberHarmonics`` (*integer ∈ [1, ∞), default = 20*) :
     number of considered hamonics
 - ``numberSaliencePeaks`` (*integer ∈ [1, 15], default = 5*) :
     number of top peaks of the salience function which should be considered for constructing histogram
 - ``referenceFrequency`` (*real ∈ (0, ∞), default = 55*) :
     the reference frequency for Hertz to cent convertion [Hz], corresponding to the 0th cent bin
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm estimates the tonic frequency of the lead artist in Indian art music. It uses multipitch representation of the audio signal (pitch salience) to compute a histogram using which the tonic is identified as one of its peak. The decision is made based on the distance between the prominent peaks, the classification is done using a decision tree. An empty input signal will throw an exception. An exception will also be thrown if no predominant pitch salience peaks are detected within the maxTonicFrequency to minTonicFrequency range. 


References:
  [1] J. Salamon, S. Gulati, and X. Serra, "A Multipitch Approach to Tonic
  Identification in Indian Classical Music," in International Society for
  Music Information Retrieval Conference (ISMIR’12), 2012.

