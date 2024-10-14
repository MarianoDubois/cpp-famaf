#include <stdio.h>
#include <stdbool.h>

int main(void){
    int condition;
    printf("cual Lab queres testear? \n");
    scanf("%d",&condition);
    switch(condition){
        case 1:
            Lab1();
            break;
        case 2:
            Lab2();
            break;
        case 3:
            Lab3();
            break;
        case 4:
            Lab4();
            break;
        default:
            break;
        case 5:
            Lab5();
            break;
        case 6:
            Lab6();
            break;
        case 7:
            Lab7();
            break;
        case 8:
            Lab8a();
            Lab8b();
            break;
        case 9:
            Lab9a();
            Lab9b();
            break;
        case 10:
            Lab101();
            Lab102();
            break;
    }
}

//lab1
int Lab1(void){
    printf("introduzca 3 variables tipo int:\n");
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    return(printf("este es el resultado del Lab1: (%d, %d, %d, %d, %d)\n",
        (x+y+1),//1
        (z * z + y * 45 - 15 * x),//2
        (y - 2 == (x * 3 + 1) % 5),//3
        (y / 2 * x),//4
        (y < x * z)));//5
}

//lab2
int Lab2(void){
    printf("introduzca 5 variables tipo int:\n");
    int x,y,z,b,w;
    scanf("%d%d%d%d%d",&x,&y,&z,&b,&w);
    return(printf("el resultado de lab 2 es: (%d, %d, %d)\n",
    (x % 4 == 0),
    (x + y == 0 && y - x == (-1) * z),
    (!b && w)));   
}

//lab3
int Lab3(void){
    printf("introduzca 2 variables tipo int:\n");
    int x,y;
    scanf("%d%d",&x,&y);
    return(printf("el resultado del lab 3 es: (%d, (%d, %d), (%d, %d))\n",
    x,
    (x+y),
    (y+y),
    (y+y),
    (x+y*2)));
}

//lab4 si, es posible implementarlo y aca lo probamos
int Lab4(void){
    printf("introduzca 2 variables tipo int:\n");
    int x,y, aux;
    scanf("%d%d",&x,&y);
    aux = y;
    y = y+y;
    x = x+aux;
    return(printf("el resultado del lab 4 es: (%d, %d)\n", y, x));
}

//lab5
int Lab5(void){
    printf("introduzca 2 variables tipo int:\n");
    int x,y;
    scanf("%d%d",&x,&y);
    if (x>=y){
        x = 0;
    } else if (x<=y) {
        x = 2;
    }
    return(printf("el resultado del lab 5 es: (%d, %d)\n", x, y));
}

//Lab6
int Lab6(void){
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
    return(printf("el resultado de lab 6 es: (%d, %d, %d, %d)\n",x,y,z,m));
}//el programa returnea el valor minimo de los 4 que se le pasan, el valor final de m es el valor minimo de entre los 4

//Lab7
int Lab7(void){
    int i;
    printf("introduzca el valor que quiere que su i tenga:\n");
    scanf("%d", &i);
    return(printf("el resultado del 7a es: %d\nel resultado del 7b es: %d\nel resultado del 7c es: %d\n", Lab71(i),Lab72(i),Lab73(i)));
}
int Lab71(int i){
    while(i!=0){
        i = i-1;
        printf("7a i=%d\n",i);
    }
    return(i);
}
int Lab72(int i){
    while(i!=0){
        i = 0;
        printf("7b i=%d\n",i);
    }
    return(i);
}
int Lab73(int i){
    while(i<0){
        i = i-1;
        printf("7c i=%d\n",i);
    }
    return(i);
}

//Lab8a
int Lab8a(void){
    int x,y,i;
    printf("introduzca el valor que quiere que su x, y, i tengan:\n");
    scanf("%d%d%d", &x, &y, &i);
    i = 0;
    while (x>=0){
        x = x-y;
        i = i+1;
        printf("8a (x,y,i)=(%d, %d, %d)\n", x, y, i);
    }
    return(printf("el resultado del 8a es: %d, %d, %d\n", x, y, i));
}

//Lab8b
int Lab8b(void){
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
    return(printf("el resultado del 8b es: %d, %d, %d\n", x, i, res));
}

//Lab9a
int Lab9a(void){
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
    
    return(printf("el resultado del 9a es: (%d %d)\n", i, s));
}

//Lab9b
int Lab9b(void){
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
    
    return(printf("el resultado del 9b es: (%d %d)\n", i, c));
}

//Lab101

int pedir_entero(char name){
    int x;
    printf("introduzca su int %c\n", name);
    scanf("%d", &x);
    return(printf("imprimir entero %c = %d\n", name, x));
}

void imprimir_entero(char name, int x){
    printf("imprimir entero %c = %d\n", name, x);
}

void Lab101(void){
    pedir_entero('n');
    imprimir_entero('m',5);
}

//Lab102
int pedir_booleano(char name){
    int x;
    printf("introduzca su boolean %c\n", name);
    scanf("%d", &x);
    return(printf("pedir booleano %c = %d\n", name, x));
}

void imprimir_booleano(char name, bool x){
    printf("imprimir booleano %c = %d\n", name, x);
}

void Lab102(void){
    pedir_booleano('b');
    imprimir_booleano('f',1);
}

