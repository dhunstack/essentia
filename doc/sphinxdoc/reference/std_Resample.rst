:orphan:

Algorithm reference - Resample (standard mode)
==============================================

Inputs
------

 - ``signal`` (*vector_real*) - the input signal

Outputs
-------

 - ``signal`` (*vector_real*) - the resampled signal

Parameters
----------

 - ``inputSampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the input signal [Hz]
 - ``outputSampleRate`` (*real ∈ (0, ∞), default = 44100*) :
     the sampling rate of the output signal [Hz]
 - ``quality`` (*integer ∈ [0, 4], default = 1*) :
     the quality of the conversion, 0 for best quality, 4 for fast linear approximation

Description
-----------

This algorithm resamples the input signal to the desired sampling rate.

The quality of conversion is documented in [3].

This algorithm is only supported if essentia has been compiled with Real=float, otherwise it will throw an exception. It may also throw an exception if there is an internal error in the SRC library during conversion.


References:
  [1] Secret Rabbit Code, http://www.mega-nerd.com/SRC

  [2] Resampling - Wikipedia, the free encyclopedia
  http://en.wikipedia.org/wiki/Resampling

  [3] http://www.mega-nerd.com/SRC/api_misc.html#Converters


See also
--------

Resample `(streaming) <streaming_Resample.html>`__