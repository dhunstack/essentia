:orphan:

Algorithm reference - TempoScaleBands (streaming mode)
======================================================

Inputs
------

 - ``bands`` (*vector_real*) - the audio power spectrum divided into bands

Outputs
-------

 - ``scaledBands`` (*vector_real*) - the output bands after scaling
 - ``cumulativeBands`` (*real*) - cumulative sum of the output bands before scaling

Parameters
----------

 - ``bandsGain`` (*vector_real, default = [2, 3, 2, 1, 1.20000004768, 2, 3, 2.5]*) :
     gain for each bands
 - ``frameTime`` (*real ∈ (0, ∞), default = 512*) :
     the frame rate in samples

Description
-----------

This algorithm computes features for tempo tracking to be used with the TempoTap algorithm. See standard_rhythmextractor_tempotap in examples folder.

An exception is thrown if less than 1 band is given. An exception is also thrown if the there are not an equal number of bands given as band-gains given.

Quality: outdated (the associated TempoTap algorithm is outdated, however it can be potentially used as an onset detection function for other tempo estimation algorithms although no evaluation has been done)


References:
  [1] Algorithm by Fabien Gouyon and Simon Dixon. There is no reference at
  the time of this writing.



See also
--------

TempoScaleBands `(standard) <std_TempoScaleBands.html>`__
TempoTap `(standard) <std_TempoTap.html>`__
TempoTap `(streaming) <streaming_TempoTap.html>`__