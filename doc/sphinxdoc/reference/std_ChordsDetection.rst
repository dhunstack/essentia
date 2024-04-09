:orphan:

Algorithm reference - ChordsDetection (standard mode)
=====================================================

Inputs
------

 - ``pcp`` (*vector_vector_real*) - the pitch class profile from which to detect the chord

Outputs
-------

 - ``chords`` (*vector_string*) - the resulting chords, from A to G
 - ``strength`` (*vector_real*) - the strength of the chord

Parameters
----------

 - ``hopSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the hop size with which the input PCPs were computed
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``windowSize`` (*real ∈ (0, ∞), default = 2*) :
     the size of the window on which to estimate the chords [s]

Description
-----------

This algorithm estimates chords given an input sequence of harmonic pitch class profiles (HPCPs). It finds the best matching major or minor triad and outputs the result as a string (e.g. A#, Bm, G#m, C). The following note names are used in the output:
"A", "Bb", "B", "C", "C#", "D", "Eb", "E", "F", "F#", "G", "Ab".
Note:

  - The algorithm assumes that the sequence of the input HPCP frames has been computed with framesize = 2*hopsize
  - The algorithm estimates a sequence of chord values corresponding to the input HPCP frames (one chord value for each frame, estimated using a temporal window of HPCPs centered at that frame).


Quality: experimental (prone to errors, algorithm needs improvement)


References:
  [1] E. Gómez, "Tonal Description of Polyphonic Audio for Music Content
  Processing," INFORMS Journal on Computing, vol. 18, no. 3, pp. 294–304,
  2006.

  [2] D. Temperley, "What's key for key? The Krumhansl-Schmuckler
  key-finding algorithm reconsidered", Music Perception vol. 17, no. 1,
  pp. 65-100, 1999.


See also
--------

ChordsDetection `(streaming) <streaming_ChordsDetection.html>`__
HPCP `(standard) <std_HPCP.html>`__
HPCP `(streaming) <streaming_HPCP.html>`__
RMS `(standard) <std_RMS.html>`__
RMS `(streaming) <streaming_RMS.html>`__