#include <stdbool.h>
#include <stdio.h>
#include "k_esimo.h"

// FUNCIONES INTERNAS DEL MÓDULO:
int partition(int a[], int izq, int der);
bool goes_before(int x, int y);
void swap(int a[], int i, int j);

/**
 * @brief K-esimo elemento mas chico del arreglo a.
 *
 * Devuelve el elemento del arreglo `a` que quedaría en la celda `a[k]` si el
 * arreglo estuviera ordenado. La función puede modificar el arreglo.
 * Dicho de otra forma, devuelve el k-esimo elemento mas chico del arreglo a.
 *
 * @param a Arreglo.
 * @param length Largo del arreglo.
 * @param k Posicion dentro del arreglo si estuviera ordenado.
 */
int k_esimo(int a[], int length,  int k) {
    int pivot, left, right;
    left = 0;
    right = length-1;
    pivot = partition(a,left,right);

    printf("las variables valen lo siguiente\nleft=%d | right=%d | pivot=%d\n",left,right,pivot);
    
    int n = length-1;
    for (int i = 0; i < n; i++)
    {
        printf("%d,",a[i]);
    }
    printf("%d\n",a[n]);

    while (pivot != k)
    {
        if (pivot < k)
        {
            left = pivot + 1;
        }
        else
        {
            right = pivot - 1;
        }
        pivot = partition(a,left,right);
        
        printf("las variables valen lo siguiente\nleft=%d | right=%d | pivot=%d\n",left,right,pivot);
        for (int i = 0; i < n; i++)
        {
            printf("%d,",a[i]);
        }
        printf("%d\n",a[n]);
    }
    
    return a[k];
}

int partition(int a[], int izq, int der) {
    int i, j, ppiv;
    ppiv = izq;
    i = izq + 1;
    j = der;
    while (i <= j) {
        if (goes_before(a[i], a[ppiv])) {
            i = i + 1;
        } else if (goes_before(a[ppiv], a[j])) {
            j = j - 1;
        } else {
            swap(a, i, j);
        }
    }

    swap(a, ppiv, j);
    ppiv = j;

    return ppiv;
}

bool goes_before(int x, int y) {
    return x <= y;
}

void swap(int a[], int i, int j) {
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}
