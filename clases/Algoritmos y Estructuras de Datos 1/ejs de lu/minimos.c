#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#define tam 5

bool todos_pares(int taman, int a[])
{
	int i=0;
	while(i<taman)
	{
		if(a[i]%2 != 0)
		{
			return 0;
		}
		i+=1;
	}
	return 1;
}


bool todos_impares(int taman, int a[])
{
	int i=0;
	while(i<taman)
	{
		if(a[i]%2 == 0)
		{
			return 0;
		}
		i+=1;
	}
	return 1;
}

int minimo_pares(int taman, int a[])
{
	int resp = INT_MAX, i=0;
	while (i<taman)
	{
		if(a[i]%2 == 0)
		{
			if(a[i]<resp)
			{
				resp = a[i];
			}
		}
		i+=1;
	}
	return resp;
}

int minimo_impares(int taman, int a[])
{
	int resp = INT_MAX, i=0;
	while (i<taman)
	{
		if(a[i]%2 == 1)
		{
			if(a[i]<resp)
			{
				resp = a[i];
			}
		}
		i+=1;
	}
	return resp;
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

	if(todos_pares(tam,a))
	{
		printf("No hay elementos impares \n");
		printf("El mínimo valor par del arreglo es: %d \n", minimo_pares(tam, a));
	}
	else if(todos_impares(tam,a))
	{
		printf("No hay elementos pares \n");
		printf("El mínimo valor impar del arreglo es: %d \n", minimo_impares(tam, a));
	}
	else
	{
		printf("El mínimo valor par del arreglo es: %d \n", minimo_pares(tam, a));
		printf("El mínimo valor impar del arreglo es: %d \n", minimo_impares(tam, a));
	}
	return 0;
}