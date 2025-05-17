#include <stdio.h>
#include "lists.h"

int main(void) {
    list_t l = empty();

    addl(10, &l);
    addl(20, &l);
    addl(30, &l);

    printf("Primer elemento: %d\n", head(l));
    printf("Segundo elemento: %d\n", head(tail(l)));

    destroy(&l);
    return 0;
}
