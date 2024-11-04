#include <stdio.h>
#include <stdlib.h>
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

bool existe_multiplo(int m, int taman, int a[])
{
	int i=0;
	while(i<taman)
	{
		if(a[i]%m == 0)
		{
			return 1;
		}
		i+=1;
	}
	return 0;
}

int main()
{
	int i=0,b, a[tam];
	bool resp;
	printf("Ingrese los valores del arreglo \n");
	while(i<tam)
	{
		scanf("%d", &b);
		a[i]=b;
		i+=1;
	}
	printf("Ingrese 1 para ejecutar todos_pares y 2 para ejecutar existe_multiplo \n");
	scanf("%d", &b);
	if(b==1)
	{
		resp = todos_pares(tam, a);
		if(resp==0)
		{
			printf("No son todos pares \n");
		}
		else
		{
			printf("Son todos pares \n");
		}	
	}
	else
	{
		printf("Ingrese m \n");
		scanf("%d", &b);
		resp = existe_multiplo(b,tam, a);
		if(resp==0)
		{
			printf("No existe multiplo de m en el arreglo \n");
		}
		else
		{
			printf("Existe multiplo de m en el arreglo \n");
		}
	}
}