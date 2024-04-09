:orphan:

Algorithm reference - PCA (standard mode)
=========================================

Inputs
------

 - ``poolIn`` (*pool*) - the pool where to get the spectral contrast feature vectors

Outputs
-------

 - ``poolOut`` (*pool*) - the pool where to store the transformed feature vectors

Parameters
----------

 - ``dimensions`` (*integer ∈ [0, ∞), default = 0*) :
     number of dimension to reduce the input to
 - ``namespaceIn`` (*string, default = spectral contrast*) :
     will look for this namespace in poolIn
 - ``namespaceOut`` (*string, default = spectral contrast pca*) :
     will save to this namespace in poolOut

Description
-----------

This algorithm applies Principal Component Analysis based on the covariance matrix of the signal.


References:
  [1] Principal component analysis - Wikipedia, the free enciclopedia
  http://en.wikipedia.org/wiki/Principal_component_analysis

