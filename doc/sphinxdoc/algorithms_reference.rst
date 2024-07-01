Algorithms reference
=====================

Here is the complete list of algorithms which you can access from the Python interface.

The C++ interface allows access to the same algorithms, and also some more which are templated and hence are not available in python.

Envelope/SFX
------------

AfterMaxToBeforeMaxEnergyRatio
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_AfterMaxToBeforeMaxEnergyRatio>`, :doc:`streaming <reference/streaming_AfterMaxToBeforeMaxEnergyRatio>`)

Computes the ratio between the pitch energy after the pitch maximum and the pitch energy before the pitch maximum


DerivativeSFX
^^^^^^^^^^^^^

(:doc:`standard <reference/std_DerivativeSFX>`, :doc:`streaming <reference/streaming_DerivativeSFX>`)

Computes two descriptors that are based on the derivative of a signal envelope


Envelope
^^^^^^^^

(:doc:`standard <reference/std_Envelope>`, :doc:`streaming <reference/streaming_Envelope>`)

Computes the envelope of a signal by applying a non-symmetric lowpass filter on a signal


FlatnessSFX
^^^^^^^^^^^

(:doc:`standard <reference/std_FlatnessSFX>`, :doc:`streaming <reference/streaming_FlatnessSFX>`)

Calculates the flatness coefficient of a signal envelope


LogAttackTime
^^^^^^^^^^^^^

(:doc:`standard <reference/std_LogAttackTime>`, :doc:`streaming <reference/streaming_LogAttackTime>`)

Computes the log (base 10) of the attack time of a signal envelope


MaxToTotal
^^^^^^^^^^

(:doc:`standard <reference/std_MaxToTotal>`, :doc:`streaming <reference/streaming_MaxToTotal>`)

Computes the ratio between the index of the maximum value of the envelope of a signal and the total length of the envelope


MinToTotal
^^^^^^^^^^

(:doc:`standard <reference/std_MinToTotal>`, :doc:`streaming <reference/streaming_MinToTotal>`)

Computes the ratio between the index of the minimum value of the envelope of a signal and the total length of the envelope


StrongDecay
^^^^^^^^^^^

(:doc:`standard <reference/std_StrongDecay>`, :doc:`streaming <reference/streaming_StrongDecay>`)

Computes the Strong Decay of an audio signal


TCToTotal
^^^^^^^^^

(:doc:`standard <reference/std_TCToTotal>`, :doc:`streaming <reference/streaming_TCToTotal>`)

Calculates the ratio of the temporal centroid to the total length of a signal envelope

Filters
-------

AllPass
^^^^^^^

(:doc:`standard <reference/std_AllPass>`, :doc:`streaming <reference/streaming_AllPass>`)

Implements a IIR all-pass filter of order 1 or 2


BandPass
^^^^^^^^

(:doc:`standard <reference/std_BandPass>`, :doc:`streaming <reference/streaming_BandPass>`)

Implements a 2nd order IIR band-pass filter


BandReject
^^^^^^^^^^

(:doc:`standard <reference/std_BandReject>`, :doc:`streaming <reference/streaming_BandReject>`)

Implements a 2nd order IIR band-reject filter


DCRemoval
^^^^^^^^^

(:doc:`standard <reference/std_DCRemoval>`, :doc:`streaming <reference/streaming_DCRemoval>`)

Removes the DC offset from a signal using a 1st order IIR highpass filter


EqualLoudness
^^^^^^^^^^^^^

(:doc:`standard <reference/std_EqualLoudness>`, :doc:`streaming <reference/streaming_EqualLoudness>`)

Implements an equal-loudness filter


HighPass
^^^^^^^^

(:doc:`standard <reference/std_HighPass>`, :doc:`streaming <reference/streaming_HighPass>`)

Implements a 1st order IIR high-pass filter


IIR
^^^

(:doc:`standard <reference/std_IIR>`, :doc:`streaming <reference/streaming_IIR>`)

Implements a standard IIR filter


LowPass
^^^^^^^

(:doc:`standard <reference/std_LowPass>`, :doc:`streaming <reference/streaming_LowPass>`)

Implements a 1st order IIR low-pass filter


MaxFilter
^^^^^^^^^

(:doc:`standard <reference/std_MaxFilter>`, :doc:`streaming <reference/streaming_MaxFilter>`)

Implements a maximum filter for 1d signal using van Herk/Gil-Werman (HGW) algorithm


MedianFilter
^^^^^^^^^^^^

(:doc:`standard <reference/std_MedianFilter>`, :doc:`streaming <reference/streaming_MedianFilter>`)

Computes the median filtered version of the input signal giving the kernel size as detailed in [1]


MovingAverage
^^^^^^^^^^^^^

(:doc:`standard <reference/std_MovingAverage>`, :doc:`streaming <reference/streaming_MovingAverage>`)

Implements a FIR Moving Average filter

Input/output
------------

AudioLoader
^^^^^^^^^^^

(:doc:`standard <reference/std_AudioLoader>`, :doc:`streaming <reference/streaming_AudioLoader>`)

Loads the single audio stream contained in a given audio or video file


AudioOnsetsMarker
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_AudioOnsetsMarker>`, :doc:`streaming <reference/streaming_AudioOnsetsMarker>`)

Creates a wave file in which a given audio signal is mixed with a series of time onsets


AudioWriter
^^^^^^^^^^^

(:doc:`standard <reference/std_AudioWriter>`, :doc:`streaming <reference/streaming_AudioWriter>`)

Encodes an input stereo signal into a stereo audio file


EasyLoader
^^^^^^^^^^

(:doc:`standard <reference/std_EasyLoader>`, :doc:`streaming <reference/streaming_EasyLoader>`)

Loads the raw audio data from an audio file, downmixes it to mono and normalizes using replayGain


EqloudLoader
^^^^^^^^^^^^

(:doc:`standard <reference/std_EqloudLoader>`, :doc:`streaming <reference/streaming_EqloudLoader>`)

Loads the raw audio data from an audio file, downmixes it to mono and normalizes using replayGain and equal-loudness filter


FileOutput
^^^^^^^^^^

(:doc:`streaming <reference/streaming_FileOutput>`)

Stores alphanumeric data into text or binary files


MetadataReader
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_MetadataReader>`, :doc:`streaming <reference/streaming_MetadataReader>`)

Loads the metadata tags from an audio file as well as outputs its audio properties


MonoLoader
^^^^^^^^^^

(:doc:`standard <reference/std_MonoLoader>`, :doc:`streaming <reference/streaming_MonoLoader>`)

Loads the raw audio data from an audio file and downmixes it to mono


MonoWriter
^^^^^^^^^^

(:doc:`standard <reference/std_MonoWriter>`, :doc:`streaming <reference/streaming_MonoWriter>`)

Writes a mono audio stream to a file


VectorInput
^^^^^^^^^^^

(:doc:`streaming <reference/streaming_VectorInput>`)

Can be used as the starting point of a streaming network


YamlInput
^^^^^^^^^

(:doc:`standard <reference/std_YamlInput>`)

Deserializes a file formatted in YAML to a Pool


YamlOutput
^^^^^^^^^^

(:doc:`standard <reference/std_YamlOutput>`)

Emits a YAML or JSON representation of a Pool

Standard
--------

AutoCorrelation
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_AutoCorrelation>`, :doc:`streaming <reference/streaming_AutoCorrelation>`)

