#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define tam 5

int sumatoria(int taman, int a[])
{
	int suma=0,i=0;
	while(i<taman)
	{
		suma+=a[i];
		i+=1;
	}
	return suma;
}

int main()
{
	int i=0,b, a[tam], resultado;
	printf("Ingrese los valores del arreglo \n");
	while(i<tam)
	{
		scanf("%d", &b);
		a[i]=b;
		i+=1;
	}
	resultado = sumatoria(tam, a);
	printf("La suma de los elementos del arreglo es: %d ",resultado);
}