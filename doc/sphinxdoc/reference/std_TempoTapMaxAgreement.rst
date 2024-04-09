:orphan:

Algorithm reference - TempoTapMaxAgreement (standard mode)
==========================================================

Inputs
------

 - ``tickCandidates`` (*vector_vector_real*) - the tick candidates estimated using different beat trackers (or features) [s]

Outputs
-------

 - ``ticks`` (*vector_real*) - the list of resulting ticks [s]
 - ``confidence`` (*real*) - confidence with which the ticks were detected [0, 5.32]

Description
-----------

This algorithm outputs beat positions and confidence of their estimation based on the maximum mutual agreement between beat candidates estimated by different beat trackers (or using different features).

Note that the input tick times should be in ascending order and that they cannot contain negative values otherwise an exception will be thrown.


References:
  [1] J. R. Zapata, A. Holzapfel, M. E. Davies, J. L. Oliveira, and
  F. Gouyon, "Assigning a confidence threshold on automatic beat annotation
  in large datasets," in International Society for Music Information
  Retrieval Conference (ISMIR’12), 2012.

  [2] A. Holzapfel, M. E. Davies, J. R. Zapata, J. L. Oliveira, and
  F. Gouyon, "Selective sampling for beat tracking evaluation," IEEE
  Transactions on Audio, Speech, and Language Processing, vol. 13, no. 9,
  pp. 2539-2548, 2012.



See also
--------

TempoTapMaxAgreement `(streaming) <streaming_TempoTapMaxAgreement.html>`__