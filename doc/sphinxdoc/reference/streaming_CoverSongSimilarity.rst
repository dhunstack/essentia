:orphan:

Algorithm reference - CoverSongSimilarity (streaming mode)
==========================================================

Inputs
------

 - ``inputArray`` (*vector_real*) - a 2D binary cross similarity matrix of two audio chroma vectors (refer CrossSimilarityMatrix algorithm').

Outputs
-------

 - ``scoreMatrix`` (*matrix_real*) - a 2D smith-waterman alignment score matrix from the input binary cross-similarity matrix as described in [2].
 - ``distance`` (*real*) - cover song similarity distance between the query and reference song from the input similarity. Either 'asymmetric' (as described in [2]) or 'symmetric' (maximum score in the alignment score matrix).

Parameters
----------

 - ``disExtension`` (*real ∈ [0, ∞), default = 0.5*) :
     penalty for disruption extension
 - ``disOnset`` (*real ∈ [0, ∞), default = 0.5*) :
     penalty for disruption onset
 - ``distanceType`` (*string ∈ {asymmetric, symmetric}, default = asymmetric*) :
     choose the type of distance. By default the algorithm outputs a asymmetric distance which is obtained by normalising the maximum score in the alignment score matrix with length of reference song
 - ``pipeDistance`` (*bool ∈ {true, false}, default = false*) :
     whether to pipe-out the computed cover song similarity distance for each stream of input similarity matrix

Description
-----------

This algorithm computes a cover song similiarity measure from a binary cross similarity matrix input between two chroma vectors of a query and reference song using various alignment constraints of smith-waterman local-alignment algorithm.

This algorithm expects to recieve the binary similarity matrix input from essentia 'ChromaCrossSimilarity' algorithm or essentia 'CrossSimilarityMatrix' with parameter 'binarize=True'.

The algorithm provides two different allignment contraints for computing the smith-waterman score matrix (check references).

Exceptions are thrown if the input similarity matrix is not binary or empty.


References:

[1] Smith-Waterman algorithm (Wikipedia, https://en.wikipedia.org/wiki/Smith%E2%80%93Waterman_algorithm).

[2] Serra, J., Serra, X., & Andrzejak, R. G. (2009). Cross recurrence quantification for cover song identification.New Journal of Physics.

[3] Chen, N., Li, W., & Xiao, H. (2017). Fusing similarity functions for cover song identification. Multimedia Tools and Applications.



See also
--------

ChromaCrossSimilarity `(standard) <std_ChromaCrossSimilarity.html>`__
ChromaCrossSimilarity `(streaming) <streaming_ChromaCrossSimilarity.html>`__
CoverSongSimilarity `(standard) <std_CoverSongSimilarity.html>`__
CrossSimilarityMatrix `(standard) <std_CrossSimilarityMatrix.html>`__