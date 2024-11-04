#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Lab 1
    printf("Lab 1\n");
    int x, y, z, r1, r2, r4;
    _Bool r3, r5,r6;
    printf("Ingrese x, y, z\n");
    scanf("%d %d %d", &x, &y, &z);

    r1 = x + y + 1;
    r2 = z * z + y * 45 - 15 * x;
    r3 = y - 2 == (x * 3 + 1) % 5;
    r4 = y / 2 * x;
    r5 = y < x * z;

    printf("r1 = %d\n", r1);
    printf("r2 = %d\n", r2);
    printf("r3 = %d\n", r3);
    printf("r4 = %d\n", r4);
    printf("r5 = %d\n", r5);

    ///Lab 2
    printf("Lab 2\n");
    x = 4;
    y = -4;
    z = 8;

    _Bool b, w;

    b = 1;
    w = 1;

    r3 = x%4 == 0;
    r5 = x+y == 0 && y - x == (-1) * z;
    r6 = !(b && w);

    printf("r3 = %d\n", r3);
    printf("r5 = %d\n", r5);
    printf("r6 = %d\n", r6);

    ///Lab 3
    printf("Lab 3\n");
    ///a
    scanf("%d",&x);
    x = 5;
    printf("x=%d\n", x);

    ///b
    scanf("%d %d",&x, &y);
    x = x + y;
    y = y + y;
    printf("x=%d\n", x);
    printf("y=%d\n", y);

    ///c
    scanf("%d %d",&x, &y);
    y = y + y;
    x = x + y;
    printf("y=%d\n", y);
    printf("x=%d\n", x);


    ///Lab 4

    ///Es posible implementarlo, pero no en una sola linea. Sería igual que el punto c

    ///Lab 5
    printf("Lab 5\n");
    ///a , b , c
    scanf("%d %d",&x, &y);
    if (x>=y)
        x=0;
    else
        x=2;
    printf("x=%d\n", x);

   ///Lab 6
   printf("Lab 6\n");
   int m;
   scanf("%d %d %d %d",&x, &y, &z, &m);
   if (x<y)
        m=x;
    else
        m=y;
    printf("m=%d\n", m);
    scanf("%d %d %d %d",&x, &y, &z, &m);
    if (m>=z)
        m=z;
    printf("m=%d\n", m);

    ///Lab 7
    printf("Lab 7\n");
    ///a
    int i;
    scanf("%d",&i);
    while (i!=0)
        i-=1;
    printf("i=%d\n", i);

    ///b
    scanf("%d",&i);
    while (i!=0)
        i=0;
    printf("i=%d\n", i);

    ///c
    scanf("%d",&i);
    while (i<0)
        i-=1;
    printf("i=%d\n", i);
    ///No funciona con negativos ( es un ciclo infinito )

    ///Lab 8
    printf("Lab 8\n");

    ///a
    ///División entera de x/y
    scanf("%d %d %d",&x, &y, &i);
    i = 0;
    while (x>=y)
    {
        x-=y;
        i+=1;
    }
    printf("i=%d\n", i);

    ///b
    ///Ver si un número es primo
    _Bool res;
    scanf("%d %d %d",&x, &i, &res);
    i=2;
    res = 1;
    while (i<x && res)
    {
        res = res && (x%i!=0);
        i=i+1;
    }
    printf("res=%d\n", res);

    ///Lab 9
    printf("Lab 9\n");

    ///a
    int A[4], s;
    scanf("%d %d",&i, &s);
    for (int j=0; j<4 ; j++)
    {
        int d;
        scanf("%d",&d);
        A[j]=d;
    }
    i = 0;
    s = 0;
    while (i < 4)
    {
        s = A[i];
        i++;
    }
    printf("s=%d\n", s);

    ///b
    ///Cuenta los elementos positivos de x
    int c;
    scanf("%d %d",&i, &c);
    for (int j=0; j<4 ; j++)
    {
        int d;
        scanf("%d",&d);
        A[j]=d;
    }
    i = 0;
    c = 0;
    while (i < 4)
    {
        if (A[i] > 0)
            c++;
        i++;
    }
    printf("c=%d\n", c);

    return 0;
}

