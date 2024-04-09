:orphan:

Algorithm reference - Windowing (streaming mode)
================================================

Inputs
------

 - ``frame`` (*vector_real*) - the input audio frame

Outputs
-------

 - ``frame`` (*vector_real*) - the windowed audio frame

Parameters
----------

 - ``constantsDecimals`` (*integer ∈ [1, 5], default = 5*) :
     number of decimals considered in the constants for the formulation of the hamming and blackmanharris\* windows 
 - ``normalized`` (*bool ∈ {true, false}, default = true*) :
     a boolean value to specify whether to normalize windows (to have an area of 1) and then scale by a factor of 2
 - ``size`` (*integer ∈ [2, ∞), default = 1024*) :
     the window size
 - ``splitPadding`` (*bool ∈ {true, false}, default = false*) :
     whether to split the padding to the edges of the signal (_/\_) or to add it to the right (/\__). This option is ignored when zeroPhase (\__/) is true
 - ``symmetric`` (*bool ∈ {true, false}, default = true*) :
     whether to create a symmetric or asymmetric window as implemented in SciPy
 - ``type`` (*string ∈ {hamming, hann, hannnsgcq, triangular, square, blackmanharris62, blackmanharris70, blackmanharris74, blackmanharris92}, default = hann*) :
     the window type
 - ``zeroPadding`` (*integer ∈ [0, ∞), default = 0*) :
     the size of the zero-padding
 - ``zeroPhase`` (*bool ∈ {true, false}, default = true*) :
     a boolean value that enables zero-phase windowing

Description
-----------

This algorithm applies windowing to an audio signal. It optionally applies zero-phase windowing and optionally adds zero-padding. The resulting windowed frame size is equal to the incoming frame size plus the number of padded zeros. By default, the available windows are normalized (to have an area of 1) and then scaled by a factor of 2.

The parameter constantsDecimals allows choosing the number of decimals used in the constants for the formulation of the Hamming and Blackman-Harris windows, which allows replicating alternative windowing implementations. For example, setting type='hamming', constantsDecimals=2, normalized=False, and zeroPhase=False results in a Hamming window similar to the default SciPy implementation [3].

An exception is thrown if the size of the frame is less than 2.


References:
  [1] F. J. Harris, "On the use of windows for harmonic analysis with the
  discrete Fourier transform, Proceedings of the IEEE, vol. 66, no. 1,
  pp. 51-83, Jan. 1978

  [2] Window function - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Window_function

  [3] Hamming window - SciPy documentation,
  https://docs.scipy.org/doc/scipy/reference/generated/scipy.signal.windows.hamming.html


See also
--------

Windowing `(standard) <std_Windowing.html>`__