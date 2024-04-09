Interpeak detection estrategies
===============================

this notebook demostrates some of the intersample detection technuques:
**throw resampling** and throw **parabolic interpolation**. The accuracy
of both methods can be tested on real time by shifting a sinc function
from the sampling point and evaluating the error introduced by both
systems

.. code:: ipython2

    import ipywidgets as wg
    import essentia.standard as es
    import numpy as np
    import matplotlib
    matplotlib.use('TkAgg')
    import matplotlib.pyplot as plt

.. code:: ipython2

    # Parameters
    
    duration = 10 # s
    fs = 1 # hz 
    k = 1. # amplitude
    oversamplingFactor = 4 # factor of oversampling for the real signal
    nSamples = fs * duration
    
    time = np.arange(-nSamples/2, nSamples/2,
                     2 ** -oversamplingFactor, dtype='float')
    samplingPoints = time[::2 ** oversamplingFactor]

.. code:: ipython2

    def shifted_sinc(x, k, offset):
        xShifted = x - offset
        y = np.zeros(len(xShifted))
        for idx, i in enumerate(xShifted):
            if not i: 
                y[idx] = k
            else:
                y[idx] = (k * np.sin(np.pi * i) / (np.pi * i))
        return y

.. code:: ipython2

    def resampleStrategy(y, fs, quality=0, oversampling=4):
        yResample = es.Resample(inputSampleRate=fs,
                                outputSampleRate=fs*oversampling, 
                                quality=quality)(y.astype(np.float32))
        
        tResample = np.arange(np.min(samplingPoints), np.max(samplingPoints) 
                              + 1, 1. / (fs * oversampling))
        tResample = tResample[:len(yResample)]        
        
        # getting the stimated peaks
        yResMax = np.max(yResample)
        tResMax = tResample[np.argmax(yResample)]
        
        return yResample, tResample, yResMax, tResMax

.. code:: ipython2

    def parabolicInterpolation(y, threshold=.6):
        # todo plot the parabol maybe
        positions, amplitudes = es.PeakDetection(threshold=threshold)\
                                            (y.astype(np.float32))
           
        pos = int(positions[0] * (len(y-1)))
        a = y[pos - 1]
        b = y[pos]
        c = y[pos + 1]
    
        tIntMax = samplingPoints[pos] + (a - c) / (2 * (a - 2 * b + c))
        yIntMax = b - ((a - b) ** 2) / (8 * (a - 2 * b + c))
        return tIntMax, yIntMax

.. code:: ipython2

    def process():
        
        ## Processing
        
        # "real" sinc
        yReal = shifted_sinc(time, k, offset.value)
        
        # sampled sinc
        y = shifted_sinc(samplingPoints, k, offset.value)
        
        
        # Resample strategy
        yResample, tResample, yResMax, tResMax = \
            resampleStrategy(y, fs, quality=0, oversampling=4)
        
        # Parabolic Interpolation extrategy
        tIntMax, yIntMax = parabolicInterpolation(y)
        
        
        
        ## Plotting
        ax.clear()
        plt.title('Interpeak detection estrategies')
        ax.grid(True)
        ax.grid(xdata=samplingPoints)
        
        
        ax.plot(time, yReal, label='real signal')
        yRealMax = np.max(yReal)
        
        sampledLabel = 'sampled signal. Error:{:.3f}'\
                       .format(np.abs(np.max(y) - yRealMax))
        ax.plot(samplingPoints, y, label=sampledLabel, ls='-.',
             color='r', marker='x', markersize=6, alpha=.7)
    
        ax.plot(tResample, yResample, ls='-.',
                     color='y', marker='x', alpha=.7)
    
        resMaxLabel = 'Resample Peak. Error:{:.3f}'\
                      .format(np.abs(yResMax - yRealMax))
        ax.plot(tResMax, yResMax, label= resMaxLabel, 
                color='y', marker = 'x', markersize=12)
    
        intMaxLabel = 'Interpolation Peak. Error:{:.3f}'\
                      .format(np.abs(yIntMax - yRealMax))
        ax.plot(tIntMax, yIntMax, label= intMaxLabel, 
                marker = 'x', markersize=12)
        
        
        fig.legend()
        fig.show()

.. code:: ipython2

    offset = wg.FloatSlider()
    offset.max = 1
    offset.min = -1
    offset.step = .1
    display(offset)
    fig, ax = plt.subplots()
    process()
    
    def on_value_change(change):
        process()
        
    offset.observe(on_value_change, names='value')



.. raw:: html

    <p>Failed to display Jupyter Widget of type <code>FloatSlider</code>.</p>
    <p>
      If you're reading this message in the Jupyter Notebook or JupyterLab Notebook, it may mean
      that the widgets JavaScript is still loading. If this message persists, it
      likely means that the widgets JavaScript library is either not installed or
      not enabled. See the <a href="https://ipywidgets.readthedocs.io/en/stable/user_install.html">Jupyter
      Widgets Documentation</a> for setup instructions.
    </p>
    <p>
      If you're reading this message in another frontend (for example, a static
      rendering on GitHub or <a href="https://nbviewer.jupyter.org/">NBViewer</a>),
      it may mean that your frontend doesn't currently support widgets.
    </p>



