#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE 4

struct bound_data {
    bool is_upperbound;
    bool is_lowerbound;
    bool exists;
    unsigned int where;
};

struct bound_data check_bound(int value, int arr[], unsigned int length) {
    struct bound_data res;
    res.is_lowerbound = 0;
    res.is_upperbound = 0;
    res.exists = 0;
    res.where = -1;
    int min = arr[0];
    int max = arr[0];
    for (unsigned int i = 0; i < length; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }    
        if(value == arr[i]){
            res.where = i+1;
            res.exists = 1;
        }
    }
    if(value >= max){
        res.is_upperbound = 1;
    }else if(value <= min){
        res.is_lowerbound = 1;
    }
    return res;
}

int main(void) {
    int a[ARRAY_SIZE] = {0, -1, 9, 4};
    int value=9;
    int i=0;
    printf("introduzca los valores de su array:\n");
    while (i < ARRAY_SIZE){
        scanf("%d", &a[i]);
        printf("valor del array en A[%d] = %d\n", i, a[i]);
        i++;
    }
    printf("introduzca el valor que desea checkear de su array:\n");
    scanf("%d", &value);
    struct bound_data result = check_bound(value, a, ARRAY_SIZE);
    
    printf("\n%d\n%d\n%d\n%u\n", result.is_upperbound, result.is_lowerbound, result.exists, result.where);
    
    printf("\nsu resultado es:\n");

    if(result.is_upperbound == 1){
        if(result.exists == 1 && a[result.where-1] == value){
            printf("maximo en la posicion %u\n", result.where);
        }else{
            printf("cota superior\n");
        }
    }else if(result.is_lowerbound == 1){
        if(result.exists == 1 && a[result.where-1] == value){
            printf("minimo en la posicion %u\n", result.where);
        }else{
            printf("cota inferior\n");
        }
    }else{
        printf("no es nada\n");
    }             

    return EXIT_SUCCESS;
}

