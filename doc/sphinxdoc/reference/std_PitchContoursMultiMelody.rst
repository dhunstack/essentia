:orphan:

Algorithm reference - PitchContoursMultiMelody (standard mode)
==============================================================

Inputs
------

 - ``contoursBins`` (*vector_vector_real*) - array of frame-wise vectors of cent bin values representing each contour
 - ``contoursSaliences`` (*vector_vector_real*) - array of frame-wise vectors of pitch saliences representing each contour
 - ``contoursStartTimes`` (*vector_real*) - array of the start times of each contour [s]
 - ``duration`` (*real*) - time duration of the input signal [s]

Outputs
-------

 - ``pitch`` (*vector_vector_real*) - vector of estimated pitch values (i.e., melody) [Hz]

Parameters
----------

 - ``binResolution`` (*real ∈ (0, ∞), default = 10*) :
     salience function bin resolution [cents]
 - ``filterIterations`` (*integer ∈ [1, ∞), default = 3*) :
     number of interations for the octave errors / pitch outlier filtering process
 - ``guessUnvoiced`` (*bool ∈ {false, true}, default = false*) :
     Estimate pitch for non-voiced segments by using non-salient contours when no salient ones are present in a frame
 - ``hopSize`` (*integer ∈ (0, ∞), default = 128*) :
     the hop size with which the pitch salience function was computed
 - ``maxFrequency`` (*real ∈ [0, ∞), default = 20000*) :
     the maximum allowed frequency for salience function peaks (ignore contours with peaks above) [Hz]
 - ``minFrequency`` (*real ∈ [0, ∞), default = 80*) :
     the minimum allowed frequency for salience function peaks (ignore contours with peaks below) [Hz]
 - ``referenceFrequency`` (*real ∈ (0, ∞), default = 55*) :
     the reference frequency for Hertz to cent convertion [Hz], corresponding to the 0th cent bin
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal (Hz)

Description
-----------

This algorithm post-processes a set of pitch contours into a sequence of mutliple f0 values in Hz.
This algorithm is intended to receive its "contoursBins", "contoursSaliences", and "contoursStartTimes" inputs from the PitchContours algorithm. The "duration" input corresponds to the time duration of the input signal. The output is a vector of estimated pitch values

When input vectors differ in size, or "numberFrames" is negative, an exception is thrown. Input vectors must not contain negative start indices nor negative bin and salience values otherwise an exception is thrown.


References:
  [1] J. Salamon and E. Gómez, "Melody extraction from polyphonic music
  signals using pitch contour characteristics," IEEE Transactions on Audio,
  Speech, and Language Processing, vol. 20, no. 6, pp. 1759–1770, 2012.



See also
--------

PitchContours `(standard) <std_PitchContours.html>`__
PitchContours `(streaming) <streaming_PitchContours.html>`__
PitchContoursMultiMelody `(streaming) <streaming_PitchContoursMultiMelody.html>`__