:orphan:

Algorithm reference - YamlOutput (standard mode)
================================================

Inputs
------

 - ``pool`` (*pool*) - Pool to serialize into a YAML formatted file

Parameters
----------

 - ``doubleCheck`` (*bool, default = false*) :
     whether to double-check if the file has been correctly written to the disk
 - ``filename`` (*string, default = -*) :
     output filename (use '-' to emit to stdout)
 - ``format`` (*string ∈ {json, yaml}, default = yaml*) :
     whether to output data in JSON or YAML format
 - ``indent`` (*integer, default = 4*) :
     (json only) how many characters to indent each line, or 0 for no newlines
 - ``writeVersion`` (*bool, default = true*) :
     whether to write the essentia version to the output file

Description
-----------

This algorithm emits a YAML or JSON representation of a Pool.

Each descriptor key in the Pool is decomposed into different nodes of the YAML (JSON) format by splitting on the '.' character. For example a Pool that looks like this:

    foo.bar.some.thing: [23.1, 65.2, 21.3]

will be emitted as:

    metadata:
        essentia:
            version: <version-number>

    foo:
        bar:
            some:
                thing: [23.1, 65.2, 21.3]

