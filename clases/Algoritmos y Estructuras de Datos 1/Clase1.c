#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

// USAR CONTROL + F PARA BUSCAR COSAS

/*
siendo concisos

SIEMPRE tenes que tener un una funcion main() al final del codigo donde ejecutar todas las funciones

int main(){
    return 0; // El return 0 siempre se espera que este
}

SIEMPRE las lineas se terminan con ; o { }

SIEMPRE vas a tener que poener al inicio de todo #include <stdio.h> y talvez alguno mas como el de assert

SIEMPRE se corre en consola los siguiente comandos

gcc -Wall -Werror -Wextra -pedantic -std=c99 -c Clase1.c ...todos los *nombre de archivo*.c... 
gcc -Wall -Werror -Wextra -pedantic -std=c99 Clase1.o ...todos los *nombre de archivo*.o... -o *nombre del archivo a correr*
si compilo ---->
./*nombre del archivo*

los tipos de variables son int, char, bool, los arrays son de algunos de esos tipos, ej: int A[*tamaño del array*]

para darle valores a los arrays se usan A[]={1,2,3,4};

--funciones
la PRIMERA palabra de una funcion te dice que te tiene que devolver un return, ya sea un struct *nombre del struct* o 
algun tipo como int, bool, etc. o que no devuelva nada con un void.
la SEGUNDA palabra es el nombre de la funcion.
la TERCERA (las que estan en parentesis) son las cosas que la funcion pide cuando la queres usar, puede no pedir nada 
con (void) o puede pedir cosas con sus tipos (int numero, char letra)
Despues de esto siempre se abren llaves y cuando terminas la funcion le pones otra llave que cierre, si tenes que devolver
algo pones return y lo que espera que le devuelvas si espera devolucion.

struct *nombre del struct* *nombre de la funcion* (*tipo de la variable* *variable*, ... , *tipo de la variable* *variable*){
    *codigo*
    return(*variable del tipo struct*);
}

void o algun tipo de dato *nombre de la variable* (void o *tipo de la variable* *variable*, ... , *tipo de la variable* *variable*){
    *codigo*
    return(*variable del tipo de dato que te pide devolver en la declaracion de la funcion*) // SI TENES VOID NO SE USA RETURN NI NADA
}

syntaxis de algunas cosas:

--mostrar cosas en consola:
printf("texto normal %d el % con algo despues es el valor de la variable \n", *variable*); // el \n no hace falta pero es clean

--pedir cosas por consola:
scanf("%d %c %s %b",&*variable*, ... ,&*variable*,); // %d es para introducir decimales, %c para chars, %s para strings,
%b para booleans, como recomendacion personal, ponganle un espacio despues de cada %c o %s porque pasan cosas malas sino.

--while loop:
while(*condicion*){
    *algo que descumpla la condicion en algun momento*
}

--ifs elses else if
if(*codicion*){
    *codigo*
}else if(*codicion*){
    *mas codigo*
}else{
    *aun mas codigo*
}

--structs
struct *nombre del struct*{
    *tipo de la variable* *variable*;
    ...
    *tipo de la variable* *variable*;
};

--typedef struct // son lo mismo que una struct pero cuando la quieras usar en una funcion o llamada no necesitas siempre
typedef struct{  // poner struct *nombre del struct *sino que solo pones *nombre del struct*
    *tipo de la variable* *variable*;
    ...
    *tipo de la variable* *variable*;
}*nombre de la typedef struct*; 

--inicializacion y asignacion de valores de un struct
struct *nombre del struct* *nombre de la variable*;
*nombre de la variable* *nombre de la variable a rellenar del struct*;
...
*nombre de la variable* *nombre de la variable a rellenar del struct*;

--assert
assert(*condiciones de las variable*); // con condicion de las varibales es que se tiene que cumplir en ese momento del codigo o breakea automaticamente

GLHF
*/

/////////////////////////////////////////////////////////////{  ejs NARI  }/////////////////////////////////////////////////////////////////////////////////

