:orphan:

Algorithm reference - PercivalBpmEstimator (streaming mode)
===========================================================

Inputs
------

 - ``signal`` (*real*) - input signal

Outputs
-------

 - ``bpm`` (*real*) - the tempo estimation [bpm]

Parameters
----------

 - ``frameSize`` (*integer ∈ (0, ∞), default = 1024*) :
     frame size for the analysis of the input signal
 - ``frameSizeOSS`` (*integer ∈ (0, ∞), default = 2048*) :
     frame size for the analysis of the Onset Strength Signal
 - ``hopSize`` (*integer ∈ (0, ∞), default = 128*) :
     hop size for the analysis of the input signal
 - ``hopSizeOSS`` (*integer ∈ (0, ∞), default = 128*) :
     hop size for the analysis of the Onset Strength Signal
 - ``maxBPM`` (*integer ∈ (0, ∞), default = 210*) :
     maximum BPM to detect
 - ``minBPM`` (*integer ∈ (0, ∞), default = 50*) :
     minimum BPM to detect
 - ``sampleRate`` (*integer ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm estimates the tempo in beats per minute (BPM) from an input signal as described in [1].


References:
  [1] Percival, G., & Tzanetakis, G. (2014). Streamlined tempo estimation based on autocorrelation and cross-correlation with pulses.
  IEEE/ACM Transactions on Audio, Speech, and Language Processing, 22(12), 1765–1776.




See also
--------

PercivalBpmEstimator `(standard) <std_PercivalBpmEstimator.html>`__