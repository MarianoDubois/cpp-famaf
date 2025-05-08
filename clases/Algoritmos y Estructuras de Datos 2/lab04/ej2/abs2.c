#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void absolute(int x, int *y) {
    if (x >= 0)
    {
        *y = x;
    }
    else
    {
        *y = -x;
    }
}

int main(void) {
    int a=0, res=0;  // No modificar esta declaración
    // --- No se deben declarar variables nuevas ---

    a = 10;
    absolute(a,&res);
    printf("\n%d\n",res);
    assert(res >= 0 && (res == a || res == -a));
    return EXIT_SUCCESS;
}

//c) 1. *y es in/out
//   2. admite parametros in y in/out, no existen out puros porque seria una funcion o no se puede porque tendria que se un puntero entonces seria obligatoriamemte un in/out
