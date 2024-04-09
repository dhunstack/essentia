:orphan:

Algorithm reference - StrongPeak (streaming mode)
=================================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input spectrum (must be greater than one element and cannot contain negative values)

Outputs
-------

 - ``strongPeak`` (*real*) - the Strong Peak ratio

Description
-----------

This algorithm computes the Strong Peak of a spectrum. The Strong Peak is defined as the ratio between the spectrum's maximum peak's magnitude and the "bandwidth" of the peak above a threshold (half its amplitude). This ratio reveals whether the spectrum presents a very "pronounced" maximum peak (i.e. the thinner and the higher the maximum of the spectrum is, the higher the ratio value).

Note that "bandwidth" is defined as the width of the peak in the log10-frequency domain. This is different than as implemented in [1]. Using the log10-frequency domain allows this algorithm to compare strong peaks at lower frequencies with those from higher frequencies.

An exception is thrown if the input spectrum contains less than two elements.


References:
  [1] F. Gouyon and P. Herrera, "Exploration of techniques for automatic
  labeling of audio drum tracks instruments,” in MOSART: Workshop on Current
  Directions in Computer Music, 2001.


See also
--------

StrongPeak `(standard) <std_StrongPeak.html>`__