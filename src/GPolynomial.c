/**
  This file is a wrapper around the GSL Complex
  Type. The GSL library uses static values with copy
  in most of its methods. This makes it very difficult to
  work with lbstanza. So this is a wrapper that allows me to
  pass in references to a gsl_complex by pointer
*/

#include "gsl_complex.h"
#include "gsl_poly.h"

void w_gsl_poly_complex_eval(const double c[], const int len, gsl_complex *z, gsl_complex *result) {
  (*result) = gsl_poly_complex_eval(c, len, *z);
}

void w_gsl_complex_poly_complex_eval(const gsl_complex c[], const int len, gsl_complex *z, gsl_complex *result) {
  (*result) = gsl_complex_poly_complex_eval(c, len, *z);
}

