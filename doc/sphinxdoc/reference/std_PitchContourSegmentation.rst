:orphan:

Algorithm reference - PitchContourSegmentation (standard mode)
==============================================================

Inputs
------

 - ``pitch`` (*vector_real*) - estimated pitch contour [Hz]
 - ``signal`` (*vector_real*) - input audio signal

Outputs
-------

 - ``onset`` (*vector_real*) - note onset times [s]
 - ``duration`` (*vector_real*) - note durations [s]
 - ``MIDIpitch`` (*vector_real*) - quantized MIDI pitch value

Parameters
----------

 - ``hopSize`` (*integer ∈ (0, ∞), default = 128*) :
     hop size of the extracted pitch
 - ``minDuration`` (*real ∈ (0, ∞), default = 0.1*) :
     minimum note duration [s]
 - ``pitchDistanceThreshold`` (*integer ∈ (0, ∞), default = 60*) :
     pitch threshold for note segmentation [cents]
 - ``rmsThreshold`` (*integer ∈ (-∞, 0), default = -2*) :
     zscore threshold for note segmentation
 - ``sampleRate`` (*integer ∈ (0, ∞), default = 44100*) :
     sample rate of the audio signal
 - ``tuningFrequency`` (*integer ∈ (0, 22000), default = 440*) :
     tuning reference frequency  [Hz]

Description
-----------

This algorithm converts a pitch sequence estimated from an audio signal into a set of discrete note events. Each note is defined by its onset time, duration and MIDI pitch value, quantized to the equal tempered scale.

Note segmentation is performed based on pitch contour characteristics (island building) and signal RMS. Notes below an adjustable minimum duration are rejected.


References:
  [1] R. J. McNab et al., "Signal processing for melody transcription," in Proc. 
  Proc. 19th Australasian Computer Science Conf., 1996


See also
--------

RMS `(standard) <std_RMS.html>`__
RMS `(streaming) <streaming_RMS.html>`__