Computes the autocorrelation vector of a signal


BPF
^^^

(:doc:`standard <reference/std_BPF>`, :doc:`streaming <reference/streaming_BPF>`)

Implements a break point function which linearly interpolates between discrete xy-coordinates to construct a continuous function


BinaryOperator
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_BinaryOperator>`, :doc:`streaming <reference/streaming_BinaryOperator>`)

Performs basic arithmetical operations element by element given two arrays


BinaryOperatorStream
^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_BinaryOperatorStream>`, :doc:`streaming <reference/streaming_BinaryOperatorStream>`)

Performs basic arithmetical operations element by element given two arrays


Clipper
^^^^^^^

(:doc:`standard <reference/std_Clipper>`, :doc:`streaming <reference/streaming_Clipper>`)

Clips the input signal to fit its values into a specified interval


ConstantQ
^^^^^^^^^

(:doc:`standard <reference/std_ConstantQ>`, :doc:`streaming <reference/streaming_ConstantQ>`)

Computes Constant Q Transform using the FFT for fast calculation


CrossCorrelation
^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_CrossCorrelation>`, :doc:`streaming <reference/streaming_CrossCorrelation>`)

Computes the cross-correlation vector of two signals


CubicSpline
^^^^^^^^^^^

(:doc:`standard <reference/std_CubicSpline>`, :doc:`streaming <reference/streaming_CubicSpline>`)

Computes the second derivatives of a piecewise cubic spline


DCT
^^^

(:doc:`standard <reference/std_DCT>`, :doc:`streaming <reference/streaming_DCT>`)

Computes the Discrete Cosine Transform of an array


Derivative
^^^^^^^^^^

(:doc:`standard <reference/std_Derivative>`, :doc:`streaming <reference/streaming_Derivative>`)

Returns the first-order derivative of an input signal


FFT
^^^

(:doc:`standard <reference/std_FFT>`, :doc:`streaming <reference/streaming_FFT>`)

Computes the positive complex short-term Fourier transform (STFT) of an array using the FFT algorithm


FFTC
^^^^

(:doc:`standard <reference/std_FFTC>`, :doc:`streaming <reference/streaming_FFTC>`)

Computes the complex short-term Fourier transform (STFT) of a complex array using the FFT algorithm


FrameCutter
^^^^^^^^^^^

(:doc:`standard <reference/std_FrameCutter>`, :doc:`streaming <reference/streaming_FrameCutter>`)

Slices the input buffer into frames


FrameGenerator
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_FrameGenerator>`)

The FrameGenerator is a Python generator for the FrameCutter algorithm


FrameToReal
^^^^^^^^^^^

(:doc:`standard <reference/std_FrameToReal>`, :doc:`streaming <reference/streaming_FrameToReal>`)

Converts a sequence of input audio signal frames into a sequence of audio samples


IDCT
^^^^

(:doc:`standard <reference/std_IDCT>`, :doc:`streaming <reference/streaming_IDCT>`)

Computes the Inverse Discrete Cosine Transform of an array


IFFT
^^^^

(:doc:`standard <reference/std_IFFT>`, :doc:`streaming <reference/streaming_IFFT>`)

Calculates the inverse short-term Fourier transform (STFT) of an array of complex values using the FFT algorithm


IFFTC
^^^^^

(:doc:`standard <reference/std_IFFTC>`, :doc:`streaming <reference/streaming_IFFTC>`)

Calculates the inverse short-term Fourier transform (STFT) of an array of complex values using the FFT algorithm


MinMax
^^^^^^

(:doc:`standard <reference/std_MinMax>`, :doc:`streaming <reference/streaming_MinMax>`)

Calculates the minimum or maximum value of an array


MonoMixer
^^^^^^^^^

(:doc:`standard <reference/std_MonoMixer>`, :doc:`streaming <reference/streaming_MonoMixer>`)

Downmixes the signal into a single channel given a stereo signal


Multiplexer
^^^^^^^^^^^

(:doc:`standard <reference/std_Multiplexer>`, :doc:`streaming <reference/streaming_Multiplexer>`)

Returns a single vector from a given number of real values and/or frames


NSGConstantQ
^^^^^^^^^^^^

(:doc:`standard <reference/std_NSGConstantQ>`, :doc:`streaming <reference/streaming_NSGConstantQ>`)

Computes a constant Q transform using non stationary Gabor frames and returns a complex time-frequency representation of the input vector


NSGConstantQStreaming
^^^^^^^^^^^^^^^^^^^^^

(:doc:`streaming <reference/streaming_NSGConstantQStreaming>`)

Computes a constant Q transform using non stationary Gabor frames and returns a complex time-frequency representation of the input vector


NSGIConstantQ
^^^^^^^^^^^^^

(:doc:`standard <reference/std_NSGIConstantQ>`, :doc:`streaming <reference/streaming_NSGIConstantQ>`)

Computes an inverse constant Q transform using non stationary Gabor frames and returns a complex time-frequency representation of the input vector


NoiseAdder
^^^^^^^^^^

(:doc:`standard <reference/std_NoiseAdder>`, :doc:`streaming <reference/streaming_NoiseAdder>`)

Adds noise to an input signal


OverlapAdd
^^^^^^^^^^

(:doc:`standard <reference/std_OverlapAdd>`, :doc:`streaming <reference/streaming_OverlapAdd>`)

Returns the output of an overlap-add process for a sequence of frames of an audio signal


PeakDetection
^^^^^^^^^^^^^

(:doc:`standard <reference/std_PeakDetection>`, :doc:`streaming <reference/streaming_PeakDetection>`)

Detects local maxima (peaks) in an array


PoolToTensor
^^^^^^^^^^^^

(:doc:`streaming <reference/streaming_PoolToTensor>`)

Retrieve a tensor from a pool under a given namespace


RealAccumulator
^^^^^^^^^^^^^^^

(:doc:`streaming <reference/streaming_RealAccumulator>`)

Takes a stream of Real values and outputs them as a single vector when the end of the stream is reached


Resample
^^^^^^^^

(:doc:`standard <reference/std_Resample>`, :doc:`streaming <reference/streaming_Resample>`)

Resamples the input signal to the desired sampling rate


Scale
^^^^^

(:doc:`standard <reference/std_Scale>`, :doc:`streaming <reference/streaming_Scale>`)

Scales the audio by the specified factor using clipping if required


Slicer
^^^^^^

(:doc:`standard <reference/std_Slicer>`, :doc:`streaming <reference/streaming_Slicer>`)

Splits an audio signal into segments given their start and end times


Spline
^^^^^^

(:doc:`standard <reference/std_Spline>`, :doc:`streaming <reference/streaming_Spline>`)

Evaluates a piecewise spline of type b, beta or quadratic


StereoDemuxer
^^^^^^^^^^^^^

