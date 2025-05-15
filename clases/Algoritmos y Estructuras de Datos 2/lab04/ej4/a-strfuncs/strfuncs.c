#include <stdio.h>
#include <stdlib.h>
#include "strfuncs.h"

size_t string_length(const char *str){
    size_t size = 0;
    while (str[size] != '\0')
    {
        size++;
    }
    return size;
}

char *string_filter(const char *str, char c){
    char* str_ptr = NULL;
    str_ptr = malloc(sizeof(char) * (string_length(str)+1));
    
    int i = 0, j = 0; 
    
    while(str[i] != '\0')
    {
        if(str[i] != c)
        {
            str_ptr[j] = str[i];
            j++;
            i++;
        }
        else
        {
            i++;
        }
    }
    str_ptr[j] = '\0';
    
    return str_ptr; 
}

bool string_is_symmetric(const char *str){
    bool b = true;
    int i = 0;
    int j = string_length(str)-1;
    
    while(i <= j && b == true){
        if(str[i] != str[j])
        {
            b = false;
        }
        else
        {
            i++;
            j--;
        }
    }
    
    return b;
}