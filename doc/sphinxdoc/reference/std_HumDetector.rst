:orphan:

Algorithm reference - HumDetector (standard mode)
=================================================

Inputs
------

 - ``signal`` (*vector_real*) - the input audio signal

Outputs
-------

 - ``r`` (*matrix_real*) - the quantile ratios matrix
 - ``frequencies`` (*vector_real*) - humming tones frequencies
 - ``saliences`` (*vector_real*) - humming tones saliences
 - ``starts`` (*vector_real*) - humming tones starts
 - ``ends`` (*vector_real*) - humming tones ends

Parameters
----------

 - ``Q0`` (*real ∈ (0, 1), default = 0.1*) :
     low quantile
 - ``Q1`` (*real ∈ (0, 1), default = 0.55*) :
     high quatile
 - ``detectionThreshold`` (*real ∈ (0, ∞), default = 5*) :
     the detection threshold for the peaks of the r matrix
 - ``frameSize`` (*real ∈ (0, ∞), default = 0.4*) :
     the frame size with which the loudness is computed [s]
 - ``hopSize`` (*real ∈ (0, ∞), default = 0.2*) :
     the hop size with which the loudness is computed [s]
 - ``maximumFrequency`` (*real ∈ (0, ∞), default = 400*) :
     maximum frequency to consider [Hz]
 - ``minimumDuration`` (*real ∈ (0, ∞), default = 2*) :
     minimun duration of the humming tones [s]
 - ``minimumFrequency`` (*real ∈ (0, ∞), default = 22.5*) :
     minimum frequency to consider [Hz]
 - ``numberHarmonics`` (*integer ∈ (0, ∞), default = 1*) :
     number of considered harmonics
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``timeContinuity`` (*real ∈ (0, ∞), default = 10*) :
     time continuity cue (the maximum allowed gap duration for a pitch contour) [s]
 - ``timeWindow`` (*real ∈ (0, ∞), default = 10*) :
     analysis time to use for the hum estimation [s]

Description
-----------

This algorithm detects low frequency tonal noises in the audio signal. First, the steadiness of the Power Spectral Density (PSD) of the signal is computed by measuring the quantile ratios as described in [1]. After this, the PitchContours algorithm is used to keep track of the humming tones [2].


References:
  [1] Brandt, M., & Bitzer, J. (2014). Automatic Detection of Hum in Audio
  Signals. Journal of the Audio Engineering Society, 62(9), 584-595.

  [2] J. Salamon and E. Gómez, Melody extraction from polyphonic music signals
  using pitch contour characteristics, IEEE Transactions on Audio, Speech,
  and Language Processing, vol. 20, no. 6, pp. 1759–1770, 2012.



See also
--------

HumDetector `(streaming) <streaming_HumDetector.html>`__
PitchContours `(standard) <std_PitchContours.html>`__
PitchContours `(streaming) <streaming_PitchContours.html>`__