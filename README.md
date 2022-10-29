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

**TODO**

# How to Use

**TODO**