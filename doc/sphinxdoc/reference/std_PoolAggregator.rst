:orphan:

Algorithm reference - PoolAggregator (standard mode)
====================================================

Inputs
------

 - ``input`` (*pool*) - the input pool

Outputs
-------

 - ``output`` (*pool*) - a pool containing the aggregate values of the input pool

Parameters
----------

 - ``defaultStats`` (*vector_string, default = ["mean", "stdev", "min", "max", "median"]*) :
     the default statistics to be computed for each descriptor in the input pool
 - ``exceptions`` (*map_vector_string, default = {}*) :
     a mapping between descriptor names (no duplicates) and the types of statistics to be computed for those descriptors (e.g. { lowlevel.bpm : [min, max], lowlevel.gain : [var, min, dmean] })

Description
-----------

This algorithm performs statistical aggregation on a Pool and places the results of the aggregation into a new Pool. Supported statistical units are:

  - 'min' (minimum),
  - 'max' (maximum),
  - 'median',
  - 'mean',
  - 'var' (variance),
  - 'stdev' (standard deviation),
  - 'skew' (skewness),
  - 'kurt' (kurtosis),
  - 'dmean' (mean of the derivative),
  - 'dvar' (variance of the derivative),
  - 'dmean2' (mean of the second derivative),
  - 'dvar2' (variance of the second derivative),
  - 'cov' (covariance), and
  - 'icov' (inverse covariance).
  - 'value' (copy of descriptor, but the value is placed under the name '<descriptor name>.value')
  - 'copy' (verbatim copy of descriptor, no aggregation; exclusive: cannot be performed with any other statistical units).
  - 'last' (last value of descriptor placed under the name '<descriptor name>'; exclusive: cannot be performed with any other statistical units


These statistics can be computed for single-dimensional vectors (vectors of Reals) and two-dimensional vectors (vectors of vectors of Reals) in the Pool. Statistics for two-dimensional vectors are computed by aggregating each column placing the result into a vector of the same size as the size of each vector in the input Pool under the given descriptor (which implies their equal size).

In the case of 'cov' and 'icov', two-dimensional vectors are required, and each statistic returns a square matrix with the dimensions equal to the length of the vectors under the given descriptor. Computing 'icov' requires the corresponding covariance matrix to be invertible.

Note that only the absolute values of the first and second derivatives are considered when computing their mean ('dmean' and 'dmean2') and variance ('dvar' and 'dvar2'). This is to avoid a trivial solution for the mean.

For vectors, if the input pool value consists of only one vector, its aggregation will be skipped, and the vector itself will be added to the output.

The 'value' and 'copy' are auxiliary aggregation methods that can be used to copy values in the input Pool to the output Pool without aggregation. In the case of 'last', the last value in the input vector of Reals (or input vector of vectors of Reals) will be taken and saved as a single Real (or single vector of Reals) in the output Pool.


See also
--------

PoolAggregator `(streaming) <streaming_PoolAggregator.html>`__