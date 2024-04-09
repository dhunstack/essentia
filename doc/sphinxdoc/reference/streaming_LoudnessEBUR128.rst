:orphan:

Algorithm reference - LoudnessEBUR128 (streaming mode)
======================================================

Inputs
------

 - ``signal`` (*stereosample*) - the input stereo audio signal

Outputs
-------

 - ``momentaryLoudness`` (*real*) - momentary loudness (over 400ms) (LUFS)
 - ``shortTermLoudness`` (*real*) - short-term loudness (over 3 seconds) (LUFS)
 - ``integratedLoudness`` (*real*) - integrated loudness (overall) (LUFS)
 - ``loudnessRange`` (*real*) - loudness range over an arbitrary long time interval [3] (dB, LU)

Parameters
----------

 - ``hopSize`` (*real ∈ (0, 0.1], default = 0.1*) :
     the hop size with which the loudness is computed [s]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``startAtZero`` (*bool ∈ {true, false}, default = false*) :
     start momentary/short-term loudness estimation at time 0 (zero-centered loudness estimation windows) if true; otherwise start both windows at time 0 (time positions for momentary and short-term values will not be syncronized)

Description
-----------

This algorithm computes the EBU R128 loudness descriptors of an audio signal.

- The input stereo signal is preprocessed with a K-weighting filter [2] (see LoudnessEBUR128Filter algorithm), composed of two stages: a shelving filter and a high-pass filter (RLB-weighting curve).
- Momentary loudness is computed by integrating the sum of powers over a sliding rectangular window of 400 ms. The measurement is not gated.
- Short-term loudness is computed by integrating the sum of powers over a sliding rectangular window of 3 seconds. The measurement is not gated.
- Integrated loudness is a loudness value averaged over an arbitrary long time interval with gating of 400 ms blocks with two thresholds [2].

  - Absolute 'silence' gating threshold at -70 LUFS for the computation of the absolute-gated loudness level.
  - Relative gating threshold, 10 LU below the absolute-gated loudness level.

- Loudness range is computed from short-term loudness values. It is defined as the difference between the estimates of the 10th and 95th percentiles of the distribution of the loudness values with applied gating [3].

  - Absolute 'silence' gating threshold at -70 LUFS for the computation of the absolute-gated loudness level.
  - Relative gating threshold, -20 LU below the absolute-gated loudness level.



References:
  [1] EBU Tech 3341-2011. "Loudness Metering: 'EBU Mode' metering to supplement
  loudness normalisation in accordance with EBU R 128"

  [2] ITU-R BS.1770-2. "Algorithms to measure audio programme loudness and true-peak audio level"

  [3] EBU Tech Doc 3342-2011. "Loudness Range: A measure to supplement loudness
  normalisation in accordance with EBU R 128"

  [4] https://tech.ebu.ch/loudness

  [5] https://en.wikipedia.org/wiki/EBU_R_128

  [6] https://en.wikipedia.org/wiki/LKFS



See also
--------

Loudness `(standard) <std_Loudness.html>`__
Loudness `(streaming) <streaming_Loudness.html>`__
LoudnessEBUR128 `(standard) <std_LoudnessEBUR128.html>`__
LoudnessEBUR128Filter `(streaming) <streaming_LoudnessEBUR128Filter.html>`__
Meter `(standard) <std_Meter.html>`__
Meter `(streaming) <streaming_Meter.html>`__