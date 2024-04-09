Real-time inference with simultaneous essentia-tensorflow classifiers
=====================================================================

We are relying on soundcard to capture the audio loopback of the system.
If not available it can be installed with ``pip``

.. code:: ipython3

    !pip install pysoundcard

.. code:: ipython3

    %matplotlib nbagg
    
    import numpy as np
    from scipy.special import softmax
    import matplotlib.pyplot as plt
    import soundcard as sc
    
    from struct import unpack
    from IPython import display
    
    from essentia.streaming import *
    from essentia import Pool, run, array, reset

For this demo, we will use four of our transfer learning classifiers:
``danceability``, ``voice_instrumental``, ``mood_aggressive``, and
``mood_happy``. These and more models can be downloaded from `Essentia
models <https://essentia.upf.edu/models.html>`__ site.

.. code:: ipython3

    !wget https://essentia.upf.edu/models/classifiers/danceability/danceability-musicnn-msd-1.pb
    !wget https://essentia.upf.edu/models/classifiers/voice_instrumental/voice_instrumental-musicnn-msd-1.pb 
    !wget https://essentia.upf.edu/models/classifiers/mood_aggressive/mood_aggressive-musicnn-msd-1.pb 
    !wget https://essentia.upf.edu/models/classifiers/mood_happy/mood_happy-musicnn-msd-1.pb 

Parameters optimized for real-time inference
--------------------------------------------

.. code:: ipython3

    # model parameters
    inputLayer = 'model/Placeholder'
    outputLayer = 'model/Sigmoid'
    
    labels = ['danceability', 'voice_instrumental', 'aggressiveness', 'happiness']
    nLabels = len(labels)
    
    sampleRate = 16000
    frameSize = 512 
    hopSize = 256
    numberBands = 96
    
    # analysis parameters
    patchSize = 64
    displaySize = 10
    
    bufferSize = patchSize * hopSize

Instantiate and connect the algorithms
--------------------------------------

.. code:: ipython3

    buffer = np.zeros(bufferSize, dtype='float32')
    
    vimp = VectorInput(buffer)
    
    fc = FrameCutter(frameSize=frameSize, hopSize=hopSize)
    
    tim = TensorflowInputMusiCNN()
    
    vtt = VectorRealToTensor(shape=[1, 1, patchSize, numberBands],
                             lastPatchMode='discard')
    
    ttp = TensorToPool(namespace=inputLayer)
    
    tfp_danceability = TensorflowPredict(graphFilename='danceability-musicnn-msd-1.pb',
                            inputs=[inputLayer],
                            outputs=[outputLayer])
    tfp_voice_instrumental = TensorflowPredict(graphFilename='voice_instrumental-musicnn-msd-1.pb',
                            inputs=[inputLayer],
                            outputs=[outputLayer])
    tfp_aggressive = TensorflowPredict(graphFilename='mood_aggressive-musicnn-msd-1.pb',
                            inputs=[inputLayer],
                            outputs=[outputLayer])
    tfp_happy = TensorflowPredict(graphFilename='mood_happy-musicnn-msd-1.pb',
                            inputs=[inputLayer],
                            outputs=[outputLayer])
    
    ptt_danceability = PoolToTensor(namespace=outputLayer)
    ptt_voice_instrumental = PoolToTensor(namespace=outputLayer)
    ptt_aggressive = PoolToTensor(namespace=outputLayer)
    ptt_happy = PoolToTensor(namespace=outputLayer)
    
    ttv_danceability = TensorToVectorReal()
    ttv_voice_instrumental = TensorToVectorReal()
    ttv_aggressive = TensorToVectorReal()
    ttv_happy = TensorToVectorReal()
    
    pool = Pool()

.. code:: ipython3

    vimp.data   >> fc.signal
    fc.frame    >> tim.frame
    tim.bands   >> vtt.frame
    tim.bands   >> (pool, 'melbands')
    vtt.tensor  >> ttp.tensor
    
    ttp.pool  >> tfp_danceability.poolIn
    ttp.pool  >> tfp_voice_instrumental.poolIn
    ttp.pool  >> tfp_aggressive.poolIn
    ttp.pool  >> tfp_happy.poolIn
    
    tfp_danceability.poolOut        >> ptt_danceability.pool
    tfp_voice_instrumental.poolOut  >> ptt_voice_instrumental.pool
    tfp_aggressive.poolOut          >> ptt_aggressive.pool
    tfp_happy.poolOut               >> ptt_happy.pool
    
    ptt_danceability.tensor        >> ttv_danceability.tensor
    ptt_voice_instrumental.tensor  >> ttv_voice_instrumental.tensor
    ptt_aggressive.tensor          >> ttv_aggressive.tensor
    ptt_happy.tensor               >> ttv_happy.tensor
    
    ttv_danceability.frame         >> (pool, 'danceability')
    ttv_voice_instrumental.frame   >> (pool, 'voice_instrumental')
    ttv_aggressive.frame           >> (pool, 'aggressive')
    ttv_happy.frame                >> (pool, 'happy')

Callback to update the plots
----------------------------

.. code:: ipython3

    def callback(data):
        # update audio buffer
        buffer[:] =data.flatten()
    
        # generate predictions
        reset(vimp)
        run(vimp)
    
        # update mel and activation buffers
        melBuffer[:] = np.roll(melBuffer, -patchSize)
        melBuffer[:, -patchSize:] = pool['melbands'][-patchSize:,:].T
        img_mel.set_data(melBuffer)
        
        actBuffer[:] = np.roll(actBuffer, -1)
        
        actBuffer[:, -1] = [pool['danceability'][-1, 0],
                            pool['voice_instrumental'][-1, 1],
                            pool['aggressive'][-1, 0],
                            pool['happy'][-1, 0]]
        img_act.set_data(actBuffer)
    
        # update plots
        f.canvas.draw()

Start processing the loopback stream
------------------------------------

.. code:: ipython3

    # initialize plot buffers
    melBuffer = np.zeros([numberBands, patchSize * displaySize])
    actBuffer = np.zeros([nLabels, displaySize])
    
    # reset storage
    pool.clear()
    
    # initialize plots
    f, ax = plt.subplots(1, 2, figsize=[9.6, 7])
    f.canvas.draw()
    
    ax[0].set_title('Mel Bands')
    img_mel = ax[0].imshow(melBuffer, aspect='auto',
                           origin='lower', vmin=0, vmax=6)
    ax[0].set_xticks([])
    
    ax[1].set_title('Activations')
    img_act = ax[1].matshow(actBuffer, aspect='auto', vmin=0, vmax=1)
    ax[1].set_xticks([])
    ax[1].yaxis.set_ticks_position('right')
    plt.yticks(np.arange(nLabels), labels, fontsize=8)
    f.colorbar(img_act, ax=ax[1], orientation='horizontal')
    
    # capture and process the speakers loopback
    with sc.all_microphones(include_loopback=True)[0].recorder(samplerate=sampleRate) as mic:
        while True:
            callback(mic.record(numframes=bufferSize).mean(axis=1))

