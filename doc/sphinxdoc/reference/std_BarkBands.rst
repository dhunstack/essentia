:orphan:

Algorithm reference - BarkBands (standard mode)
===============================================

Inputs
------

 - ``spectrum`` (*vector_real*) - the input spectrum

Outputs
-------

 - ``bands`` (*vector_real*) - the energy of the bark bands

Parameters
----------

 - ``numberBands`` (*integer ∈ [1, 28], default = 27*) :
     the number of desired barkbands
 - ``sampleRate`` (*real ∈ [0, ∞), default = 44100*) :
     the sampling rate of the audio signal [Hz]

Description
-----------

This algorithm computes energy in Bark bands of a spectrum. The band frequencies are: [0.0, 50.0, 100.0, 150.0, 200.0, 300.0, 400.0, 510.0, 630.0, 770.0, 920.0, 1080.0, 1270.0, 1480.0, 1720.0, 2000.0, 2320.0, 2700.0, 3150.0, 3700.0, 4400.0, 5300.0, 6400.0, 7700.0, 9500.0, 12000.0, 15500.0, 20500.0, 27000.0]. The first two Bark bands [0,100] and [100,200] have been split in half for better resolution (because of an observed better performance in beat detection). For each bark band the power-spectrum (mag-squared) is summed.

This algorithm uses FrequencyBands and thus inherits its input requirements and exceptions.


References:
  [1] The Bark Frequency Scale,
  http://ccrma.stanford.edu/~jos/bbt/Bark_Frequency_Scale.html


See also
--------

BarkBands `(streaming) <streaming_BarkBands.html>`__
FrequencyBands `(standard) <std_FrequencyBands.html>`__
FrequencyBands `(streaming) <streaming_FrequencyBands.html>`__
Scale `(standard) <std_Scale.html>`__
Scale `(streaming) <streaming_Scale.html>`__