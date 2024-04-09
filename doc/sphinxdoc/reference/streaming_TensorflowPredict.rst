:orphan:

Algorithm reference - TensorflowPredict (streaming mode)
========================================================

Inputs
------

 - ``poolIn`` (*pool*) - the pool where to get the feature tensors

Outputs
-------

 - ``poolOut`` (*pool*) - the pool where to store the output tensors

Parameters
----------

 - ``graphFilename`` (*string, default = ""*) :
     the name of the file from which to load the TensorFlow graph
 - ``inputs`` (*vector_string*) :
     will look for these namespaces in poolIn. Should match the names of the input nodes in the Tensorflow graph
 - ``isTraining`` (*bool ∈ {true, false}, default = false*) :
     run the model in training mode (normalized with statistics of the current batch) instead of inference mode (normalized with moving statistics). This only applies to some models
 - ``isTrainingName`` (*string, default = ""*) :
     the name of an additional input node indicating whether the model is to be run in a training mode (for models with a training mode, leave it empty otherwise)
 - ``outputs`` (*vector_string*) :
     will save the tensors on the graph nodes named after `outputs` to the same namespaces in the output pool. Set the first element of this list as an empty array to print all the available nodes in the graph
 - ``savedModel`` (*string, default = ""*) :
     the name of the TensorFlow SavedModel. Overrides parameter `graphFilename`
 - ``squeeze`` (*bool ∈ {true, false}, default = true*) :
     remove singleton dimensions of the inputs tensors. Does not apply to the batch dimension
 - ``tags`` (*vector_string, default = ["serve"]*) :
     the tags of the savedModel

Description
-----------

This algorithm runs a Tensorflow graph and stores the desired output tensors in a pool.
The Tensorflow graph should be stored in Protocol Buffer (.pb) binary format [1] or as a SavedModel [2], and should contain both the architecture and the weights of the model.
The parameter `inputs` should contain a list with the names of the input nodes that feed the model. The input Pool should contain the tensors corresponding to each input node stored using Essetia tensors. The pool namespace for each input tensor has to match the input node's name.
In the same way, the `outputs` parameter should contain the names of the tensors to save. These tensors will be stored inside the output pool under a namespace that matches the tensor's name. TensorFlow nodes return tensors identified as `nodeName:n`, where `n` goes from 0 to the number of outputs of the node - 1. The first output tensor of a node can be referred implicitly (e.g., `nodeName`) or explicitly (e.g., `nodeName:0`), and the subsequent tensors require the specific index (e.g., nodeName:1, nodeName:2). In TensorFlow 2 SavedModels all the outputs of the model are contained in the `PartitionedCall` node (e.g., `PartitionedCall:0`, `PartitionedCall:1`). You can use TenorFlow's `saved_model_cli` to find the relation of outputs and `PartitionedCall` indices, for example:

>>>    saved_model_cli show --dir SavedModel/ --all
>>>    ...
>>>    The given SavedModel SignatureDef contains the following output(s):
>>>      outputs['activations'] tensor_info:
>>>          dtype: DT_FLOAT
>>>          shape: (1, 400)
>>>          name: PartitionedCall:0
>>>      outputs['embeddings'] tensor_info:
>>>          dtype: DT_FLOAT
>>>          shape: (1, 1280)
>>>          name: PartitionedCall:1
>>>    ...

To print a list with all the available nodes in the graph set the first element of `outputs` as an empty string (i.e., "").
This algorithm is a wrapper for the Tensorflow C API [3]. The first time it is configured with a non-empty `graphFilename` it will try to load the contained graph and to attach a Tensorflow session to it. The reset method deletes the current session (and the resources attached to it) and creates a new one relying on the available graph. By reconfiguring the algorithm the graph is reloaded and the reset method is called.


References:
  [1] TensorFlow - An open source machine learning library for research and production.
  https://www.tensorflow.org/extend/tool_developers/#protocol_buffers

  [2] TensorFlow - An open source machine learning library for research and production.
  https://www.tensorflow.org/guide/saved_model

  [3] TensorFlow - An open source machine learning library for research and production.
  https://www.tensorflow.org/api_docs/cc/


See also
--------

TensorflowPredict `(standard) <std_TensorflowPredict.html>`__