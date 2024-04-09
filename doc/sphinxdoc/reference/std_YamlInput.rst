:orphan:

Algorithm reference - YamlInput (standard mode)
===============================================

Outputs
-------

 - ``pool`` (*pool*) - Pool of deserialized values

Parameters
----------

 - ``filename`` (*string*) :
     Input filename
 - ``format`` (*string ∈ {json, yaml}, default = yaml*) :
     whether to the input file is in JSON or YAML format

Description
-----------

This algorithm deserializes a file formatted in YAML to a Pool. This file can be serialized back into a YAML file using the YamlOutput algorithm. See the documentation for YamlOutput for more information on the specification of the YAML file.

Note: If an empty sequence is encountered (i.e. "[]"), this algorithm will assume it was intended to be a sequence of Reals and will add it to the output pool accordingly. This only applies to sequences which contain empty sequences. Empty sequences (which are not subsequences) are not possible in a Pool and therefore will be ignored if encountered (i.e. foo: [] (ignored), but foo: [[]] (added as a vector of one empty vector of reals).


See also
--------

YamlOutput `(standard) <std_YamlOutput.html>`__