(:doc:`standard <reference/std_StereoDemuxer>`, :doc:`streaming <reference/streaming_StereoDemuxer>`)

Outputs left and right channel separately given a stereo signal


StereoMuxer
^^^^^^^^^^^

(:doc:`standard <reference/std_StereoMuxer>`, :doc:`streaming <reference/streaming_StereoMuxer>`)

Outputs a stereo signal given left and right channel separately


StereoTrimmer
^^^^^^^^^^^^^

(:doc:`standard <reference/std_StereoTrimmer>`, :doc:`streaming <reference/streaming_StereoTrimmer>`)

Extracts a segment of a stereo audio signal given its start and end times


TensorNormalize
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorNormalize>`, :doc:`streaming <reference/streaming_TensorNormalize>`)

Performs normalization over a tensor


TensorToPool
^^^^^^^^^^^^

(:doc:`streaming <reference/streaming_TensorToPool>`)

Inserts a tensor into a pool under a given namespace


TensorToVectorReal
^^^^^^^^^^^^^^^^^^

(:doc:`streaming <reference/streaming_TensorToVectorReal>`)

Streams the frames of the input tensor along a given namespace 


TensorTranspose
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorTranspose>`, :doc:`streaming <reference/streaming_TensorTranspose>`)

Performs transpositions over the axes of a tensor


Trimmer
^^^^^^^

(:doc:`standard <reference/std_Trimmer>`, :doc:`streaming <reference/streaming_Trimmer>`)

Extracts a segment of an audio signal given its start and end times


UnaryOperator
^^^^^^^^^^^^^

(:doc:`standard <reference/std_UnaryOperator>`, :doc:`streaming <reference/streaming_UnaryOperator>`)

Performs basic arithmetical operations element by element given an array


UnaryOperatorStream
^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_UnaryOperatorStream>`, :doc:`streaming <reference/streaming_UnaryOperatorStream>`)

Performs basic arithmetical operations element by element given an array


VectorRealAccumulator
^^^^^^^^^^^^^^^^^^^^^

(:doc:`streaming <reference/streaming_VectorRealAccumulator>`)

Takes a stream of Real values and outputs them as a single vector when the end of the stream is reached


VectorRealToTensor
^^^^^^^^^^^^^^^^^^

(:doc:`streaming <reference/streaming_VectorRealToTensor>`)

Generates tensors out of a stream of input frames


WarpedAutoCorrelation
^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_WarpedAutoCorrelation>`, :doc:`streaming <reference/streaming_WarpedAutoCorrelation>`)

Computes the warped auto-correlation of an audio signal


Welch
^^^^^

(:doc:`standard <reference/std_Welch>`, :doc:`streaming <reference/streaming_Welch>`)

 estimates the Power Spectral Density of the input signal using the Welch's method [1]


Windowing
^^^^^^^^^

(:doc:`standard <reference/std_Windowing>`, :doc:`streaming <reference/streaming_Windowing>`)

Applies windowing to an audio signal


ZeroCrossingRate
^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_ZeroCrossingRate>`, :doc:`streaming <reference/streaming_ZeroCrossingRate>`)

Computes the zero-crossing rate of an audio signal

Spectral
--------

BFCC
^^^^

(:doc:`standard <reference/std_BFCC>`, :doc:`streaming <reference/streaming_BFCC>`)

Computes the bark-frequency cepstrum coefficients of a spectrum


BarkBands
^^^^^^^^^

(:doc:`standard <reference/std_BarkBands>`, :doc:`streaming <reference/streaming_BarkBands>`)

Computes energy in Bark bands of a spectrum


ERBBands
^^^^^^^^

(:doc:`standard <reference/std_ERBBands>`, :doc:`streaming <reference/streaming_ERBBands>`)

Computes energies/magnitudes in ERB bands of a spectrum


EnergyBand
^^^^^^^^^^

(:doc:`standard <reference/std_EnergyBand>`, :doc:`streaming <reference/streaming_EnergyBand>`)

Computes energy in a given frequency band of a spectrum including both start and stop cutoff frequencies


EnergyBandRatio
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_EnergyBandRatio>`, :doc:`streaming <reference/streaming_EnergyBandRatio>`)

Computes the ratio of the spectral energy in the range [startFrequency, stopFrequency] over the total energy


FlatnessDB
^^^^^^^^^^

(:doc:`standard <reference/std_FlatnessDB>`, :doc:`streaming <reference/streaming_FlatnessDB>`)

Computes the flatness of an array, which is defined as the ratio between the geometric mean and the arithmetic mean converted to dB scale


Flux
^^^^

(:doc:`standard <reference/std_Flux>`, :doc:`streaming <reference/streaming_Flux>`)

Computes the spectral flux of a spectrum


FrequencyBands
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_FrequencyBands>`, :doc:`streaming <reference/streaming_FrequencyBands>`)

Computes energy in rectangular frequency bands of a spectrum


GFCC
^^^^

(:doc:`standard <reference/std_GFCC>`, :doc:`streaming <reference/streaming_GFCC>`)

Computes the Gammatone-frequency cepstral coefficients of a spectrum


HFC
^^^

(:doc:`standard <reference/std_HFC>`, :doc:`streaming <reference/streaming_HFC>`)

Computes the High Frequency Content of a spectrum


LPC
^^^

(:doc:`standard <reference/std_LPC>`, :doc:`streaming <reference/streaming_LPC>`)

Computes Linear Predictive Coefficients and associated reflection coefficients of a signal


LogSpectrum
^^^^^^^^^^^

(:doc:`standard <reference/std_LogSpectrum>`, :doc:`streaming <reference/streaming_LogSpectrum>`)

Computes spectrum with logarithmically distributed frequency bins


MFCC
^^^^

(:doc:`standard <reference/std_MFCC>`, :doc:`streaming <reference/streaming_MFCC>`)

Computes the mel-frequency cepstrum coefficients of a spectrum


MaxMagFreq
^^^^^^^^^^

(:doc:`standard <reference/std_MaxMagFreq>`, :doc:`streaming <reference/streaming_MaxMagFreq>`)

Computes the frequency with the largest magnitude in a spectrum


MelBands
^^^^^^^^

(:doc:`standard <reference/std_MelBands>`, :doc:`streaming <reference/streaming_MelBands>`)

Computes energy in mel bands of a spectrum


Panning
^^^^^^^

(:doc:`standard <reference/std_Panning>`, :doc:`streaming <reference/streaming_Panning>`)

Characterizes panorama distribution by comparing spectra from the left and right channels


PowerSpectrum
^^^^^^^^^^^^^

(:doc:`standard <reference/std_PowerSpectrum>`, :doc:`streaming <reference/streaming_PowerSpectrum>`)

Computes the power spectrum of an array of Reals


RollOff
^^^^^^^

(:doc:`standard <reference/std_RollOff>`, :doc:`streaming <reference/streaming_RollOff>`)

Computes the roll-off frequency of a spectrum


SpectralCentroidTime
^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SpectralCentroidTime>`, :doc:`streaming <reference/streaming_SpectralCentroidTime>`)

Computes the spectral centroid of a signal in time domain


