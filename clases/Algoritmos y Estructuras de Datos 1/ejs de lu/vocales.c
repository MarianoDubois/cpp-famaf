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