//lab1
void lab_1(void){
    printf("introduzca 3 variables tipo int:\n");
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    printf("este es el resultado del Lab1: (%d, %d, %d, %d, %d)\n",
        (x+y+1),//1
        (z * z + y * 45 - 15 * x),//2
        (y - 2 == (x * 3 + 1) % 5),//3
        (y / 2 * x),//4
        (y < x * z));//5
}

//lab2
void lab_2(void){
    printf("introduzca 5 variables tipo int:\n");
    int x,y,z,b,w;
    scanf("%d%d%d%d%d",&x,&y,&z,&b,&w);
    printf("el resultado de lab 2 es: (%d, %d, %d)\n",
    (x % 4 == 0),
    (x + y == 0 && y - x == (-1) * z),
    (!b && w));   
}

//lab3
void lab_3(void){
    printf("introduzca 2 variables tipo int:\n");
    int x,y;
    scanf("%d%d",&x,&y);
    printf("el resultado del lab 3 es: (%d, (%d, %d), (%d, %d))\n",
    x,
    (x+y),
    (y+y),
    (y+y),
    (x+y*2));
}

//lab4 si, es posible implementarlo y aca lo probamos
void lab_4(void){
    printf("introduzca 2 variables tipo int:\n");
    int x,y, aux;
    scanf("%d%d",&x,&y);
    aux = y;
    y = y+y;
    x = x+aux;
    printf("el resultado del lab 4 es: (%d, %d)\n", y, x);
}

//lab5
void lab_5(void){
    printf("introduzca 2 variables tipo int:\n");
    int x,y;
    scanf("%d%d",&x,&y);
    if (x>=y){
        x = 0;
    } else if (x<=y) {
        x = 2;
    }
    printf("el resultado del lab 5 es: (%d, %d)\n", x, y);
}

//Lab6
void lab_6(void){
    printf("introduzca 4 variables tipo int:\n");
    int x,y,z,m;
    scanf("%d%d%d%d",&x,&y,&z,&m);
    if (x<y){
        m = x;
    }else if(x>=y){
        m = y;
    }
    printf("en el estado intermedio las variables (x,y,z,m)=(%d, %d, %d, %d)\n",x,y,z,m);
    if (m<z){
    }else if(m>=z){
        m = z;
    }
    printf("el resultado de lab 6 es: (%d, %d, %d, %d)\n",x,y,z,m);
}//el programa returnea el valor minimo de los 4 que se le pasan, el valor final de m es el valor minimo de entre los 4

//Lab7
int lab_71(int i){
    while(i!=0){
        i = i-1;
        printf("7a i=%d\n",i);
    }
    return(i);
}
int lab_72(int i){
    while(i!=0){
        i = 0;
        printf("7b i=%d\n",i);
    }
    return(i);
}
int lab_73(int i){
    while(i<0){
        i = i-1;
        printf("7c i=%d\n",i);
    }
    return(i);
}
void lab_7(void){
    int i;
    printf("introduzca el valor que quiere que su i tenga:\n");
    scanf("%d", &i);
    
    printf("el resultado del 7a es: %d\nel resultado del 7b es: %d\nel resultado del 7c es: %d\n", lab_71(i),lab_72(i),lab_73(i));
}


//Lab8a
void lab_8a(void){
    int x,y,i;
    printf("introduzca el valor que quiere que su x, y, i tengan:\n");
    scanf("%d%d%d", &x, &y, &i);
    i = 0;
    while (x>=0){
        x = x-y;
        i = i+1;
        printf("8a (x,y,i)=(%d, %d, %d)\n", x, y, i);
    }
    printf("el resultado del 8a es: %d, %d, %d\n", x, y, i);
}

//Lab8b
void lab_8b(void){
    int x,i,res;
    printf("introduzca el valor que quiere que su x, y, i tengan:\n");
    scanf("%d%d%d", &x, &i, &res);
    i = 2;
    res = 1;
    while (i<x && res){
        res = res && (x%i != 0);
        i = i+1;
        printf("8b (x,i,res)=(%d, %d, %d)\n", x, i, res);
    }
    printf("el resultado del 8b es: %d, %d, %d\n", x, i, res);
}

