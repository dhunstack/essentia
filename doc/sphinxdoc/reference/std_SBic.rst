:orphan:

Algorithm reference - SBic (standard mode)
==========================================

Inputs
------

 - ``features`` (*matrix_real*) - extracted features matrix (rows represent features, and columns represent frames of audio)

Outputs
-------

 - ``segmentation`` (*vector_real*) - a list of frame indices that indicate where a segment of audio begins/ends (the indices of the first and last frame are also added to the list at the beginning and end, respectively)

Parameters
----------

 - ``cpw`` (*real ∈ [0, ∞), default = 1.5*) :
     complexity penalty weight
 - ``inc1`` (*integer ∈ [1, ∞), default = 60*) :
     first pass increment [frames]
 - ``inc2`` (*integer ∈ [1, ∞), default = 20*) :
     second pass increment [frames]
 - ``minLength`` (*integer ∈ [1, ∞), default = 10*) :
     minimum length of a segment [frames]
 - ``size1`` (*integer ∈ [1, ∞), default = 300*) :
     first pass window size [frames]
 - ``size2`` (*integer ∈ [1, ∞), default = 200*) :
     second pass window size [frames]

Description
-----------

This algorithm segments audio using the Bayesian Information Criterion given a matrix of frame features. The algorithm searches homogeneous segments for which the feature vectors have the same probability distribution based on the implementation in [1]. The input matrix is assumed to have features along dim1 (horizontal) while frames along dim2 (vertical).

The segmentation is done in three phases: coarse segmentation, fine segmentation and segment validation. The first phase uses parameters 'size1' and 'inc1' to perform BIC segmentation. The second phase uses parameters 'size2' and 'inc2' to perform a local search for segmentation around the segmentation done by the first phase. Finally, the validation phase verifies that BIC differentials at segmentation points are positive as well as filters out any segments that are smaller than 'minLength'.

Because this algorithm takes as input feature vectors of frames, all units are in terms of frames. For example, if a 44100Hz audio signal is segmented as [0, 99, 199] with a frame size of 1024 and a hopsize of 512, this means, in the time domain, that the audio signal is segmented at [0s, 99*512/44100s, 199*512/44100s].

An exception is thrown if the input only contains one frame of features (i.e. second dimension is less than 2).


References:
  [1] Audioseg, http://audioseg.gforge.inria.fr

  [2] G. Gravier, M. Betser, and M. Ben, Audio Segmentation Toolkit,
  release 1.2, 2010. Available online:
  https://gforge.inria.fr/frs/download.php/25187/audioseg-1.2.pdf



See also
--------

SBic `(streaming) <streaming_SBic.html>`__