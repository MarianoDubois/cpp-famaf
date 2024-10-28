#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

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
void lab_7(void){
    int i;
    printf("introduzca el valor que quiere que su i tenga:\n");
    scanf("%d", &i);
    
    printf("el resultado del 7a es: %d\nel resultado del 7b es: %d\nel resultado del 7c es: %d\n", lab_71(i),lab_72(i),lab_73(i));
}
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
    
    printf("introduzca los valores de su array:\n");
    for (j = 0; j < t; j++){
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
void lab_205(void){

}

//lab 6 guia 4
void intercambiar(int tam, int a[], int i, int j){
    assert(i<tam && j<tam);
    int aux = a[i];
    a[i] = a[j];
    a[j] = aux;
}

//lab 8 guia 4

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
        case 209:
            lab_209();
            break;
    }

    return 0;
}