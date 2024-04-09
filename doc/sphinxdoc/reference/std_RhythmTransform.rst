:orphan:

Algorithm reference - RhythmTransform (standard mode)
=====================================================

Inputs
------

 - ``melBands`` (*vector_vector_real*) - the energies in the mel bands

Outputs
-------

 - ``rhythm`` (*vector_vector_real*) - consecutive frames in the rhythm domain

Parameters
----------

 - ``frameSize`` (*integer ∈ (0, ∞), default = 256*) :
     the frame size to compute the rhythm trasform
 - ``hopSize`` (*integer ∈ (0, ∞), default = 32*) :
     the hop size to compute the rhythm transform

Description
-----------

This algorithm implements the rhythm transform. It computes a tempogram, a representation of rhythmic periodicities in the input signal in the rhythm domain, by using FFT similarly to computation of spectrum in the frequency domain [1]. Additional features, including rhythmic centroid and a rhythmic counterpart of MFCCs, can be derived from this rhythmic representation.

The algorithm relies on a time sequence of frames of Mel bands energies as an input (see MelBands), but other types of frequency bands can be used as well (see BarkBands, ERBBands, FrequencyBands). For each band, the derivative of the frame to frame energy evolution is computed, and the periodicity of the resulting signal is computed: the signal is cut into frames of "frameSize" size and is analyzed with FFT. For each frame, the obtained power spectrums are summed across all bands forming a frame of rhythm transform values.

Quality: experimental (non-reliable, poor accuracy according to tests on simple loops, more tests are necessary)


References:
  [1] E. Guaus and P. Herrera, "The rhythm transform: towards a generic
  rhythm description," in International Computer Music Conference (ICMC’05),
  2005.


See also
--------

BarkBands `(standard) <std_BarkBands.html>`__
BarkBands `(streaming) <streaming_BarkBands.html>`__
ERBBands `(standard) <std_ERBBands.html>`__
ERBBands `(streaming) <streaming_ERBBands.html>`__
FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__
FrequencyBands `(standard) <std_FrequencyBands.html>`__
FrequencyBands `(streaming) <streaming_FrequencyBands.html>`__
MFCC `(standard) <std_MFCC.html>`__
MFCC `(streaming) <streaming_MFCC.html>`__
MelBands `(standard) <std_MelBands.html>`__
MelBands `(streaming) <streaming_MelBands.html>`__
RhythmTransform `(streaming) <streaming_RhythmTransform.html>`__