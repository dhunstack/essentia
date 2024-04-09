:orphan:

Algorithm reference - Tristimulus (standard mode)
=================================================

Inputs
------

 - ``frequencies`` (*vector_real*) - the frequencies of the harmonic peaks ordered by frequency
 - ``magnitudes`` (*vector_real*) - the magnitudes of the harmonic peaks ordered by frequency

Outputs
-------

 - ``tristimulus`` (*vector_real*) - a three-element vector that measures the mixture of harmonics of the given spectrum

Description
-----------

This algorithm calculates the tristimulus of a signal given its harmonic peaks. The tristimulus has been introduced as a timbre equivalent to the color attributes in the vision. Tristimulus measures the mixture of harmonics in a given sound, grouped into three sections. The first tristimulus measures the relative weight of the first harmonic; the second tristimulus measures the relative weight of the second, third, and fourth harmonics taken together; and the third tristimulus measures the relative weight of all the remaining harmonics.

Tristimulus is intended to be fed by the output of the HarmonicPeaks algorithm. The algorithm throws an exception when the input frequencies are not in ascending order and/or if the input vectors are of different sizes.


References:
  [1] Tristimulus (audio) - Wikipedia, the free encyclopedia
  http://en.wikipedia.org/wiki/Tristimulus_%28audio%29

  [2] G. Peeters, "A large set of audio features for sound description
  (similarity and classification) in the CUIDADO project," CUIDADO I.S.T.
  Project Report, 2004


See also
--------

HarmonicPeaks `(standard) <std_HarmonicPeaks.html>`__
HarmonicPeaks `(streaming) <streaming_HarmonicPeaks.html>`__
Tristimulus `(streaming) <streaming_Tristimulus.html>`__