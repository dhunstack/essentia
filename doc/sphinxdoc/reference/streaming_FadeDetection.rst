:orphan:

Algorithm reference - FadeDetection (streaming mode)
====================================================

Inputs
------

 - ``rms`` (*real*) - rms values array

Outputs
-------

 - ``fadeIn`` (*matrix_real*) - 2D-array containing start/stop timestamps corresponding to fade-ins [s] (ordered chronologically)
 - ``fadeOut`` (*matrix_real*) - 2D-array containing start/stop timestamps corresponding to fade-outs [s] (ordered chronologically)

Parameters
----------

 - ``cutoffHigh`` (*real ∈ (0, 1], default = 0.85*) :
     fraction of the average RMS to define the maximum threshold
 - ``cutoffLow`` (*real ∈ [0, 1), default = 0.2*) :
     fraction of the average RMS to define the minimum threshold
 - ``frameRate`` (*real ∈ (0, ∞), default = 4*) :
     the rate of frames used in calculation of the RMS [frames/s]
 - ``minLength`` (*real ∈ (0, ∞), default = 3*) :
     the minimum length to consider a fade-in/out [s]

Description
-----------

This algorithm detects fade-in and fade-outs time positions in an audio signal given a sequence of RMS values. It outputs two arrays containing the start/stop points of fade-ins and fade-outs. The main hypothesis for the detection is that an increase or decrease of the RMS over time in an audio file corresponds to a fade-in or fade-out, repectively. Minimum and maximum mean-RMS-thresholds are used to define where fade-in and fade-outs occur.

An exception is thrown if the input "rms" is empty.


References:
  [1] Fade (audio engineering) - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Fade-in


See also
--------

FadeDetection `(standard) <std_FadeDetection.html>`__
RMS `(standard) <std_RMS.html>`__
RMS `(streaming) <streaming_RMS.html>`__