SpectralComplexity
^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SpectralComplexity>`, :doc:`streaming <reference/streaming_SpectralComplexity>`)

Computes the spectral complexity of a spectrum


SpectralContrast
^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SpectralContrast>`, :doc:`streaming <reference/streaming_SpectralContrast>`)

Computes the Spectral Contrast feature of a spectrum


SpectralPeaks
^^^^^^^^^^^^^

(:doc:`standard <reference/std_SpectralPeaks>`, :doc:`streaming <reference/streaming_SpectralPeaks>`)

Extracts peaks from a spectrum


SpectralWhitening
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SpectralWhitening>`, :doc:`streaming <reference/streaming_SpectralWhitening>`)

Performs spectral whitening of spectral peaks of a spectrum


Spectrum
^^^^^^^^

(:doc:`standard <reference/std_Spectrum>`, :doc:`streaming <reference/streaming_Spectrum>`)

Computes the magnitude spectrum of an array of Reals


SpectrumToCent
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SpectrumToCent>`, :doc:`streaming <reference/streaming_SpectrumToCent>`)

Computes energy in triangular frequency bands of a spectrum equally spaced on the cent scale


StrongPeak
^^^^^^^^^^

(:doc:`standard <reference/std_StrongPeak>`, :doc:`streaming <reference/streaming_StrongPeak>`)

Computes the Strong Peak of a spectrum


TensorflowInputFSDSINet
^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowInputFSDSINet>`, :doc:`streaming <reference/streaming_TensorflowInputFSDSINet>`)

Computes mel bands from an audio frame with the specific parametrization required by the FSD-SINet models


TensorflowInputMusiCNN
^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowInputMusiCNN>`, :doc:`streaming <reference/streaming_TensorflowInputMusiCNN>`)

Computes mel-bands specific to the input of MusiCNN-based models


TensorflowInputTempoCNN
^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowInputTempoCNN>`, :doc:`streaming <reference/streaming_TensorflowInputTempoCNN>`)

Computes mel-bands specific to the input of TempoCNN-based models


TensorflowInputVGGish
^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowInputVGGish>`, :doc:`streaming <reference/streaming_TensorflowInputVGGish>`)

Computes mel-bands specific to the input of VGGish-based models


TriangularBands
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TriangularBands>`, :doc:`streaming <reference/streaming_TriangularBands>`)

Computes energy in triangular frequency bands of a spectrum


TriangularBarkBands
^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TriangularBarkBands>`, :doc:`streaming <reference/streaming_TriangularBarkBands>`)

Computes energy in the bark bands of a spectrum

Rhythm
------

BeatTrackerDegara
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_BeatTrackerDegara>`, :doc:`streaming <reference/streaming_BeatTrackerDegara>`)

Estimates the beat positions given an input signal


BeatTrackerMultiFeature
^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_BeatTrackerMultiFeature>`, :doc:`streaming <reference/streaming_BeatTrackerMultiFeature>`)

Estimates the beat positions given an input signal


Beatogram
^^^^^^^^^

(:doc:`standard <reference/std_Beatogram>`, :doc:`streaming <reference/streaming_Beatogram>`)

Filters the loudness matrix given by BeatsLoudness algorithm in order to keep only the most salient beat band representation


BeatsLoudness
^^^^^^^^^^^^^

(:doc:`standard <reference/std_BeatsLoudness>`, :doc:`streaming <reference/streaming_BeatsLoudness>`)

Computes the spectrum energy of beats in an audio signal given their positions


BpmHistogram
^^^^^^^^^^^^

(:doc:`standard <reference/std_BpmHistogram>`, :doc:`streaming <reference/streaming_BpmHistogram>`)

Analyzes predominant periodicities in a signal given its novelty curve [1] (see NoveltyCurve algorithm) or another onset detection function (see OnsetDetection and OnsetDetectionGlobal)


BpmHistogramDescriptors
^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_BpmHistogramDescriptors>`, :doc:`streaming <reference/streaming_BpmHistogramDescriptors>`)

Computes beats per minute histogram and its statistics for the highest and second highest peak


BpmRubato
^^^^^^^^^

(:doc:`standard <reference/std_BpmRubato>`, :doc:`streaming <reference/streaming_BpmRubato>`)

Extracts the locations of large tempo changes from a list of beat ticks


Danceability
^^^^^^^^^^^^

(:doc:`standard <reference/std_Danceability>`, :doc:`streaming <reference/streaming_Danceability>`)

Estimates danceability of a given audio signal


HarmonicBpm
^^^^^^^^^^^

(:doc:`standard <reference/std_HarmonicBpm>`, :doc:`streaming <reference/streaming_HarmonicBpm>`)

Extracts bpms that are harmonically related to the tempo given by the 'bpm' parameter


LoopBpmConfidence
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_LoopBpmConfidence>`, :doc:`streaming <reference/streaming_LoopBpmConfidence>`)

Takes an audio signal and a BPM estimate for that signal and predicts the reliability of the BPM estimate in a value from 0 to 1


LoopBpmEstimator
^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_LoopBpmEstimator>`, :doc:`streaming <reference/streaming_LoopBpmEstimator>`)

Estimates the BPM of audio loops


Meter
^^^^^

(:doc:`standard <reference/std_Meter>`, :doc:`streaming <reference/streaming_Meter>`)

Estimates the time signature of a given beatogram by finding the highest correlation between beats


NoveltyCurve
^^^^^^^^^^^^

(:doc:`standard <reference/std_NoveltyCurve>`, :doc:`streaming <reference/streaming_NoveltyCurve>`)

Computes the "novelty curve" (Grosche & Müller, 2009) onset detection function


NoveltyCurveFixedBpmEstimator
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_NoveltyCurveFixedBpmEstimator>`)

Outputs a histogram of the most probable bpms assuming the signal has constant tempo given the novelty curve


OnsetDetection
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_OnsetDetection>`, :doc:`streaming <reference/streaming_OnsetDetection>`)

Computes various onset detection functions


OnsetDetectionGlobal
^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_OnsetDetectionGlobal>`, :doc:`streaming <reference/streaming_OnsetDetectionGlobal>`)

Computes various onset detection functions


OnsetRate
^^^^^^^^^

(:doc:`standard <reference/std_OnsetRate>`, :doc:`streaming <reference/streaming_OnsetRate>`)

Computes the number of onsets per second and their position in time for an audio signal


Onsets
^^^^^^

(:doc:`standard <reference/std_Onsets>`, :doc:`streaming <reference/streaming_Onsets>`)

Computes onset positions given various onset detection functions


PercivalBpmEstimator
^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PercivalBpmEstimator>`, :doc:`streaming <reference/streaming_PercivalBpmEstimator>`)

Estimates the tempo in beats per minute (BPM) from an input signal as described in [1]


PercivalEnhanceHarmonics
^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PercivalEnhanceHarmonics>`, :doc:`streaming <reference/streaming_PercivalEnhanceHarmonics>`)

Implements the 'Enhance Harmonics' step as described in [1]


