:orphan:

Algorithm reference - CrossSimilarityMatrix (standard mode)
===========================================================

Inputs
------

 - ``queryFeature`` (*vector_vector_real*) - input frame features of the query song (e.g., a chromagram)
 - ``referenceFeature`` (*vector_vector_real*) - input frame features of the reference song (e.g., a chromagram)

Outputs
-------

 - ``csm`` (*vector_vector_real*) - 2D cross-similarity matrix of two input frame sequences (query vs reference)

Parameters
----------

 - ``binarize`` (*bool ∈ {true, false}, default = false*) :
     whether to binarize the euclidean cross-similarity matrix
 - ``binarizePercentile`` (*real ∈ [0, 1], default = 0.095*) :
     maximum percent of distance values to consider as similar in each row and each column
 - ``frameStackSize`` (*integer ∈ [0, ∞), default = 1*) :
     number of input frames to stack together and treat as a feature vector for similarity computation. Choose 'frameStackSize=1' to use the original input frames without stacking
 - ``frameStackStride`` (*integer ∈ [1, ∞), default = 1*) :
     stride size to form a stack of frames (e.g., 'frameStackStride'=1 to use consecutive frames; 'frameStackStride'=2 for using every second frame)

Description
-----------

This algorithm computes a euclidean cross-similarity matrix of two sequences of frame features. Similarity values can be optionally binarized

The default parameters for binarizing are optimized according to [1] for cover song identification using chroma features. 

The input feature arrays are vectors of frames of features in the shape (n_frames, n_features), where 'n_frames' is the number frames, 'n_features' is the number of frame features.

An exception is also thrown if either one of the input feature arrays are empty or if the output similarity matrix is empty.


References:

[1] Serra, J., Serra, X., & Andrzejak, R. G. (2009). Cross recurrence quantification for cover song identification. New Journal of Physics.



