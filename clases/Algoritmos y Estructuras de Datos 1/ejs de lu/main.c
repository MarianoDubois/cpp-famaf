#include <stdio.h>
#include <stdlib.h>

int main()
{
    int respuesta;
    do
    {
        printf("Ingrese el número de lab al que quiere acceder\n");
        printf("O ingrese 0 para salir\n");
        scanf("%d", &respuesta);

        switch(respuesta) {
            case 1:
                {
                    int x, y, z;
                    printf("Ingrese x, y \n");
                    scanf("%d %d", &x, &y);

                    z=x;
                    x=y;
                    y=z;

                    printf("x=%d\n", x);
                    printf("y=%d\n", y);

                    break;
                }
            case 2:
                {
                    int x, y, z, k;
                    printf("Ingrese x, y \n");
                    scanf("%d %d", &x, &y);

                    y+=x;
                    x++;

                    printf("x=%d\n", x);
                    printf("y=%d\n", y);

                    printf("Ingrese x, y, z \n");
                    scanf("%d %d %d", &x, &y, &z);

                    k=y;

                    y += x+z;
                    z = k+x;
                    x = k;

                    printf("x=%d\n", x);
                    printf("y=%d\n", y);
                    printf("z=%d\n", z);

                    break;
                }
            case 4:
                {
                    int x,y, E;
                    printf("Ingrese x, y \n");
                    scanf("%d %d", &x, &y);

                    if (x>=y)
                        E=y;
                    else
                        E=x;
                    printf("Elmenor de los dos es %d\n", E);

                    /// b

                    printf("Ingrese x\n");
                    scanf("%d", &x);

                    if (x<0)
                        x = -1*x;

                    printf("El valor absoluto de x es %d\n", x);

                    break;
                }
            case 0:
                printf("Saliendo...");
        }
    }
    while (respuesta!=0);
    return 0;
}
