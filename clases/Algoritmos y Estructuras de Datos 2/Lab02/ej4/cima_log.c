#include <stdio.h>
#include <stdbool.h>
#include "cima_log.h"

/**
 * @brief Dado un arreglo que tiene cima, devuelve la posición de la cima
 * usando la estrategia divide y venceras.
 *
 * Un arreglo tiene cima si existe una posición k tal que el arreglo es
 * estrictamente creciente hasta la posición k y estrictamente decreciente
 * desde la posición k.
 * La cima es el elemento que se encuentra en la posición k.
 * PRECONDICION: tiene_cima(a, length)
 *
 * @param a Arreglo.
 * @param length Largo del arreglo.
 */
int cima_rec(int a[], int left, int right)
{
    //variables
    int cima_pos = -1;
    int middle = (left+right)/2;

    //codigo/logica
    if (left == right)//""caso base""
    {
        cima_pos = left;
    }
    else if (a[middle] > a[middle+1] && a[middle] > a[middle-1])//check de cima
    {
        cima_pos = middle;
    }
    else if (a[middle] < a[middle+1])//recursion por derecha del array
    {
        cima_pos = cima_rec(a,middle+1,right);
    }
    else//recursion por izquierda
    {
        cima_pos = cima_rec(a,left,middle-1);
    }

    //output
    return cima_pos;
}

int cima_log(int a[], int length) {
    int cima = cima_rec(a,0,length-1);
    return cima;
}

