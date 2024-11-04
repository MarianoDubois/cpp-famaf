#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool esprimo(int b)
{
	int i = 2;
	if (b < 2) 
		return false;
	while (i < b )
	{
		if (b % i == 0)
			return false;
		i += 1;
	}
	return true;
}

int nesimo_primo(int N)
{
	int contador = 0, i = 2;
	while (contador < N)
	{
		if (esprimo(i))
		{
			contador += 1;
		}
		if (contador < N)
			i += 1;
	}
	return i;
}

int main()
{
	int a;
	printf("Ingrese un numero\n");
	scanf(" %d", &a);
	printf("El primo numero %d es: %d", a, nesimo_primo(a));
}