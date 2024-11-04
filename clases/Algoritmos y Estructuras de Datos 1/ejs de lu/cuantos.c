#include <stdio.h>
#include <stdlib.h>
#define tam 5

struct comp_t 
{
	int menores;
	int iguales;
	int mayores;
};

struct comp_t cuantos(int taman, int a[], int elem)
{
	int i=0;
	struct comp_t resp;
	resp.mayores=0;
	resp.menores=0;
	resp.iguales=0;
	while (i<taman)
	{
		if(a[i]>elem)
			resp.mayores += 1;
		else if (a[i]<elem)
			resp.menores +=1;
		else
			resp.iguales += 1;
		i+=1;
	}
	return resp;
}

int main()
{
	int i=0,b, a[tam];
	struct comp_t respuesta;
	printf("Ingrese los valores del arreglo \n");
	while(i<tam)
	{
		scanf("%d", &b);
		a[i]=b;
		i+=1;
	}
	printf("Ingrese el numero m con el que quiere comparar \n");
	scanf("%d", &b);
	respuesta = cuantos(tam, a, b);
	printf("Hay %d elementos mayores a m en el arreglo \n", respuesta.mayores);
	printf("Hay %d elementos menores a m en el arreglo \n", respuesta.menores);
	printf("Hay %d elementos iguales a m en el arreglo \n", respuesta.iguales);
	return 0;
}