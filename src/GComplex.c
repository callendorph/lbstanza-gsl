/**
  This file is a wrapper around the GSL Complex
  Type. The GSL library uses static values with copy
  in most of its methods. This makes it very difficult to
  work with lbstanza. So this is a wrapper that allows me to
  pass in references to a gsl_complex by pointer
*/

#include "gsl_complex.h"
#include "gsl_complex_math.h"

void w_gsl_complex_rect(gsl_complex *obj, double x, double y) {
  GSL_SET_COMPLEX(obj,x,y);
}

void w_gsl_complex_polar(gsl_complex *obj, double r, double th) {
  (*obj) = gsl_complex_polar(r, th);
}

double w_gsl_complex_real(gsl_complex *obj) {
  return GSL_COMPLEX_P_REAL(obj);
}

double w_gsl_complex_imag(gsl_complex *obj) {
  return GSL_COMPLEX_P_IMAG(obj);
}

double w_gsl_complex_arg(gsl_complex *obj) {
  return gsl_complex_arg(*obj);
}

double w_gsl_complex_abs(gsl_complex *obj) {
  return gsl_complex_abs(*obj);
}

double w_gsl_complex_abs2(gsl_complex *obj) {
  return gsl_complex_abs2(*obj);
}

double w_gsl_complex_logabs(gsl_complex *obj) {
  return gsl_complex_logabs(*obj);
}

void w_gsl_complex_add(gsl_complex *A, gsl_complex *B, gsl_complex *Z) {
  *Z = gsl_complex_add(*A, *B);
}

void w_gsl_complex_sub(gsl_complex *A, gsl_complex *B, gsl_complex *Z) {
  *Z = gsl_complex_sub(*A, *B);
}

void w_gsl_complex_mul(gsl_complex *A, gsl_complex *B, gsl_complex *Z) {
  *Z = gsl_complex_mul(*A, *B);
}

void w_gsl_complex_div(gsl_complex *A, gsl_complex *B, gsl_complex *Z) {
  *Z = gsl_complex_div(*A, *B);
}

void w_gsl_complex_add_real(gsl_complex *A, double B, gsl_complex *Z) {
  *Z = gsl_complex_add_real(*A, B);
}

void w_gsl_complex_sub_real(gsl_complex *A, double B, gsl_complex *Z) {
  *Z = gsl_complex_sub_real(*A, B);
}

void w_gsl_complex_mul_real(gsl_complex *A, double B, gsl_complex *Z) {
  *Z = gsl_complex_mul_real(*A, B);
}

void w_gsl_complex_div_real(gsl_complex *A, double B, gsl_complex *Z) {
  *Z = gsl_complex_div_real(*A, B);
}

void w_gsl_complex_add_imag(gsl_complex *A, double B, gsl_complex *Z) {
  *Z = gsl_complex_add_imag(*A, B);
}

void w_gsl_complex_sub_imag(gsl_complex *A, double B, gsl_complex *Z) {
  *Z = gsl_complex_sub_imag(*A, B);
}

void w_gsl_complex_mul_imag(gsl_complex *A, double B, gsl_complex *Z) {
  *Z = gsl_complex_mul_imag(*A, B);
}

void w_gsl_complex_div_imag(gsl_complex *A, double B, gsl_complex *Z) {
  *Z = gsl_complex_div_imag(*A, B);
}

void w_gsl_complex_inverse(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_inverse(*A);
}

void w_gsl_complex_negative(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_negative(*A);
}

// Elementary Functions

void w_gsl_complex_sqrt(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_sqrt(*A);
}

void w_gsl_complex_sqrt_real(double A, gsl_complex *Z) {
  *Z = gsl_complex_sqrt_real(A);
}

void w_gsl_complex_pow(gsl_complex *X, gsl_complex *Y, gsl_complex *Z) {
  *Z = gsl_complex_pow(*X, *Y);
}

void w_gsl_complex_pow_real(gsl_complex *X, double Y, gsl_complex *Z) {
  *Z = gsl_complex_pow_real(*X, Y);
}

void w_gsl_complex_exp(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_exp(*A);
}

void w_gsl_complex_log(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_exp(*A);
}

void w_gsl_complex_log10(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_exp(*A);
}

void w_gsl_complex_log_b(gsl_complex *A, gsl_complex *B, gsl_complex *Z) {
  *Z = gsl_complex_log_b(*A, *B);
}

// Trig Functions

void w_gsl_complex_sin(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_sin(*A);
}

void w_gsl_complex_cos(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_cos(*A);
}

void w_gsl_complex_tan(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_tan(*A);
}

void w_gsl_complex_sec(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_sec(*A);
}

void w_gsl_complex_csc(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_csc(*A);
}

void w_gsl_complex_cot(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_cot(*A);
}

// Inverse Trig Function

void w_gsl_complex_arcsin(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arcsin(*A);
}

void w_gsl_complex_arcsin_real(double A, gsl_complex *Z) {
  *Z = gsl_complex_arcsin_real(A);
}

void w_gsl_complex_arccos(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arccos(*A);
}

void w_gsl_complex_arccos_real(double A, gsl_complex *Z) {
  *Z = gsl_complex_arccos_real(A);
}

void w_gsl_complex_arctan(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arctan(*A);
}

void w_gsl_complex_arcsec(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arcsec(*A);
}

void w_gsl_complex_arcsec_real(double A, gsl_complex *Z) {
  *Z = gsl_complex_arcsec_real(A);
}

void w_gsl_complex_arccsc(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arccsc(*A);
}

void w_gsl_complex_arccsc_real(double A, gsl_complex *Z) {
  *Z = gsl_complex_arccsc_real(A);
}

void w_gsl_complex_arccot(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arccot(*A);
}

// Hyperbolic functions

void w_gsl_complex_sinh(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_sinh(*A);
}

void w_gsl_complex_cosh(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_cosh(*A);
}

void w_gsl_complex_tanh(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_tanh(*A);
}

void w_gsl_complex_sech(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_sech(*A);
}

void w_gsl_complex_csch(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_csch(*A);
}

void w_gsl_complex_coth(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_coth(*A);
}

// Inverse Hyperbolic Functions

void w_gsl_complex_arcsinh(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arcsinh(*A);
}

void w_gsl_complex_arccosh(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arccosh(*A);
}

void w_gsl_complex_arccosh_real(double A, gsl_complex *Z) {
  *Z = gsl_complex_arccosh_real(A);
}

void w_gsl_complex_arctanh(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arctanh(*A);
}

void w_gsl_complex_arctanh_real(double A, gsl_complex *Z) {
  *Z = gsl_complex_arctanh_real(A);
}

void w_gsl_complex_arcsech(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arcsech(*A);
}

void w_gsl_complex_arccsch(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arccsch(*A);
}

void w_gsl_complex_arccoth(gsl_complex *A, gsl_complex *Z) {
  *Z = gsl_complex_arccoth(*A);
}

