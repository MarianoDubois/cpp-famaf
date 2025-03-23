#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"

unsigned int fstring_length(fixstring s) {
    unsigned int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

bool fstring_eq(fixstring s1, fixstring s2) {
    bool equal = true;
    int j = 0;
    while (j < FIXSTRING_MAX && equal == true)
    {
        if (s1[j] != s2[j])
        {
            equal = false;
        }
        j++;
    }
    return equal;
}

bool fstring_less_eq(fixstring s1, fixstring s2) {
    bool less_eq = true;
    int k = 0;
    while (k < FIXSTRING_MAX && less_eq == true)
    {
        if (s1[k] > s2[k])
        {
            less_eq = false;
        }
        k++;
    }
    return less_eq;
}