PercivalEvaluatePulseTrains
^^^^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PercivalEvaluatePulseTrains>`, :doc:`streaming <reference/streaming_PercivalEvaluatePulseTrains>`)

Implements the 'Evaluate Pulse Trains' step as described in [1]


RhythmDescriptors
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_RhythmDescriptors>`, :doc:`streaming <reference/streaming_RhythmDescriptors>`)

Computes rhythm features (bpm, beat positions, beat histogram peaks) for an audio signal


RhythmExtractor
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_RhythmExtractor>`, :doc:`streaming <reference/streaming_RhythmExtractor>`)

Estimates the tempo in bpm and beat positions given an audio signal


RhythmExtractor2013
^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_RhythmExtractor2013>`, :doc:`streaming <reference/streaming_RhythmExtractor2013>`)

Extracts the beat positions and estimates their confidence as well as tempo in bpm for an audio signal


RhythmTransform
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_RhythmTransform>`, :doc:`streaming <reference/streaming_RhythmTransform>`)

Implements the rhythm transform


SingleBeatLoudness
^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SingleBeatLoudness>`, :doc:`streaming <reference/streaming_SingleBeatLoudness>`)

Computes the spectrum energy of a single beat across the whole frequency range and on each specified frequency band given an audio segment


SuperFluxExtractor
^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SuperFluxExtractor>`, :doc:`streaming <reference/streaming_SuperFluxExtractor>`)

Detects onsets given an audio signal using SuperFlux algorithm


SuperFluxNovelty
^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SuperFluxNovelty>`, :doc:`streaming <reference/streaming_SuperFluxNovelty>`)

Onset detection function for Superflux algorithm


SuperFluxPeaks
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SuperFluxPeaks>`, :doc:`streaming <reference/streaming_SuperFluxPeaks>`)

Detects peaks of an onset detection function computed by the SuperFluxNovelty algorithm


TempoCNN
^^^^^^^^

(:doc:`standard <reference/std_TempoCNN>`, :doc:`streaming <reference/streaming_TempoCNN>`)

Estimates tempo using TempoCNN-based models


TempoScaleBands
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TempoScaleBands>`, :doc:`streaming <reference/streaming_TempoScaleBands>`)

Computes features for tempo tracking to be used with the TempoTap algorithm


TempoTap
^^^^^^^^

(:doc:`standard <reference/std_TempoTap>`, :doc:`streaming <reference/streaming_TempoTap>`)

Estimates the periods and phases of a periodic signal, represented by a sequence of values of any number of detection functions, such as energy bands, onsets locations, etc


TempoTapDegara
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TempoTapDegara>`, :doc:`streaming <reference/streaming_TempoTapDegara>`)

Estimates beat positions given an onset detection function


TempoTapMaxAgreement
^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TempoTapMaxAgreement>`, :doc:`streaming <reference/streaming_TempoTapMaxAgreement>`)

Outputs beat positions and confidence of their estimation based on the maximum mutual agreement between beat candidates estimated by different beat trackers (or using different features)


TempoTapTicks
^^^^^^^^^^^^^

(:doc:`standard <reference/std_TempoTapTicks>`, :doc:`streaming <reference/streaming_TempoTapTicks>`)

Builds the list of ticks from the period and phase candidates given by the TempoTap algorithm

Math
----

CartesianToPolar
^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_CartesianToPolar>`, :doc:`streaming <reference/streaming_CartesianToPolar>`)

Converts an array of complex numbers from cartesian to polar form


Magnitude
^^^^^^^^^

(:doc:`standard <reference/std_Magnitude>`, :doc:`streaming <reference/streaming_Magnitude>`)

Computes the absolute value of each element in a vector of complex numbers


PolarToCartesian
^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PolarToCartesian>`, :doc:`streaming <reference/streaming_PolarToCartesian>`)

Converts an array of complex numbers from polar to cartesian form

Statistics
----------

CentralMoments
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_CentralMoments>`, :doc:`streaming <reference/streaming_CentralMoments>`)

Extracts the 0th, 1st, 2nd, 3rd and 4th central moments of an array


Centroid
^^^^^^^^

(:doc:`standard <reference/std_Centroid>`, :doc:`streaming <reference/streaming_Centroid>`)

Computes the centroid of an array


Crest
^^^^^

(:doc:`standard <reference/std_Crest>`, :doc:`streaming <reference/streaming_Crest>`)

Computes the crest of an array


Decrease
^^^^^^^^

(:doc:`standard <reference/std_Decrease>`, :doc:`streaming <reference/streaming_Decrease>`)

Computes the decrease of an array defined as the linear regression coefficient


DistributionShape
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_DistributionShape>`, :doc:`streaming <reference/streaming_DistributionShape>`)

Computes the spread (variance), skewness and kurtosis of an array given its central moments


Energy
^^^^^^

(:doc:`standard <reference/std_Energy>`, :doc:`streaming <reference/streaming_Energy>`)

Computes the energy of an array


Entropy
^^^^^^^

(:doc:`standard <reference/std_Entropy>`, :doc:`streaming <reference/streaming_Entropy>`)

Computes the Shannon entropy of an array


Flatness
^^^^^^^^

(:doc:`standard <reference/std_Flatness>`, :doc:`streaming <reference/streaming_Flatness>`)

Computes the flatness of an array, which is defined as the ratio between the geometric mean and the arithmetic mean


GeometricMean
^^^^^^^^^^^^^

(:doc:`standard <reference/std_GeometricMean>`, :doc:`streaming <reference/streaming_GeometricMean>`)

Computes the geometric mean of an array of positive values


Histogram
^^^^^^^^^

(:doc:`standard <reference/std_Histogram>`, :doc:`streaming <reference/streaming_Histogram>`)

Computes a histogram


InstantPower
^^^^^^^^^^^^

(:doc:`standard <reference/std_InstantPower>`, :doc:`streaming <reference/streaming_InstantPower>`)

Computes the instant power of an array


Mean
^^^^

(:doc:`standard <reference/std_Mean>`, :doc:`streaming <reference/streaming_Mean>`)

Computes the mean of an array


Median
^^^^^^

(:doc:`standard <reference/std_Median>`, :doc:`streaming <reference/streaming_Median>`)

Computes the median of an array


PoolAggregator
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PoolAggregator>`, :doc:`streaming <reference/streaming_PoolAggregator>`)

Performs statistical aggregation on a Pool and places the results of the aggregation into a new Pool


PowerMean
^^^^^^^^^

(:doc:`standard <reference/std_PowerMean>`, :doc:`streaming <reference/streaming_PowerMean>`)

Computes the power mean of an array


RMS
^^^

(:doc:`standard <reference/std_RMS>`, :doc:`streaming <reference/streaming_RMS>`)

Computes the root mean square (quadratic mean) of an array


RawMoments
^^^^^^^^^^

(:doc:`standard <reference/std_RawMoments>`, :doc:`streaming <reference/streaming_RawMoments>`)

Computes the first 5 raw moments of an array


SingleGaussian
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SingleGaussian>`, :doc:`streaming <reference/streaming_SingleGaussian>`)

Estimates the single gaussian distribution for a matrix of feature vectors


Variance
^^^^^^^^

