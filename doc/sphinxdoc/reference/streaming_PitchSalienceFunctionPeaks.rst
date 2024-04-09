:orphan:

Algorithm reference - PitchSalienceFunctionPeaks (streaming mode)
=================================================================

Inputs
------

 - ``salienceFunction`` (*vector_real*) - the array of salience function values corresponding to cent frequency bins

Outputs
-------

 - ``salienceBins`` (*vector_real*) - the cent bins corresponding to salience function peaks
 - ``salienceValues`` (*vector_real*) - the values of salience function peaks

Parameters
----------

 - ``binResolution`` (*real ∈ (0, ∞), default = 10*) :
     salience function bin resolution [cents]
 - ``maxFrequency`` (*real ∈ [0, ∞), default = 1760*) :
     the maximum frequency to evaluate (ignore peaks above) [Hz]
 - ``minFrequency`` (*real ∈ [0, ∞), default = 55*) :
     the minimum frequency to evaluate (ignore peaks below) [Hz]
 - ``referenceFrequency`` (*real ∈ (0, ∞), default = 55*) :
     the reference frequency for Hertz to cent convertion [Hz], corresponding to the 0th cent bin

Description
-----------

This algorithm computes the peaks of a given pitch salience function.

This algorithm is intended to receive its "salienceFunction" input from the PitchSalienceFunction algorithm. The peaks are detected using PeakDetection algorithm. The outputs are two arrays of bin numbers and salience values corresponding to the peaks.


References:
  [1] Salamon, J., & Gómez E. (2012).  Melody Extraction from Polyphonic Music Signals using Pitch Contour Characteristics.
      IEEE Transactions on Audio, Speech and Language Processing. 20(6), 1759-1770.



See also
--------

PeakDetection `(standard) <std_PeakDetection.html>`__
PeakDetection `(streaming) <streaming_PeakDetection.html>`__
PitchSalience `(standard) <std_PitchSalience.html>`__
PitchSalience `(streaming) <streaming_PitchSalience.html>`__
PitchSalienceFunction `(standard) <std_PitchSalienceFunction.html>`__
PitchSalienceFunction `(streaming) <streaming_PitchSalienceFunction.html>`__
PitchSalienceFunctionPeaks `(standard) <std_PitchSalienceFunctionPeaks.html>`__