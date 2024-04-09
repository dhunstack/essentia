:orphan:

Algorithm reference - Onsets (standard mode)
============================================

Inputs
------

 - ``detections`` (*matrix_real*) - matrix containing onset detection functions--rows represent the values of different detection functions and columns represent different frames of audio (i.e. detections[i][j] represents the value of the ith detection function for the jth frame of audio)
 - ``weights`` (*vector_real*) - the weighting coefficicients for each detection function, must be the same as the first dimension of "detections"

Outputs
-------

 - ``onsets`` (*vector_real*) - the onset positions [s]

Parameters
----------

 - ``alpha`` (*real ∈ [0, 1], default = 0.1*) :
     the proportion of the mean included to reject smaller peaks--filters very short onsets
 - ``delay`` (*integer ∈ (0, ∞), default = 5*) :
     the number of frames used to compute the threshold--size of short-onset filter
 - ``frameRate`` (*real ∈ (0, ∞), default = 86.1328*) :
     frames per second
 - ``silenceThreshold`` (*real ∈ [0, 1], default = 0.02*) :
     the threshold for silence

Description
-----------

This algorithm computes onset positions given various onset detection functions.

The main operations are:

  - normalizing detection functions,
  - summing detection functions into a global detection function,
  - smoothing the global detection function,
  - thresholding the global detection function for silence,
  - finding the possible onsets using an adaptative threshold,
  - cleaning operations on the vector of possible onsets,
  - onsets time conversion.


Note:

  - This algorithm has been optimized for a frameRate of 44100.0/512.0.
  - At least one Detection function must be supplied at input.
  - The number of weights must match the number of detection functions.


As mentioned above, the "frameRate" parameter expects a value of 44100/512 (the default), but will work with other values, although the quality of the results is not guaranteed then. An exception is also thrown if the input "detections" matrix is empty. Finally, an exception is thrown if the size of the "weights" input does not equal the first dimension of the "detections" matrix.


References:
  [1] P. Brossier, J. P. Bello, and M. D. Plumbley, "Fast labelling of notes
  in music signals,” in International Symposium on Music Information
  Retrieval (ISMIR’04), 2004, pp. 331–336.


See also
--------

Onsets `(streaming) <streaming_Onsets.html>`__