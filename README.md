# swig-i2pd

swig bindings for embedding i2pd in non-C++ applications, starting with Go. For
now, this is a "Lazy" wrapper, it simply consumes all the header files for both
libi2pd and libi2pd_client to generate a Go wrapper. The first application of
such a wrapper will be to bundle i2pd C++ and a SAM API into a Go application,
but the binding should work with anything that SWIG supports. Because it's so
lazy, the binding is generated on the fly from the latest i2pd release code.

