#include <stdio.h>
#include <stdlib.h>

int suma_hasta(int n)
{
	int suma=0;
	while (n>0)
	{
		suma+=n;
		n-=1;
	}
	return suma;
}

int main()
{
	int num;
	printf("Ingrese un número \n");
	scanf("%d", &num);
	if(num<0)
	{
		printf("Error, ha ingresado un numero NO natural\n");
	}
	else
	{
		printf("%d",suma_hasta(num));
	}
}

