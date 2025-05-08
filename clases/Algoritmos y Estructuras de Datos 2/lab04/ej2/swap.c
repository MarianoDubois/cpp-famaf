#include <stdlib.h>
#include <stdio.h>

void swap (int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(void){
    int r = 0, x = 6, y = 4;
    printf("\n%d, %d\n",x,y);
    swap(&x,&y);
    printf("\n%d, %d\n",x,y);
    r = 0;
    return r;
}