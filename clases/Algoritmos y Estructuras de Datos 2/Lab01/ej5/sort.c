#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "array_helpers.h"
#include "sort_helpers.h"
#include "sort.h"
#include "fixstring.h"

static unsigned int partition(fixstring a[], unsigned int izq, unsigned int der) {
    unsigned int i = izq + 1;
    unsigned int j = der;
    unsigned int ppiv = izq;

    while (i <= j) {
        while (i <= der && goes_before(a[i], a[ppiv])) {
            i++;
        }
        while (j > izq && goes_before(a[ppiv], a[j])) {
            j--;
        }
        if (i < j) {
            swap(a, i, j);
            i++;
            j--;
        }
    }
    swap(a, ppiv, j);
    return j;
}


static void quick_sort_rec(fixstring a[], unsigned int izq, unsigned int der) 
{
    unsigned int ppiv = 0;
    if (der > izq)
    {
        ppiv = partition(a,izq,der);
        quick_sort_rec(a,izq,(ppiv == 0) ? 0 : ppiv-1);
        quick_sort_rec(a,ppiv+1,der);
    }
}

void quick_sort(fixstring a[], unsigned int length) 
{
    quick_sort_rec(a, 0, (length == 0) ? 0 : length - 1);
}