(:doc:`standard <reference/std_Variance>`, :doc:`streaming <reference/streaming_Variance>`)

Computes the variance of an array


Viterbi
^^^^^^^

(:doc:`standard <reference/std_Viterbi>`, :doc:`streaming <reference/streaming_Viterbi>`)

Estimates the most-likely path by Viterbi algorithm

Tonal
-----

ChordsDescriptors
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_ChordsDescriptors>`, :doc:`streaming <reference/streaming_ChordsDescriptors>`)

Given a chord progression this algorithm describes it by means of key, scale, histogram, and rate of change


ChordsDetection
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_ChordsDetection>`, :doc:`streaming <reference/streaming_ChordsDetection>`)

Estimates chords given an input sequence of harmonic pitch class profiles (HPCPs)


ChordsDetectionBeats
^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_ChordsDetectionBeats>`)

Estimates chords using pitch profile classes on segments between beats


Chromagram
^^^^^^^^^^

(:doc:`standard <reference/std_Chromagram>`, :doc:`streaming <reference/streaming_Chromagram>`)

Computes the Constant-Q chromagram using FFT


Dissonance
^^^^^^^^^^

(:doc:`standard <reference/std_Dissonance>`, :doc:`streaming <reference/streaming_Dissonance>`)

Computes the sensory dissonance of an audio signal given its spectral peaks


HPCP
^^^^

(:doc:`standard <reference/std_HPCP>`, :doc:`streaming <reference/streaming_HPCP>`)

Computes a Harmonic Pitch Class Profile (HPCP) from the spectral peaks of a signal


HarmonicPeaks
^^^^^^^^^^^^^

(:doc:`standard <reference/std_HarmonicPeaks>`, :doc:`streaming <reference/streaming_HarmonicPeaks>`)

Finds the harmonic peaks of a signal given its spectral peaks and its fundamental frequency


HighResolutionFeatures
^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_HighResolutionFeatures>`, :doc:`streaming <reference/streaming_HighResolutionFeatures>`)

Computes high-resolution chroma features from an HPCP vector


Inharmonicity
^^^^^^^^^^^^^

(:doc:`standard <reference/std_Inharmonicity>`, :doc:`streaming <reference/streaming_Inharmonicity>`)

Calculates the inharmonicity of a signal given its spectral peaks


Key
^^^

(:doc:`standard <reference/std_Key>`, :doc:`streaming <reference/streaming_Key>`)

Computes key estimate given a pitch class profile (HPCP)


KeyExtractor
^^^^^^^^^^^^

(:doc:`standard <reference/std_KeyExtractor>`, :doc:`streaming <reference/streaming_KeyExtractor>`)

Extracts key/scale for an audio signal


NNLSChroma
^^^^^^^^^^

(:doc:`standard <reference/std_NNLSChroma>`, :doc:`streaming <reference/streaming_NNLSChroma>`)

Extracts treble and bass chromagrams from a sequence of log-frequency spectrum frames


OddToEvenHarmonicEnergyRatio
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_OddToEvenHarmonicEnergyRatio>`, :doc:`streaming <reference/streaming_OddToEvenHarmonicEnergyRatio>`)

Computes the ratio between a signal's odd and even harmonic energy given the signal's harmonic peaks


PitchSalience
^^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchSalience>`, :doc:`streaming <reference/streaming_PitchSalience>`)

Computes the pitch salience of a spectrum


SpectrumCQ
^^^^^^^^^^

(:doc:`standard <reference/std_SpectrumCQ>`, :doc:`streaming <reference/streaming_SpectrumCQ>`)

Computes the magnitude of the Constant-Q spectrum


TonalExtractor
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TonalExtractor>`, :doc:`streaming <reference/streaming_TonalExtractor>`)

Computes tonal features for an audio signal


TonicIndianArtMusic
^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TonicIndianArtMusic>`)

Estimates the tonic frequency of the lead artist in Indian art music


Tristimulus
^^^^^^^^^^^

(:doc:`standard <reference/std_Tristimulus>`, :doc:`streaming <reference/streaming_Tristimulus>`)

Calculates the tristimulus of a signal given its harmonic peaks


TuningFrequency
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TuningFrequency>`, :doc:`streaming <reference/streaming_TuningFrequency>`)

Estimates the tuning frequency give a sequence/set of spectral peaks


TuningFrequencyExtractor
^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TuningFrequencyExtractor>`, :doc:`streaming <reference/streaming_TuningFrequencyExtractor>`)

Extracts the tuning frequency of an audio signal

Music Similarity
----------------

ChromaCrossSimilarity
^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_ChromaCrossSimilarity>`, :doc:`streaming <reference/streaming_ChromaCrossSimilarity>`)

Computes a binary cross similarity matrix from two chromagam feature vectors of a query and reference song


CoverSongSimilarity
^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_CoverSongSimilarity>`, :doc:`streaming <reference/streaming_CoverSongSimilarity>`)

Computes a cover song similiarity measure from a binary cross similarity matrix input between two chroma vectors of a query and reference song using various alignment constraints of smith-waterman local-alignment algorithm


CrossSimilarityMatrix
^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_CrossSimilarityMatrix>`)

Computes a euclidean cross-similarity matrix of two sequences of frame features

Fingerprinting
--------------

Chromaprinter
^^^^^^^^^^^^^

(:doc:`standard <reference/std_Chromaprinter>`, :doc:`streaming <reference/streaming_Chromaprinter>`)

Computes the fingerprint of the input signal using Chromaprint algorithm

Audio Problems
--------------

ClickDetector
^^^^^^^^^^^^^

(:doc:`standard <reference/std_ClickDetector>`, :doc:`streaming <reference/streaming_ClickDetector>`)

Detects the locations of impulsive noises (clicks and pops) on the input audio frame


DiscontinuityDetector
^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_DiscontinuityDetector>`, :doc:`streaming <reference/streaming_DiscontinuityDetector>`)

Uses LPC and some heuristics to detect discontinuities in an audio signal


FalseStereoDetector
^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_FalseStereoDetector>`, :doc:`streaming <reference/streaming_FalseStereoDetector>`)

Detects if a stereo track has duplicated channels (false stereo)


GapsDetector
^^^^^^^^^^^^

(:doc:`standard <reference/std_GapsDetector>`, :doc:`streaming <reference/streaming_GapsDetector>`)

Uses energy and time thresholds to detect gaps in the waveform


HumDetector
^^^^^^^^^^^

(:doc:`standard <reference/std_HumDetector>`, :doc:`streaming <reference/streaming_HumDetector>`)

Detects low frequency tonal noises in the audio signal


NoiseBurstDetector
^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_NoiseBurstDetector>`, :doc:`streaming <reference/streaming_NoiseBurstDetector>`)

Detects noise bursts in the waveform by thresholding  the peaks of the second derivative


SNR
^^^

(:doc:`standard <reference/std_SNR>`, :doc:`streaming <reference/streaming_SNR>`)

Computes the SNR of the input audio in a frame-wise manner


