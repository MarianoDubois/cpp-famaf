#include <stdio.h>
#include <stdlib.h>
#define tam 5

int prim_iguales(int taman, int a[])
{
	int i=0;
	while(a[i]==a[0])
	{
		i+=1;
	}
	return i;
}

int main()
{
	int i=0,b, a[tam];
	printf("Ingrese los valores del arreglo \n");
	while(i<tam)
	{
		scanf("%d", &b);
		a[i]=b;
		i+=1;
	}
	printf("La longitud del tramo inicial mas largo cuyos elementos son todos iguales es: %d ", prim_iguales(tam,a));
}