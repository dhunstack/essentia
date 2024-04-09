:orphan:

Algorithm reference - ChromaCrossSimilarity (standard mode)
===========================================================

Inputs
------

 - ``queryFeature`` (*vector_vector_real*) - frame-wise chromagram of the query song (e.g., a HPCP)
 - ``referenceFeature`` (*vector_vector_real*) - frame-wise chromagram of the reference song (e.g., a HPCP)

Outputs
-------

 - ``csm`` (*vector_vector_real*) - 2D binary cross-similarity matrix of the query and reference features

Parameters
----------

 - ``binarizePercentile`` (*real ∈ [0, 1], default = 0.095*) :
     maximum percent of distance values to consider as similar in each row and each column
 - ``frameStackSize`` (*integer ∈ [0, ∞), default = 9*) :
     number of input frames to stack together and treat as a feature vector for similarity computation. Choose 'frameStackSize=1' to use the original input frames without stacking
 - ``frameStackStride`` (*integer ∈ [1, ∞), default = 1*) :
     stride size to form a stack of frames (e.g., 'frameStackStride'=1 to use consecutive frames; 'frameStackStride'=2 for using every second frame)
 - ``noti`` (*integer ∈ [0, ∞), default = 12*) :
     number of circular shifts to be checked for Optimal Transposition Index [1]
 - ``oti`` (*bool ∈ {true, false}, default = true*) :
     whether to transpose the key of the reference song to the query song by Optimal Transposition Index [1]
 - ``otiBinary`` (*bool ∈ {true, false}, default = false*) :
     whether to use the OTI-based chroma binary similarity method [3]
 - ``streaming`` (*bool ∈ {true, false}, default = false*) :
     whether to accumulate the input 'queryFeature' in the euclidean similarity matrix calculation on each compute() method call

Description
-----------

This algorithm computes a binary cross similarity matrix from two chromagam feature vectors of a query and reference song.

With default parameters, this algorithm computes cross-similarity of two given input chromagrams as described in [2].

Use HPCP algorithm for computing the chromagram with default parameters of this algorithm for the best results.

If parameter 'oti=True', the algorithm transpose the reference song chromagram by optimal transposition index as described in [1].

If parameter 'otiBinary=True', the algorithm computes the binary cross-similarity matrix based on optimal transposition index between each feature pairs instead of euclidean distance as described in [3].

The input chromagram should be in the shape (n_frames, numbins), where 'n_frames' is number of frames and 'numbins' for the number of bins in the chromagram. An exception is thrown otherwise.

An exception is also thrown if either one of the input chromagrams are empty.

While param 'streaming=True', the algorithm accumulates the input 'queryFeature' in the pairwise similarity matrix calculation on each call of compute() method. You can reset it using the reset() method.


References:

[1] Serra, J., Gómez, E., & Herrera, P. (2008). Transposing chroma representations to a common key, IEEE Conference on The Use of Symbols to Represent Music and Multimedia Objects.

[2] Serra, J., Serra, X., & Andrzejak, R. G. (2009). Cross recurrence quantification for cover song identification.New Journal of Physics.

[3] Serra, Joan, et al. Chroma binary similarity and local alignment applied to cover song identification. IEEE Transactions on Audio, Speech, and Language Processing 16.6 (2008).



See also
--------

ChromaCrossSimilarity `(streaming) <streaming_ChromaCrossSimilarity.html>`__
HPCP `(standard) <std_HPCP.html>`__
HPCP `(streaming) <streaming_HPCP.html>`__