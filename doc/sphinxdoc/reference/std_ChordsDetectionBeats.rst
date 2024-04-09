:orphan:

Algorithm reference - ChordsDetectionBeats (standard mode)
==========================================================

Inputs
------

 - ``pcp`` (*vector_vector_real*) - the pitch class profile from which to detect the chord
 - ``ticks`` (*vector_real*) - the list of beat positions (in seconds). One chord will be outputted for each segment between two adjacent ticks. If number of ticks is smaller than 2, exception will be thrown. Those ticks that exceeded the pcp time length will be ignored.

Outputs
-------

 - ``chords`` (*vector_string*) - the resulting chords, from A to G
 - ``strength`` (*vector_real*) - the strength of the chords

Parameters
----------

 - ``chromaPick`` (*string ∈ {starting_beat, interbeat_median}, default = interbeat_median*) :
     method of calculating singleton chroma for interbeat interval
 - ``hopSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the hop size with which the input PCPs were computed
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm estimates chords using pitch profile classes on segments between beats. It is similar to ChordsDetection algorithm, but the chords are estimated on audio segments between each pair of consecutive beats. For each segment the estimation is done based on a chroma (HPCP) vector characterizing it, which can be computed by two methods:

  - 'interbeat_median', each resulting chroma vector component is a median of all the component values in the segment
  - 'starting_beat', chroma vector is sampled from the start of the segment (that is, its starting beat position) using its first frame. It makes sense if chroma is preliminary smoothed.


Quality: experimental (algorithm needs evaluation)


References:
  [1] E. Gómez, "Tonal Description of Polyphonic Audio for Music Content
  Processing," INFORMS Journal on Computing, vol. 18, no. 3, pp. 294–304,
  2006.

  [2] D. Temperley, "What's key for key? The Krumhansl-Schmuckler
  key-finding algorithm reconsidered", Music Perception vol. 17, no. 1,
  pp. 65-100, 1999.


See also
--------

ChordsDetection `(standard) <std_ChordsDetection.html>`__
ChordsDetection `(streaming) <streaming_ChordsDetection.html>`__
HPCP `(standard) <std_HPCP.html>`__
HPCP `(streaming) <streaming_HPCP.html>`__
RMS `(standard) <std_RMS.html>`__
RMS `(streaming) <streaming_RMS.html>`__