SaturationDetector
^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SaturationDetector>`, :doc:`streaming <reference/streaming_SaturationDetector>`)

This algorithm outputs the staring/ending locations of the saturated regions in seconds


StartStopCut
^^^^^^^^^^^^

(:doc:`standard <reference/std_StartStopCut>`, :doc:`streaming <reference/streaming_StartStopCut>`)

Outputs if there is a cut at the beginning or at the end of the audio by locating the first and last non-silent frames and comparing their positions to the actual beginning and end of the audio


TruePeakDetector
^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TruePeakDetector>`, :doc:`streaming <reference/streaming_TruePeakDetector>`)

Implements a “true-peak” level meter for clipping detection

Duration/silence
----------------

Duration
^^^^^^^^

(:doc:`standard <reference/std_Duration>`, :doc:`streaming <reference/streaming_Duration>`)

Outputs the total duration of an audio signal


EffectiveDuration
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_EffectiveDuration>`, :doc:`streaming <reference/streaming_EffectiveDuration>`)

Computes the effective duration of an envelope signal


FadeDetection
^^^^^^^^^^^^^

(:doc:`standard <reference/std_FadeDetection>`, :doc:`streaming <reference/streaming_FadeDetection>`)

Detects fade-in and fade-outs time positions in an audio signal given a sequence of RMS values


SilenceRate
^^^^^^^^^^^

(:doc:`standard <reference/std_SilenceRate>`, :doc:`streaming <reference/streaming_SilenceRate>`)

Estimates if a frame is silent


StartStopSilence
^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_StartStopSilence>`, :doc:`streaming <reference/streaming_StartStopSilence>`)

Outputs the frame at which sound begins and the frame at which sound ends

Loudness/dynamics
-----------------

DynamicComplexity
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_DynamicComplexity>`, :doc:`streaming <reference/streaming_DynamicComplexity>`)

Computes the dynamic complexity defined as the average absolute deviation from the global loudness level estimate on the dB scale


Intensity
^^^^^^^^^

(:doc:`standard <reference/std_Intensity>`)

Classifies the input audio signal as either relaxed (-1), moderate (0), or aggressive (1)


Larm
^^^^

(:doc:`standard <reference/std_Larm>`, :doc:`streaming <reference/streaming_Larm>`)

Estimates the long-term loudness of an audio signal


Leq
^^^

(:doc:`standard <reference/std_Leq>`, :doc:`streaming <reference/streaming_Leq>`)

Computes the Equivalent sound level (Leq) of an audio signal


LevelExtractor
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_LevelExtractor>`, :doc:`streaming <reference/streaming_LevelExtractor>`)

Extracts the loudness of an audio signal in frames using Loudness algorithm


Loudness
^^^^^^^^

(:doc:`standard <reference/std_Loudness>`, :doc:`streaming <reference/streaming_Loudness>`)

Computes the loudness of an audio signal defined by Steven's power law


LoudnessEBUR128
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_LoudnessEBUR128>`, :doc:`streaming <reference/streaming_LoudnessEBUR128>`)

Computes the EBU R128 loudness descriptors of an audio signal


LoudnessEBUR128Filter
^^^^^^^^^^^^^^^^^^^^^

(:doc:`streaming <reference/streaming_LoudnessEBUR128Filter>`)

An auxilary signal preprocessing algorithm used within the LoudnessEBUR128 algorithm


LoudnessVickers
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_LoudnessVickers>`, :doc:`streaming <reference/streaming_LoudnessVickers>`)

Computes Vickers's loudness of an audio signal


ReplayGain
^^^^^^^^^^

(:doc:`standard <reference/std_ReplayGain>`, :doc:`streaming <reference/streaming_ReplayGain>`)

Computes the Replay Gain loudness value of an audio signal

Extractors
----------

BarkExtractor
^^^^^^^^^^^^^

(:doc:`streaming <reference/streaming_BarkExtractor>`)

Extracts some Bark bands based spectral features from an audio signal


Extractor
^^^^^^^^^

(:doc:`standard <reference/std_Extractor>`)

Extracts all low-level, mid-level and high-level features from an audio signal and stores them in a pool


FreesoundExtractor
^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_FreesoundExtractor>`)

Is a wrapper for Freesound Extractor


LowLevelSpectralEqloudExtractor
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_LowLevelSpectralEqloudExtractor>`, :doc:`streaming <reference/streaming_LowLevelSpectralEqloudExtractor>`)

Extracts a set of level spectral features for which it is recommended to apply a preliminary equal-loudness filter over an input audio signal (according to the internal evaluations conducted at Music Technology Group)


LowLevelSpectralExtractor
^^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_LowLevelSpectralExtractor>`, :doc:`streaming <reference/streaming_LowLevelSpectralExtractor>`)

Extracts all low-level spectral features, which do not require an equal-loudness filter for their computation, from an audio signal


MusicExtractor
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_MusicExtractor>`)

Is a wrapper for Music Extractor

Synthesis
---------

HarmonicMask
^^^^^^^^^^^^

(:doc:`standard <reference/std_HarmonicMask>`, :doc:`streaming <reference/streaming_HarmonicMask>`)

Applies a spectral mask to remove a pitched source component from the signal


HarmonicModelAnal
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_HarmonicModelAnal>`, :doc:`streaming <reference/streaming_HarmonicModelAnal>`)

Computes the harmonic model analysis


HprModelAnal
^^^^^^^^^^^^

(:doc:`standard <reference/std_HprModelAnal>`, :doc:`streaming <reference/streaming_HprModelAnal>`)

Computes the harmonic plus residual model analysis


HpsModelAnal
^^^^^^^^^^^^

(:doc:`standard <reference/std_HpsModelAnal>`, :doc:`streaming <reference/streaming_HpsModelAnal>`)

Computes the harmonic plus stochastic model analysis


ResampleFFT
^^^^^^^^^^^

(:doc:`standard <reference/std_ResampleFFT>`, :doc:`streaming <reference/streaming_ResampleFFT>`)

Resamples a sequence using FFT/IFFT


SineModelAnal
^^^^^^^^^^^^^

(:doc:`standard <reference/std_SineModelAnal>`, :doc:`streaming <reference/streaming_SineModelAnal>`)

Computes the sine model analysis


SineModelSynth
^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SineModelSynth>`, :doc:`streaming <reference/streaming_SineModelSynth>`)

Computes the sine model synthesis from sine model analysis


SineSubtraction
^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_SineSubtraction>`, :doc:`streaming <reference/streaming_SineSubtraction>`)

Subtracts the sinusoids computed with the sine model analysis from an input audio signal


SprModelAnal
^^^^^^^^^^^^

(:doc:`standard <reference/std_SprModelAnal>`, :doc:`streaming <reference/streaming_SprModelAnal>`)

Computes the sinusoidal plus residual model analysis


SprModelSynth
^^^^^^^^^^^^^

(:doc:`standard <reference/std_SprModelSynth>`, :doc:`streaming <reference/streaming_SprModelSynth>`)

Computes the sinusoidal plus residual model synthesis from SPS model analysis


SpsModelAnal
^^^^^^^^^^^^

(:doc:`standard <reference/std_SpsModelAnal>`, :doc:`streaming <reference/streaming_SpsModelAnal>`)

Computes the stochastic model analysis


SpsModelSynth
^^^^^^^^^^^^^

(:doc:`standard <reference/std_SpsModelSynth>`, :doc:`streaming <reference/streaming_SpsModelSynth>`)

Computes the sinusoidal plus stochastic model synthesis from SPS model analysis


StochasticModelAnal
^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_StochasticModelAnal>`, :doc:`streaming <reference/streaming_StochasticModelAnal>`)

