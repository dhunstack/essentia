:orphan:

Algorithm reference - BpmHistogram (standard mode)
==================================================

Inputs
------

 - ``novelty`` (*vector_real*) - the novelty curve

Outputs
-------

 - ``bpm`` (*real*) - mean BPM of the most salient tempo
 - ``bpmCandidates`` (*vector_real*) - list of the most salient BPM values
 - ``bpmMagnitudes`` (*vector_real*) - magnitudes of the most salient BPM values
 - ``tempogram`` (*matrix_real*) - spectrogram-like representation of tempo over time (frames of BPM magnitudes)
 - ``frameBpms`` (*vector_real*) - BPM values at each frame
 - ``ticks`` (*vector_real*) - time positions of ticks [s]
 - ``ticksMagnitude`` (*vector_real*) - ticks' strength (magnitude)
 - ``sinusoid`` (*vector_real*) - sinusoid whose peaks indicate tick positions

Parameters
----------

 - ``bpm`` (*real ∈ [0, ∞), default = 0*) :
     bpm to induce a certain tempo tracking. Zero if unknown
 - ``constantTempo`` (*bool ∈ {true, false}, default = false*) :
     whether to consider constant tempo. Set to true when inducina specific tempo
 - ``frameRate`` (*real ∈ [1, ∞), default = 86.1328*) :
     the sampling rate of the novelty curve [frame/s]
 - ``frameSize`` (*real ∈ [1, ∞), default = 4*) :
     the minimum length to compute the FFT [s]
 - ``maxBpm`` (*real ∈ (0, ∞), default = 560*) :
     the maximum bpm to consider
 - ``maxPeaks`` (*integer ∈ (0, ∞], default = 50*) :
     the number of peaks to be considered at each spectrum
 - ``minBpm`` (*real ∈ [0, ∞), default = 30*) :
     the minimum bpm to consider
 - ``overlap`` (*integer ∈ (0, ∞), default = 16*) :
     the overlap factor
 - ``tempoChange`` (*real ∈ [0, ∞), default = 5*) :
     the minimum length to consider a change in tempo as stable [s]
 - ``weightByMagnitude`` (*bool ∈ {true, false}, default = true*) :
     whether to consider peaks' magnitude when building the histogram
 - ``windowType`` (*string, default = hann*) :
     the window type to be used when computing the FFT
 - ``zeroPadding`` (*integer ∈ [0, ∞), default = 0*) :
     zero padding factor to compute the FFT [s]

Description
-----------

This algorithm analyzes predominant periodicities in a signal given its novelty curve [1] (see NoveltyCurve algorithm) or another onset detection function (see OnsetDetection and OnsetDetectionGlobal). It estimates pulse BPM values and time positions together with a half-wave rectified sinusoid whose peaks represent the pulses present in the audio signal and their magnitudes. The analysis is based on the FFT of the input novelty curve from which salient periodicities are detected by thresholding. Temporal evolution of these periodicities is output in the "tempogram". Candidate BPMs are then detected based on a histogram of the observed periodicities weighted by their energy in the tempogram. The sinusoidal model is constructed based on the observed periodicities and their magnitudes with the estimated overall BPM as a reference.

The algorithm outputs: 

 - bpm: the mean of the most salient BPM values representing periodicities in the signal (the mean BPM).
 - bpmCandidates and bpmMagnitudes: list of the most salient BPM values and their magnitudes (intensity). These two outputs can be helpful for taking an alternative decision on estimation of the overall BPM.
 - tempogram: spectrogram-like representation of the estimated salient periodicities and their intensities over time (per-frame BPM magnitudes). It is useful for detecting tempo variations and visualization of tempo evolution.
 - frameBpms: list of candidate BPM values at each frame. The candidate values are similar to the mean BPM. If no candidates are found to be similar, the mean value itself is used unless "tempoChange" seconds have triggered a variation in tempo.
 - ticks: time positions of ticks in seconds.
 - ticksMagnitude: magnitude of each tick. Higher values correspond to higher probability of correctly identified ticks.
 - sinusoid: a sinusoidal model of the ticks' positions. The previous outputs are based on detecting peaks of this half-wave rectified sinusoid. This model can be used to obtain ticks using alternative peak detection algorithms if necessary. Beware that the last few ticks may exceed the length of the audio signal due to overlap factors. Therefore, this output should be always checked against the length of audio signal.


Note:

 - This algorithm is outdated. For beat tracking it is recommended to use RhythmExtractor2013 algorithm found to perform better than NoveltyCurve with BpmHistogram in evaluations.
 - The "frameRate" parameter refers to the frame rate at which the novelty curve has been computed. It is equal to the audio sampling rate divided by the hop size at which the signal was processed.
 - Although the algorithm tries to find beats that fit the mean BPM the best, the tempo is not assumed to be constant unless specified in the corresponding parameter. For this reason and if tempo differs too much from frame to frame, there may be phase discontinuities when constructing the sinusoid which can yield to too many ticks. One can recursively run this algorithm on the sinusoid output until the ticks stabilize. At this point it may be useful to infer a specific BPM and set the constant tempo parameter to true.
 - Another useful trick is to run the algorithm one time to get an estimation of the mean BPM and re-run it again with a "frameSize" parameter set to a multiple of the mean BPM.


Quality: outdated (use RhythmExtractor2013 instead, still this algorithm might be useful when working with other onset detection functions apart from NoveltyCurve)


References:
  [1] P. Grosche and M. Müller, "A mid-level representation for capturing
  dominant tempo and pulse information in music recordings," in
  International Society for Music Information Retrieval Conference
  (ISMIR’09), 2009, pp. 189–194.


See also
--------

BpmHistogram `(streaming) <streaming_BpmHistogram.html>`__
Extractor `(standard) <std_Extractor.html>`__
FFT `(standard) <std_FFT.html>`__
FFT `(streaming) <streaming_FFT.html>`__
Histogram `(standard) <std_Histogram.html>`__
Histogram `(streaming) <streaming_Histogram.html>`__
Magnitude `(standard) <std_Magnitude.html>`__
Magnitude `(streaming) <streaming_Magnitude.html>`__
NoveltyCurve `(standard) <std_NoveltyCurve.html>`__
NoveltyCurve `(streaming) <streaming_NoveltyCurve.html>`__
OnsetDetection `(standard) <std_OnsetDetection.html>`__
OnsetDetection `(streaming) <streaming_OnsetDetection.html>`__
OnsetDetectionGlobal `(standard) <std_OnsetDetectionGlobal.html>`__
OnsetDetectionGlobal `(streaming) <streaming_OnsetDetectionGlobal.html>`__
RhythmExtractor `(standard) <std_RhythmExtractor.html>`__
RhythmExtractor `(streaming) <streaming_RhythmExtractor.html>`__
RhythmExtractor2013 `(standard) <std_RhythmExtractor2013.html>`__
RhythmExtractor2013 `(streaming) <streaming_RhythmExtractor2013.html>`__