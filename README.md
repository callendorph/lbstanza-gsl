# Stanza GSL Wrapper

This repo contains the implementation of a stanza package to wrap the
[GNU Scientific Library](https://www.gnu.org/software/gsl/) implementation.
The idea is to provide some advanced math libraries that would be useful
for engineering orientated programming.

Initial target functionality will be:

1.  Vectors, Matrices, and Linear Algebra
2.  Complex Math
3.  Polynomials, Chebyshev Approximations, etc.
4.  Random numbers/distributions and Monte-Carlo Methods.


## Why GSL?

1.  GSL is implemented in pure C unlike libraries like [Eigen](https://eigen.tuxfamily.org/index.php). [Stanza's `lostanza` framework](http://lbstanza.org/chapter11.html) really only supports C calling constructs, so any C++ or other language would require a second layer wrapper to get the job done - see the [Tetris example with QT](http://lbstanza.org/tetris.html).
2.  GSL is open-source and GPL Licensed which means that it is freely available and easily modified.
3.  GSL has more than just linear algebra - it has a lot of the tools that might be needed for advanced design and analysis with tools like [jitx](https://www.jitx.com/)

# How to Build

Current build is very manual:

1.  Download the [GSL v2.7 implementation](https://gnu.askapache.com/gsl/)
2.  Untar the GSL library into `./gsl-orig/gsl-2.7`. You will find the README for GSL in `gsl-orig/gsl-2.7/README`
3.  Do standard build in GSL `./configure`, `make`, and `make install`.
    1.  Note - On windows - I had to use cygwin to run the build.
    2.  You will want to make sure you use the same gcc version here as will be used for your stanza build later.
4.  Set environment variables to tell the `stanza` build system where to find the gsl libraries and headers.
    1.  Set `GSL_INCDIR` to the directory where the `gsl` headers are found.
    2.  Set `GSL_LIBDIR` to the directory where the `gsl` libraries `libgsl.a`, etc are found.
    3.  The `start.sh` script locally will define these in bash to the default `prefix` locations for the gsl build, ie `/usr/local/include/gsl` and `/usr/local/lib`, respectively.
4.  With that in place and a working `stanza` and `gcc` implementation on the path, you can run `./stanza.exe build gsl-tests` to build unit tests.

```
PS C:\tmp\gsl> stanza.exe build gsl-tests
PS C:\tmp\gsl> ./gsl-tests
[Test 1] gsl-elementary-test
[PASS]

Tests Finished: 1/1 tests passed. 0 tests skipped. 0 tests failed.

Longest Running Tests:
[PASS] gsl-elementary-test (3634 us)
```

# How to Use

**TODO**