Computes the stochastic model analysis


StochasticModelSynth
^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_StochasticModelSynth>`, :doc:`streaming <reference/streaming_StochasticModelSynth>`)

Computes the stochastic model synthesis

Pitch
-----

MultiPitchKlapuri
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_MultiPitchKlapuri>`)

Estimates multiple pitch values corresponding to the melodic lines present in a polyphonic music signal (for example, string quartet, piano)


MultiPitchMelodia
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_MultiPitchMelodia>`, :doc:`streaming <reference/streaming_MultiPitchMelodia>`)

Estimates multiple fundamental frequency contours from an audio signal


PitchCREPE
^^^^^^^^^^

(:doc:`standard <reference/std_PitchCREPE>`, :doc:`streaming <reference/streaming_PitchCREPE>`)

Estimates pitch of monophonic audio signals using CREPE models


PitchContourSegmentation
^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchContourSegmentation>`)

Converts a pitch sequence estimated from an audio signal into a set of discrete note events


PitchContours
^^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchContours>`, :doc:`streaming <reference/streaming_PitchContours>`)

Tracks a set of predominant pitch contours of an audio signal


PitchContoursMelody
^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchContoursMelody>`, :doc:`streaming <reference/streaming_PitchContoursMelody>`)

Converts a set of pitch contours into a sequence of predominant f0 values in Hz by taking the value of the most predominant contour in each frame


PitchContoursMonoMelody
^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchContoursMonoMelody>`, :doc:`streaming <reference/streaming_PitchContoursMonoMelody>`)

Converts a set of pitch contours into a sequence of f0 values in Hz by taking the value of the most salient contour in each frame


PitchContoursMultiMelody
^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchContoursMultiMelody>`, :doc:`streaming <reference/streaming_PitchContoursMultiMelody>`)

Post-processes a set of pitch contours into a sequence of mutliple f0 values in Hz


PitchFilter
^^^^^^^^^^^

(:doc:`standard <reference/std_PitchFilter>`, :doc:`streaming <reference/streaming_PitchFilter>`)

Corrects the fundamental frequency estimations for a sequence of frames given pitch values together with their confidence values


PitchMelodia
^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchMelodia>`, :doc:`streaming <reference/streaming_PitchMelodia>`)

Estimates the fundamental frequency corresponding to the melody of a monophonic music signal based on the MELODIA algorithm


PitchSalienceFunction
^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchSalienceFunction>`, :doc:`streaming <reference/streaming_PitchSalienceFunction>`)

Computes the pitch salience function of a signal frame given its spectral peaks


PitchSalienceFunctionPeaks
^^^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchSalienceFunctionPeaks>`, :doc:`streaming <reference/streaming_PitchSalienceFunctionPeaks>`)

Computes the peaks of a given pitch salience function


PitchYin
^^^^^^^^

(:doc:`standard <reference/std_PitchYin>`, :doc:`streaming <reference/streaming_PitchYin>`)

Estimates the fundamental frequency given the frame of a monophonic music signal


PitchYinFFT
^^^^^^^^^^^

(:doc:`standard <reference/std_PitchYinFFT>`, :doc:`streaming <reference/streaming_PitchYinFFT>`)

Estimates the fundamental frequency given the spectrum of a monophonic music signal


PitchYinProbabilistic
^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchYinProbabilistic>`, :doc:`streaming <reference/streaming_PitchYinProbabilistic>`)

Computes the pitch track of a mono audio signal using probabilistic Yin algorithm


PitchYinProbabilities
^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchYinProbabilities>`, :doc:`streaming <reference/streaming_PitchYinProbabilities>`)

Estimates the fundamental frequencies, their probabilities given the frame of a monophonic music signal


PitchYinProbabilitiesHMM
^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PitchYinProbabilitiesHMM>`, :doc:`streaming <reference/streaming_PitchYinProbabilitiesHMM>`)

Estimates the smoothed fundamental frequency given the pitch candidates and probabilities using hidden Markov models


PredominantPitchMelodia
^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_PredominantPitchMelodia>`, :doc:`streaming <reference/streaming_PredominantPitchMelodia>`)

Estimates the fundamental frequency of the predominant melody from polyphonic music signals using the MELODIA algorithm


Vibrato
^^^^^^^

(:doc:`standard <reference/std_Vibrato>`, :doc:`streaming <reference/streaming_Vibrato>`)

Detects the presence of vibrato and estimates its parameters given a pitch contour [Hz]

Transformations
---------------

PCA
^^^

(:doc:`standard <reference/std_PCA>`)

Applies Principal Component Analysis based on the covariance matrix of the signal

Segmentation
------------

SBic
^^^^

(:doc:`standard <reference/std_SBic>`, :doc:`streaming <reference/streaming_SBic>`)

Segments audio using the Bayesian Information Criterion given a matrix of frame features

Machine Learning
----------------

TensorflowPredict
^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowPredict>`, :doc:`streaming <reference/streaming_TensorflowPredict>`)

Runs a Tensorflow graph and stores the desired output tensors in a pool


TensorflowPredict2D
^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowPredict2D>`, :doc:`streaming <reference/streaming_TensorflowPredict2D>`)

Makes predictions using models expecting 2D representations


TensorflowPredictCREPE
^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowPredictCREPE>`, :doc:`streaming <reference/streaming_TensorflowPredictCREPE>`)

Generates activations of monophonic audio signals using CREPE models


TensorflowPredictEffnetDiscogs
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowPredictEffnetDiscogs>`, :doc:`streaming <reference/streaming_TensorflowPredictEffnetDiscogs>`)

Makes predictions using EffnetDiscogs-based models


TensorflowPredictFSDSINet
^^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowPredictFSDSINet>`, :doc:`streaming <reference/streaming_TensorflowPredictFSDSINet>`)

Makes predictions using FSD-SINet models


TensorflowPredictMAEST
^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowPredictMAEST>`, :doc:`streaming <reference/streaming_TensorflowPredictMAEST>`)

Makes predictions using MAEST-based models


TensorflowPredictMusiCNN
^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowPredictMusiCNN>`, :doc:`streaming <reference/streaming_TensorflowPredictMusiCNN>`)

Makes predictions using MusiCNN-based models


TensorflowPredictTempoCNN
^^^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowPredictTempoCNN>`, :doc:`streaming <reference/streaming_TensorflowPredictTempoCNN>`)

Makes predictions using TempoCNN-based models


TensorflowPredictVGGish
^^^^^^^^^^^^^^^^^^^^^^^

(:doc:`standard <reference/std_TensorflowPredictVGGish>`, :doc:`streaming <reference/streaming_TensorflowPredictVGGish>`)

Makes predictions using VGGish-based models


