:orphan:

Algorithm reference - Dissonance (streaming mode)
=================================================

Inputs
------

 - ``frequencies`` (*vector_real*) - the frequencies of the spectral peaks (must be sorted by frequency)
 - ``magnitudes`` (*vector_real*) - the magnitudes of the spectral peaks (must be sorted by frequency

Outputs
-------

 - ``dissonance`` (*real*) - the dissonance of the audio signal (0 meaning completely consonant, and 1 meaning completely dissonant)

Description
-----------

This algorithm computes the sensory dissonance of an audio signal given its spectral peaks. Sensory dissonance (to be distinguished from musical or theoretical dissonance) measures perceptual roughness of the sound and is based on the roughness of its spectral peaks. Given the spectral peaks, the algorithm estimates total dissonance by summing up the normalized dissonance values for each pair of peaks. These values are computed using dissonance curves, which define dissonace between two spectral peaks according to their frequency and amplitude relations. The dissonance curves are based on perceptual experiments conducted in [1].
Exceptions are thrown when the size of the input vectors are not equal or if input frequencies are not ordered ascendantly

References:
  [1] R. Plomp and W. J. M. Levelt, "Tonal Consonance and Critical
  Bandwidth," The Journal of the Acoustical Society of America, vol. 38,
  no. 4, pp. 548–560, 1965.

  [2] Critical Band - Handbook for Acoustic Ecology
  http://www.sfu.ca/sonic-studio/handbook/Critical_Band.html

  [3] Bark Scale -  Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Bark_scale


See also
--------

Dissonance `(standard) <std_Dissonance.html>`__
Scale `(standard) <std_Scale.html>`__
Scale `(streaming) <streaming_Scale.html>`__