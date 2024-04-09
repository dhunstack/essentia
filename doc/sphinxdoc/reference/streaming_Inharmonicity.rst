:orphan:

Algorithm reference - Inharmonicity (streaming mode)
====================================================

Inputs
------

 - ``frequencies`` (*vector_real*) - the frequencies of the harmonic peaks [Hz] (in ascending order)
 - ``magnitudes`` (*vector_real*) - the magnitudes of the harmonic peaks (in frequency ascending order

Outputs
-------

 - ``inharmonicity`` (*real*) - the inharmonicity of the audio signal

Description
-----------

This algorithm calculates the inharmonicity of a signal given its spectral peaks. The inharmonicity value is computed as an energy weighted divergence of the spectral components from their closest multiple of the fundamental frequency. The fundamental frequency is taken as the first spectral peak from the input. The inharmonicity value ranges from 0 (purely harmonic signal) to 1 (inharmonic signal).

Inharmonicity was designed to be fed by the output from the HarmonicPeaks algorithm. Note that DC components should be removed from the signal before obtaining its peaks. An exception is thrown if a peak is given at 0Hz.

An exception is thrown if frequency vector is not sorted in ascendently, if it contains duplicates or if any input vector is empty.


References:
  [1] G. Peeters, "A large set of audio features for sound description
  (similarity and classification) in the CUIDADO project," CUIDADO I.S.T.
  Project Report, 2004.

  [2] Inharmonicity - Wikipedia, the free encyclopedia,
  http://en.wikipedia.org/wiki/Inharmonicity


See also
--------

HarmonicPeaks `(standard) <std_HarmonicPeaks.html>`__
HarmonicPeaks `(streaming) <streaming_HarmonicPeaks.html>`__
Inharmonicity `(standard) <std_Inharmonicity.html>`__