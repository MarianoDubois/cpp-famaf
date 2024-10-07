#include <stdio.h>
#include <stdbool.h>

int main(void){
    int condition;
    printf("cual Lab queres testear? \n");
    scanf("%d",&condition);
    switch(condition){
        case 1:
            Lab1();
            break;
        case 2:
            Lab2();
            break;
        case 3:
            Lab3();
            break;
        case 4:
            Lab4();
            break;
        default:
            break;
    }
}

//lab1
int Lab1(void){
    printf("introduzca 3 variables tipo int:\n");
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    return(printf("este es el resultado del Lab1: (%d, %d, %d, %d, %d)\n",
        (x+y+1),//1
        (z * z + y * 45 - 15 * x),//2
        (y - 2 == (x * 3 + 1) % 5),//3
        (y / 2 * x),//4
        (y < x * z)));//5
}

//lab2
int Lab2(void){
    printf("introduzca 5 variables tipo int:\n");
    int x,y,z,b,w;
    scanf("%d%d%d%d%d",&x,&y,&z,&b,&w);
    return(printf("el resultado de lab 2 es: (%d, %d, %d)\n",
    (x % 4 == 0),
    (x + y == 0 && y - x == (-1) * z),
    (!b && w)));   
}

//lab3
int Lab3(void){
    printf("introduzca 2 variables tipo int:\n");
    int x,y;
    scanf("%d%d",&x,&y);
    return(printf("el resultado del lab 3 es: (%d, (%d, %d), (%d, %d))\n",
    x,
    (x+y),
    (y+y),
    (y+y),
    (x+y*2)));
}

//lab4 si, es posible implementarlo y aca lo probamos
int Lab4(void){
    printf("introduzca 2 variables tipo int:\n");
    int x,y, aux;
    scanf("%d%d",&x,&y);
    aux = y;
    y = y+y;
    x = x+aux;
    return(printf("el resultado del lab 4 es: (%d, %d)\n", y, x));
}