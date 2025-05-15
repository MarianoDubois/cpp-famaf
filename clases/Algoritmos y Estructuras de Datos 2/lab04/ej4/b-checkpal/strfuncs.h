#ifndef _STRFUNCS_H_
#define _STRFUNCS_H_

#include <stdbool.h>


size_t string_length(const char *str);

char *string_filter(const char *str, char c);

bool string_is_symmetric(const char *str);


#endif