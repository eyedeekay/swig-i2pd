%module example
%{
/* Includes the header in the wrapper code */
#include "api.h"
%}

/* Parse the header file to generate wrappers */
%include "api.h"