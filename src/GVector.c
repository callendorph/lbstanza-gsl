
#include "gsl_vector.h"

size_t gsl_vector_get_stride(gsl_vector *v) {
  return v->stride;
}