//Lab9a
void lab_9a(void){
    int t;
    printf("introduzca el tamaño que quiere que tenga el array:\n");
    scanf("%d", &t);
    
    int i,s,A[t],j;
    
    printf("introduzca los valores de su array:\n");
    for (j = 0; j < t; j++){
        scanf("%d", &A[j]);
        printf("valor del array en A[%d] = %d\n", j, A[j]);
    }

    printf("introduzca sus valores de i y s:\n");
    scanf("%d%d", &i, &s);
    i = 0;
    s = 0;
    
    while (i<4){
        s = s + A[i];
        i = i + 1;
    }
    
    printf("el resultado del 9a es: (%d %d)\n", i, s);
}

//Lab9b
void lab_9b(void){
    int t;
    printf("introduzca el tamaño que quiere que tenga el array:\n");
    scanf("%d", &t);
    
    int i,c,A[t],j;
    j = 0;
    
    printf("introduzca los valores de su array:\n");
    while (j < t){
        scanf("%d", &A[j]);
        printf("valor del array en A[%d] = %d\n", j, A[j]);
    }

    printf("introduzca sus valores de i y s:\n");
    scanf("%d%d", &i, &c);
    i = 0;
    c = 0;
    
    while (i<4){
        if (A[i]>0){
            c = c + 1;
        }
        i = i + 1;
    }
    
    printf("el resultado del 9b es: (%d %d)\n", i, c);
}

//Lab101

void pedir_entero(char name){
    int x;
    printf("introduzca su int %c\n", name);
    scanf("%d", &x);
    printf("imprimir entero %c = %d\n", name, x);
}

void imprimir_entero(char name, int x){
    printf("imprimir entero %c = %d\n", name, x);
}

void lab_101(void){
    pedir_entero('n');
    imprimir_entero('m',5);
}

//Lab102
void pedir_booleano(char name){
    int x;
    printf("introduzca su boolean %c\n", name);
    scanf("%d", &x);
    printf("pedir booleano %c = %d\n", name, x);
}

void imprimir_booleano(char name, bool x){
    printf("imprimir booleano %c = %d\n", name, x);
}

void lab_102(void){
    pedir_booleano('b');
    imprimir_booleano('f',1);
}

//Lab 1 guia 4
void lab_201(void){
    int x,y,z;
    printf("introduzca sus int x, y, z\n");
    scanf("%d%d%d", &x, &y, &z);
    z=x;
    x=y;
    y=z;
    printf("el resultado del ejercicio 1 de la guia 4 es x=%d, y=%d, z=%d\n", x, y, z);
}

//Lab 2 guia 4
void lab_202(void){
    int x,y,z;
    printf("introduzca sus int x, y, z\n");
    scanf("%d%d%d", &x, &y, &z);
    printf("el resultado del ejercicio 2a de la guia 4 es x=%d, y=%d, z=%d\ny para el 2b de la guia 4 es x=%d, y=%d, z=%d\n",x+1,x+y,z,y,y+x+z,y+x);
}

//lab 3 guia 4
bool es_vocal(char letra){
    if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
        return(true);
    }else{
        return(false);  
    }
}

void lab_203(void){
    char l;
    printf("introduzca su char:\n");
    scanf(" %c", &l);
    printf("el resultado del lab 3 de la guia 4 es %s\n", es_vocal(l)?"true":"false");
}

//lab 4 guia 4
void lab_204(void){
    int x,y;
    printf("introduzca sus int x, y\n");
    scanf("%d%d", &x, &y);
    if(x<y){
        printf("la variable mas chica es x");
    }else{
        printf("la variable mas chica es y");
    }
}

//lab 5 guia 4
int sumar_hasta(int numero){
    int i,sum;
    i=0;
    sum=0;

    while(i<=numero){
        sum = sum + i;
        i++;
    }

    return(sum);
}

void lab_205(void){
    int input;

    printf("introduzca su numero a sumar hasta:\n");
    scanf("%d", &input);

    if (input>=0){//se puede "romper" poniendole una letra en la input, no hay type checking en C :P
        printf("el resultado del lab 5 guia 4 es: %d\n", sumar_hasta(input));
    }else{
        printf("error: el numero ingresado no es positivo o 0\n");
    }
}

