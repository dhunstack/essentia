:orphan:

Algorithm reference - HPCP (streaming mode)
===========================================

Inputs
------

 - ``frequencies`` (*vector_real*) - the frequencies of the spectral peaks [Hz]
 - ``magnitudes`` (*vector_real*) - the magnitudes of the spectral peaks

Outputs
-------

 - ``hpcp`` (*vector_real*) - the resulting harmonic pitch class profile

Parameters
----------

 - ``bandPreset`` (*bool ∈ {true, false}, default = true*) :
     enables whether to use a band preset
 - ``bandSplitFrequency`` (*real ∈ (0, ∞), default = 500*) :
     the split frequency for low and high bands, not used if bandPreset is false [Hz]
 - ``harmonics`` (*integer ∈ [0, ∞), default = 0*) :
     number of harmonics for frequency contribution, 0 indicates exclusive fundamental frequency contribution
 - ``maxFrequency`` (*real ∈ (0, ∞), default = 5000*) :
     the maximum frequency that contributes to the HPCP [Hz] (the difference between the max and split frequencies must not be less than 200.0 Hz)
 - ``maxShifted`` (*bool ∈ {true, false}, default = false*) :
     whether to shift the HPCP vector so that the maximum peak is at index 0
 - ``minFrequency`` (*real ∈ (0, ∞), default = 40*) :
     the minimum frequency that contributes to the HPCP [Hz] (the difference between the min and split frequencies must not be less than 200.0 Hz)
 - ``nonLinear`` (*bool ∈ {true, false}, default = false*) :
     apply non-linear post-processing to the output (use with normalized='unitMax'). Boosts values close to 1, decreases values close to 0.
 - ``normalized`` (*string ∈ {none, unitSum, unitMax}, default = unitMax*) :
     whether to normalize the HPCP vector
 - ``referenceFrequency`` (*real ∈ (0, ∞), default = 440*) :
     the reference frequency for semitone index calculation, corresponding to A3 [Hz]
 - ``sampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]
 - ``size`` (*integer ∈ [12, ∞), default = 12*) :
     the size of the output HPCP (must be a positive nonzero multiple of 12)
 - ``weightType`` (*string ∈ {none, cosine, squaredCosine}, default = squaredCosine*) :
     type of weighting function for determining frequency contribution
 - ``windowSize`` (*real ∈ (0, 12], default = 1*) :
     the size, in semitones, of the window used for the weighting

Description
-----------

Computes a Harmonic Pitch Class Profile (HPCP) from the spectral peaks of a signal. HPCP is a k*12 dimensional vector which represents the intensities of the twelve (k==1) semitone pitch classes (corresponsing to notes from A to G#), or subdivisions of these (k>1).

Exceptions are thrown if "minFrequency", "bandSplitFrequency" and "maxFrequency" are not separated by at least 200Hz from each other, requiring that "maxFrequency" be greater than "bandSplitFrequency" and "bandSplitFrequency" be greater than "minFrequency". Other exceptions are thrown if input vectors have different size, if parameter "size" is not a positive non-zero multiple of 12 or if "windowSize" is less than one hpcp bin (12/size).


References:
  [1] T. Fujishima, "Realtime Chord Recognition of Musical Sound: A System
  Using Common Lisp Music," in International Computer Music Conference
  (ICMC'99), pp. 464-467, 1999.

  [2] E. Gómez, "Tonal Description of Polyphonic Audio for Music Content
  Processing," INFORMS Journal on Computing, vol. 18, no. 3, pp. 294–304,
  2006.

  [3] Harmonic pitch class profiles - Wikipedia, the free encyclopedia,
  https://en.wikipedia.org/wiki/Harmonic_pitch_class_profiles


See also
--------

HPCP `(standard) <std_HPCP.html>`__
RMS `(standard) <std_RMS.html>`__
RMS `(streaming) <streaming_RMS.html>`__