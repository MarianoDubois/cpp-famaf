#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define tam 5

struct datos_t 
{
	float maximo;
	float minimo;
	float promedio;
};

struct datos_t stats(int taman, float a[])
{
	struct datos_t res;
	int i=0;
	float ma=INT_MIN, mi=INT_MAX,sum=0;
	while(i<taman)
	{
		if(a[i]>ma)
		{
			ma=a[i];
		}
		else if (a[i]<mi)
		{
			mi=a[i];
		}
		sum+=a[i];
		i+=1;
	}
	res.maximo=ma;
	res.minimo=mi;
	res.promedio=sum/taman;
	return res;
}

int main()
{
	int i=0;
	float b,a[tam];
	struct datos_t respuesta;
	printf("Ingrese los valores del arreglo \n");
	while(i<tam)
	{
		scanf("%f", &b);
		a[i]=b;
		i+=1;
	}
	respuesta = stats(tam, a);
	printf("El maximo elemento es: %f \n", respuesta.maximo);
	printf("El minimo elemento es: %f \n", respuesta.minimo);
	printf("El promedio de los elementos es: %f", respuesta.promedio);
}