//lab 6 guia 4
void intercambiar(int tam, int a[], int i, int j){
    assert(i<tam && j<tam);
    int aux = a[i];
    a[i] = a[j];
    a[j] = aux;
}

void lab_206(void){//goofy ahh getter excersice :skull:
    int size;
    printf("introduzca el tamaño de su array:\n");
    scanf("%d", &size);
    int i,A[size],pos1,pos2;
    i=0;
    printf("introduzca los valores de su array:\n");
    while (i < size){
        scanf("%d", &A[i]);
        printf("valor del array en A[%d] = %d\n", i, A[i]);
        i++;
    }
    printf("introduzca la primera posicion del array que quiere intercambiar:\n");
    scanf("%d", &pos1);
    printf("introduzca la segunda posicion del array que quiere intercambiar:\n");
    scanf("%d", &pos2);
    if(0<=pos1 && 0<= pos2 && size>pos1 && size>pos2){
        intercambiar(size,A,pos1,pos2);
        i = 0;
        while(i<size){
            printf("lugar:[%d] valor: %d\n", i, A[i]);
            i++;
        }
    }else{
        printf("introdujiste una posicion que no existe :(\n");
    }
}

//lab 7 guia 4
void pedir_arreglo(int n_max, int A[]){
    int i=0;
    printf("introduzca los valores de su array:\n");
    while (i < n_max){
        scanf("%d", &A[i]);
        printf("valor del array en A[%d] = %d\n", i, A[i]);
        i++;
    }
}

void imprimir_arreglo(int n_max, int A[]){
    int i = 0;
    while(i < n_max){
        printf("lugar:[%d] valor: %d\n", i, A[i]);
        i++;
    }
}

void lab_207(void){
    int size;
    printf("introduzca el tamaño de su array:\n");
    scanf("%d",&size);
    int A[size];
    pedir_arreglo(size,A);
    imprimir_arreglo(size,A);
}

//lab 8 guia 4
int sumatoria(int tam, int A[]){
    int i, sum;
    i=0;
    sum=0;
    while(i<tam){
        sum = A[i] + sum;
        i++;
    }
    return(sum);
}

void lab_208(void){
    int size;
    printf("introduzca el tamaño de su array:\n");
    scanf("%d", &size);
    int i,A[size];
    i=0;
    printf("introduzca los valores de su array:\n");
    while (i < size){
        scanf("%d", &A[i]);
        printf("valor del array en A[%d] = %d\n", i, A[i]);
        i++;
    }
    printf("el resultado del lab 8 guia 4 es: %d\n",sumatoria(size,A));
}

//lab 9 guia 4
struct div_t{
    int cociente;
    int resto;
};

struct div_t division(int x, int y){
    struct div_t resultado;
    resultado.cociente = 0;
    resultado.resto = x;

    while(resultado.resto>y){
        resultado.resto = resultado.resto - y;
        resultado.cociente++;
    }
    
    return(resultado);
}

void lab_209(void){
    int dividendo,divisor;
    
    printf("ingrese su numero a dividir:\n");
    scanf("%d",&dividendo);
    printf("ingrese su divisor:\n");
    scanf("%d",&divisor);
    
    if(dividendo < 0 || divisor <= 0){
        printf("no puedo hacer divisiones con 0 o numeros menores a 0 :)\nvolve a ingresar tu divisor o dvidendo\n");
    }else{
        struct div_t resultado;
        resultado = division(dividendo,divisor);
        printf("el cociente es %d y el resto es %d\n", resultado.cociente, resultado.resto);
    }
}

bool compare_string(char string_1[3], char string_2[3] ){
    int k = 0;
    bool is_equal = 1;
    
    while(k<3 && is_equal == 1){
        if(string_1[k] == string_2[k]){
            k++;
        }else{
            is_equal = 0;
            k++;
        }
    }
    return is_equal;
}

void lab_210(void){

    char s1[3] = {'X','X','X'};
    char s2[3] = {'X','X','X'}; 

    bool resultado = compare_string(s1,s2);

    printf("%d",resultado);
}

///////////////////////////////////////////////////////////{  main function  }///////////////////////////////////////////////////////////////////////////////////////

