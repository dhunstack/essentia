:orphan:

Algorithm reference - TonalExtractor (streaming mode)
=====================================================

Inputs
------

 - ``signal`` (*real*) - the input audio signal

Outputs
-------

 - ``chords_changes_rate`` (*real*) - See ChordsDescriptors algorithm documentation
 - ``chords_histogram`` (*vector_real*) - See ChordsDescriptors algorithm documentation
 - ``chords_key`` (*string*) - See ChordsDescriptors algorithm documentation
 - ``chords_number_rate`` (*real*) - See ChordsDescriptors algorithm documentation
 - ``chords_progression`` (*string*) - See ChordsDetection algorithm documentation
 - ``chords_scale`` (*string*) - See ChordsDetection algorithm documentation
 - ``chords_strength`` (*real*) - See ChordsDetection algorithm documentation
 - ``hpcp`` (*vector_real*) - See HPCP algorithm documentation
 - ``hpcp_highres`` (*vector_real*) - See HPCP algorithm documentation
 - ``key_key`` (*string*) - See Key algorithm documentation
 - ``key_scale`` (*string*) - See Key algorithm documentation
 - ``key_strength`` (*real*) - See Key algorithm documentation

Parameters
----------

 - ``frameSize`` (*integer ∈ (0, ∞), default = 4096*) :
     the framesize for computing tonal features
 - ``hopSize`` (*integer ∈ (0, ∞), default = 2048*) :
     the hopsize for computing tonal features
 - ``tuningFrequency`` (*real ∈ (0, ∞), default = 440*) :
     the tuning frequency of the input signal

Description
-----------

This algorithm computes tonal features for an audio signal


See also
--------

TonalExtractor `(standard) <std_TonalExtractor.html>`__