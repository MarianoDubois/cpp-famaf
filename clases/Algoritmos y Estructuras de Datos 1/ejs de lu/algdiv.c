#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct div_t 
{
	int cociente;
	int resto;
};

struct div_t division(int x, int y)
{
	int i=0;
	struct div_t res;
	while(x>=y)
	{
		x=x-y;
		i+=1;
	}
	res.cociente=i;
	res.resto=x;
	return res;
}

int main()
{
	int a,b;
	struct div_t resultado;
	printf("Ingrese dos numeros\n");
	scanf("%d %d", &a, &b);
	assert(a>=0 && b>0);
	resultado = division(a,b);
	printf("El cociente de la division es: %d \n", resultado.cociente);
	printf("El resto de la division es: %d \n", resultado.resto);
}