int main(void){
    int condition;
    printf("cual Lab queres testear? \n");
    scanf("%d",&condition);
    switch(condition){
        case 1:
            lab_1();
            break;
        case 2:
            lab_2();
            break;
        case 3:
            lab_3();
            break;
        case 4:
            lab_4();
            break;
        default:
            break;
        case 5:
            lab_5();
            break;
        case 6:
            lab_6();
            break;
        case 7:
            lab_7();
            break;
        case 8:
            lab_8a();
            lab_8b();
            break;
        case 9:
            lab_9a();
            lab_9b();
            break;
        case 10:
            lab_101();
            lab_102();
            break;
        case 201:
            lab_201();
            break;
        case 202:
            lab_202();
            break;
        case 203:
            lab_203();
            break;
        case 204:
            lab_204();
            break;
        case 205:
            lab_205();
            break;
        case 206:
            lab_206();
            break;
        case 207:
            lab_207();
            break;
        case 208:
            lab_208();
            break;
        case 209:
            lab_209();
            break;
        case 210:
            lab_210();
            break;
    }

    return 0;
}

///////////////////////////////////////////////////////{  ejs LuLa  }//////////////////////////////////////////////////////////////////////////////////////////

/*
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

#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Lab 1
    printf("Lab 1\n");
    int x, y, z, r1, r2, r4;
    _Bool r3, r5,r6;
    printf("Ingrese x, y, z\n");
    scanf("%d %d %d", &x, &y, &z);

    r1 = x + y + 1;
    r2 = z * z + y * 45 - 15 * x;
    r3 = y - 2 == (x * 3 + 1) % 5;
    r4 = y / 2 * x;
    r5 = y < x * z;

    printf("r1 = %d\n", r1);
    printf("r2 = %d\n", r2);
    printf("r3 = %d\n", r3);
    printf("r4 = %d\n", r4);
    printf("r5 = %d\n", r5);

    ///Lab 2
    printf("Lab 2\n");
    x = 4;
    y = -4;
    z = 8;

    _Bool b, w;

    b = 1;
    w = 1;

    r3 = x%4 == 0;
    r5 = x+y == 0 && y - x == (-1) * z;
    r6 = !(b && w);

    printf("r3 = %d\n", r3);
    printf("r5 = %d\n", r5);
    printf("r6 = %d\n", r6);

    ///Lab 3
    printf("Lab 3\n");
    ///a
    scanf("%d",&x);
    x = 5;
    printf("x=%d\n", x);

    ///b
    scanf("%d %d",&x, &y);
    x = x + y;
    y = y + y;
    printf("x=%d\n", x);
    printf("y=%d\n", y);

    ///c
    scanf("%d %d",&x, &y);
    y = y + y;
    x = x + y;
    printf("y=%d\n", y);
    printf("x=%d\n", x);


    ///Lab 4

    ///Es posible implementarlo, pero no en una sola linea. Ser�a igual que el punto c

    ///Lab 5
    printf("Lab 5\n");
    ///a , b , c
    scanf("%d %d",&x, &y);
    if (x>=y)
        x=0;
    else
        x=2;
    printf("x=%d\n", x);

   ///Lab 6
   printf("Lab 6\n");
   int m;
   scanf("%d %d %d %d",&x, &y, &z, &m);
   if (x<y)
        m=x;
    else
        m=y;
    printf("m=%d\n", m);
    scanf("%d %d %d %d",&x, &y, &z, &m);
    if (m>=z)
        m=z;
    printf("m=%d\n", m);

    ///Lab 7
    printf("Lab 7\n");
    ///a
    int i;
    scanf("%d",&i);
    while (i!=0)
        i-=1;
    printf("i=%d\n", i);

    ///b
    scanf("%d",&i);
    while (i!=0)
        i=0;
    printf("i=%d\n", i);

    ///c
    scanf("%d",&i);
    while (i<0)
        i-=1;
    printf("i=%d\n", i);
    ///No funciona con negativos ( es un ciclo infinito )

    ///Lab 8
    printf("Lab 8\n");

    ///a
    ///Divisi�n entera de x/y
    scanf("%d %d %d",&x, &y, &i);
    i = 0;
    while (x>=y)
    {
        x-=y;
        i+=1;
    }
    printf("i=%d\n", i);

    ///b
    ///Ver si un n�mero es primo
    _Bool res;
    scanf("%d %d %d",&x, &i, &res);
    i=2;
    res = 1;
    while (i<x && res)
    {
        res = res && (x%i!=0);
        i=i+1;
    }
    printf("res=%d\n", res);

    ///Lab 9
    printf("Lab 9\n");

    ///a
    int A[4], s;
    scanf("%d %d",&i, &s);
    for (int j=0; j<4 ; j++)
    {
        int d;
        scanf("%d",&d);
        A[j]=d;
    }
    i = 0;
    s = 0;
    while (i < 4)
    {
        s = A[i];
        i++;
    }
    printf("s=%d\n", s);

    ///b
    ///Cuenta los elementos positivos de x
    int c;
    scanf("%d %d",&i, &c);
    for (int j=0; j<4 ; j++)
    {
        int d;
        scanf("%d",&d);
        A[j]=d;
    }
    i = 0;
    c = 0;
    while (i < 4)
    {
        if (A[i] > 0)
            c++;
        i++;
    }
    printf("c=%d\n", c);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int respuesta;
    do
    {
        printf("Ingrese el n�mero de lab al que quiere acceder\n");
        printf("O ingrese 0 para salir\n");
        scanf("%d", &respuesta);

        switch(respuesta) {
            case 1:
                {
                    int x, y, z;
                    printf("Ingrese x, y \n");
                    scanf("%d %d", &x, &y);

                    z=x;
                    x=y;
                    y=z;

                    printf("x=%d\n", x);
                    printf("y=%d\n", y);

                    break;
                }
            case 2:
                {
                    int x, y, z, k;
                    printf("Ingrese x, y \n");
                    scanf("%d %d", &x, &y);

                    y+=x;
                    x++;

                    printf("x=%d\n", x);
                    printf("y=%d\n", y);

                    printf("Ingrese x, y, z \n");
                    scanf("%d %d %d", &x, &y, &z);

                    k=y;

                    y += x+z;
                    z = k+x;
                    x = k;

                    printf("x=%d\n", x);
                    printf("y=%d\n", y);
                    printf("z=%d\n", z);

                    break;
                }
            case 4:
                {
                    int x,y, E;
                    printf("Ingrese x, y \n");
                    scanf("%d %d", &x, &y);

                    if (x>=y)
                        E=y;
                    else
                        E=x;
                    printf("Elmenor de los dos es %d\n", E);

                    /// b

                    printf("Ingrese x\n");
                    scanf("%d", &x);

                    if (x<0)
                        x = -1*x;

                    printf("El valor absoluto de x es %d\n", x);

                    break;
                }
            case 0:
                printf("Saliendo...");
        }
    }
    while (respuesta!=0);
    return 0;
}


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

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define tam 5

int sumatoria(int taman, int a[])
{
	int suma=0,i=0;
	while(i<taman)
	{
		suma+=a[i];
		i+=1;
	}
	return suma;
}

int main()
{
	int i=0,b, a[tam], resultado;
	printf("Ingrese los valores del arreglo \n");
	while(i<tam)
	{
		scanf("%d", &b);
		a[i]=b;
		i+=1;
	}
	resultado = sumatoria(tam, a);
	printf("La suma de los elementos del arreglo es: %d ",resultado);
}

#include <stdio.h>
#include <stdlib.h>

bool es_vocal(char letra)
{
    if (letra == 'a' || letra == 'e' ||  letra == 'i' ||  letra == 'o' || letra == 'u' ||  letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' )
        return 1;
    return 0;
}

char pedir_char()
{
    char a;
    printf("Ingrese un caracter \n");
    scanf("%c", &a);
    return a;
}

int main()
{
    bool c;
    c = (es_vocal(pedir_char()));
    if (c == true)
    {
        printf("El caracter que ingresó era una vocal \n");
    }
    else
        printf("El caracter que ingresó NO era una vocal \n");
    return 0;
}


/////////////////////////////////////////////////////////////{  Lichi parcial  }///////////////////////////////////////////////////////////////////////////////////

Ejercicio 1
//+ Imports
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

//+ Consts
const int N = 4;

//+ Functions
int sum_init(int tam, int a[], int n)
{
    //! Verify with assert
    assert(n <= tam);

    //# Init Vars
    int sum = 0, i = 0;

    //? Loop
    while (i < n)
    {
        sum += a[i];
        i++;
    }

    return sum;
}

//+ Main
int main(void)
{
    //# Init Vars
    int pos = 0, num, array[N];
    int suma;

    //? Loop for insert data into array
    while(pos < N) {
        //% Required input
            printf("Ingresa el valor para A[%d]: ", pos);
            scanf("%d", &array[pos]);
            pos++;
    } pos = 0;

    //% Required input
    printf("Ingresa un n°: ", num);
    scanf("%d", &num);

    //? Call functions
    suma = sum_init(N, array, num);

    //! Logic
    printf("\nArray: \n   ");
    while (pos < N) {
        printf("Array[%d] = %d, ", pos, array[pos]);
        pos++;
    }

    //* Output
    printf("\n\nEl suma de los primeros %d elementos del array es de '%d'\n\n", num, suma);

    return 0;
}
Ejercicio 2
⚠️ Incluir todo lo necesario para que compile y ejecute:
Inclusión de librerías
Definición de función del Ejercicio 1
Función main()
La respuesta a este ejercicio debe poderse compilar sin errores
//+ Imports
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

//+ Consts
#define N 4

//+ Functions
int sum_init(int tam, int a[], int n)
{
    //! Verify with assert
    assert(n <= tam);

    //# Init Vars
    int sum = 0, i = 0;

    //? Loop
    while (i < n)
    {
        sum += a[i];
        i++;
    }

    return sum;
}

//+ Main
int main(void)
{
    //# Init Vars
    int pos = 0, num, array[N];
    int suma;

    //? Loop for insert data into array
    while(pos < N) {
        //% Required input
            printf("Ingresa el valor para A[%d]: ", pos);
            scanf("%d", &array[pos]);
            pos++;
    } pos = 0;

    //% Required input
    printf("Ingresa un n°: ", num);
    scanf("%d", &num);

    //? Call functions
    suma = sum_init(N, array, num);

    //! Logic
    printf("\nArray: \n   ");
    while (pos < N) {
        printf("Array[%d] = %d, ", pos, array[pos]);
        pos++;
    }

    //* Output
    printf("\n\nEl suma de los primeros %d elementos del array es de '%d'\n\n", num, suma);

    return 0;
}
Ejercicio 3
Ejemplo 1:

Ingresa el valor para A[0]: 3
Ingresa el valor para A[1]: 6
Ingresa el valor para A[2]: 5
Ingresa el valor para A[3]: 8
Ingresa un n°: 3

Array: 
   Array[0] = 3, Array[1] = 6, Array[2] = 5, Array[3] = 8, 

El suma de los primeros 3 elementos del array es de '14'


Ejemplo 2:

Ingresa el valor para A[0]: 1
Ingresa el valor para A[1]: 6
Ingresa el valor para A[2]: 3
Ingresa el valor para A[3]: 7
Ingresa un n°: 4

Array: 
   Array[0] = 1, Array[1] = 6, Array[2] = 3, Array[3] = 7, 

El suma de los primeros 4 elementos del array es de '17'


Ejemplo 3:

Ingresa el valor para A[0]: 9
Ingresa el valor para A[1]: 77
Ingresa el valor para A[2]: 5
Ingresa el valor para A[3]: 66
Ingresa un n°: 2

Array: 
   Array[0] = 9, Array[1] = 77, Array[2] = 5, Array[3] = 66, 

El suma de los primeros 4 elementos del array es de '86'


Ejemplo 4:

Ingresa el valor para A[0]: 7
Ingresa el valor para A[1]: 44
Ingresa el valor para A[2]: 8
Ingresa el valor para A[3]: 9
Ingresa un n°: 0

Array: 
   Array[0] = 7, Array[1] = 44, Array[2] = 8, Array[3] = 9, 

El suma de los primeros 4 elementos del array es de '0'


*/