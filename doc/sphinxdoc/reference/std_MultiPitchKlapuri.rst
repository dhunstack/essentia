:orphan:

Algorithm reference - MultiPitchKlapuri (standard mode)
=======================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``pitch`` (*vector_vector_real*) - the estimated pitch values [Hz]

Parameters
----------

 - ``binResolution`` (*real ∈ (0, ∞), default = 10*) :
     salience function bin resolution [cents]
 - ``frameSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the frame size for computing pitch saliecnce
 - ``harmonicWeight`` (*real ∈ (0, 1), default = 0.8*) :
     harmonic weighting parameter (weight decay ratio between two consequent harmonics, =1 for no decay)
 - ``hopSize`` (*integer ∈ (0, ∞), default = 128*) :
     the hop size with which the pitch salience function was computed
 - ``magnitudeCompression`` (*real ∈ (0, 1], default = 1*) :
     magnitude compression parameter for the salience function (=0 for maximum compression, =1 for no compression)
 - ``magnitudeThreshold`` (*integer ∈ [0, ∞), default = 40*) :
     spectral peak magnitude threshold (maximum allowed difference from the highest peak in dBs)
 - ``maxFrequency`` (*real ∈ [0, ∞), default = 1760*) :
     the maximum allowed frequency for salience function peaks (ignore peaks above) [Hz]
 - ``minFrequency`` (*real ∈ [0, ∞), default = 80*) :
     the minimum allowed frequency for salience function peaks (ignore peaks below) [Hz]
 - ``numberHarmonics`` (*integer ∈ [1, ∞), default = 10*) :
     number of considered harmonics
 - ``referenceFrequency`` (*real ∈ (0, ∞), default = 55*) :
     the reference frequency for Hertz to cent convertion [Hz], corresponding to the 0th cent bin
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm estimates multiple pitch values corresponding to the melodic lines present in a polyphonic music signal (for example, string quartet, piano). This implementation is based on the algorithm in [1]: In each frame, a set of possible fundamental frequency candidates is extracted based on the principle of harmonic summation. In an optimization stage, the number of harmonic sources (polyphony) is estimated and the final set of fundamental frequencies determined. In contrast to the pich salience function proposed in [2], this implementation uses the pitch salience function described in [1].
The output is a vector for each frame containing the estimated melody pitch values.


References:
  [1] A. Klapuri, "Multiple Fundamental Frequency Estimation by Summing Harmonic
  Amplitudes ", International Society for Music Information Retrieval Conference
  (2006).
  [2] J. Salamon and E. Gómez, "Melody extraction from polyphonic music
  signals using pitch contour characteristics," IEEE Transactions on Audio,
  Speech, and Language Processing, vol. 20, no. 6, pp. 1759–1770, 2012.



