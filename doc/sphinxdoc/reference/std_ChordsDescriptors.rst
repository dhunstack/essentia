:orphan:

Algorithm reference - ChordsDescriptors (standard mode)
=======================================================

Inputs
------

 - ``chords`` (*vector_string*) - the chord progression
 - ``key`` (*string*) - the key of the whole song, from A to G
 - ``scale`` (*string*) - the scale of the whole song (major or minor)

Outputs
-------

 - ``chordsHistogram`` (*vector_real*) - the normalized histogram of chords
 - ``chordsNumberRate`` (*real*) - the ratio of different chords from the total number of chords in the progression
 - ``chordsChangesRate`` (*real*) - the rate at which chords change in the progression
 - ``chordsKey`` (*string*) - the most frequent chord of the progression
 - ``chordsScale`` (*string*) - the scale of the most frequent chord of the progression (either 'major' or 'minor')

Description
-----------

Given a chord progression this algorithm describes it by means of key, scale, histogram, and rate of change.
Note:

  - chordsHistogram indexes follow the circle of fifths order, while being shifted to the input key and scale
  - key and scale are taken from the most frequent chord. In the case where multiple chords are equally frequent, the chord is hierarchically chosen from the circle of fifths.
  - chords should follow this name convention `<A-G>[<#/b><m>]` (i.e. C, C# or C#m are valid chords). Chord names not fitting this convention will throw an exception.


Input chords vector may not be empty, otherwise an exception is thrown.


References:
  [1] Chord progression - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Chord_progression

  [2] Circle of fifths - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Circle_of_fifths


See also
--------

ChordsDescriptors `(streaming) <streaming_ChordsDescriptors.html>`__
Histogram `(standard) <std_Histogram.html>`__
Histogram `(streaming) <streaming_Histogram.html>`__