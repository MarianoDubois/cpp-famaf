#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void intercambiar(int tam, int a[], int i, int j)
{
	int ii;
	ii=a[i];
	a[i]=a[j];
	a[j]=ii;
	printf("El arreglo modificado es: \n");
	int k=0;
	while (k<tam)
	{
		printf("%d  ",a[k]);
		k+=1;
	}
}

int main()
{
	#define tam 3
	int i,j,k=0;
	int a[tam];
	printf("Ingrese i, j\n");
	scanf("%d %d", &i, &j);
	printf("Ingrese los elementos del arreglo\n");
	while (k<tam)
	{
		int b;
		scanf("%d", &b);
		a[k]=b;
		k+=1;
	}
	assert(i>=0 && i<tam && j>=0 && j<tam);
	intercambiar(tam,a,i,j);
}
	
