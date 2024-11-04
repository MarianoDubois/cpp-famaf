#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define tam 4


void pedir_arreglo(int n_max, int a[])
{
	int i=0;
	int b;
	printf("Ingrese los valores del arreglo \n");
	
	while(i<n_max)
	{
		scanf("%d", &b);
		a[i]=b;
		i+=1;
	}
}

void imprimir_arreglo(int n_max, int a[])
{
	printf("El arreglo ingresado es: ");
	int i=0;
	while(i<n_max)
	{
		printf(" %d ", a[i]);
		i+=1;
	}
}

int main()
{
	int a[tam];
	pedir_arreglo(tam, a);
	imprimir_arreglo(tam, a);
	return 0;
}