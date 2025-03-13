#include <stdio.h>
#include <stdbool.h>
#include <assert.h>



void set_array(int n_max, int A[]){
    int i=0;
    printf("introduzca los valores de su array:\n");
    while (i < n_max){
        scanf("%d", &A[i]);
        printf("valor del array en A[%d] = %d\n", i, A[i]);
        i++;
    }
}

void print_array(int n_max, int A[]){
    int i = 0;
    while(i < n_max){
        printf("lugar:[%d] valor: %d\n", i, A[i]);
        i++;
    }
}

struct bound_data {
    bool is_upperbound;
    bool is_lowerbound;
    bool exists;
    unsigned int where;
};

struct bound_data check_bound(int value, int arr[], unsigned int length){
    struct bound_data temp_data;
    temp_data.is_lowerbound = 1;
    temp_data.is_upperbound = 1;
    temp_data.exists = 0;
    for (int i = 1; i <= length; i++){
        if (temp_data.is_upperbound == 1 && temp_data.is_lowerbound == 1 && temp_data.exists == 0){
            if (value == arr[i]){
                temp_data.exists = 1;
                temp_data.where = i;
            }else if(value > arr[i]){
                
            }
        }
    }
}

void Lab0(void){
    int length;
    printf("introduzca el tamaño de su array:\n");
    scanf("%d",&length);
    int arr[length];
    set_array(length,arr);
    print_array(length,arr);
    struct bound_data check_bound(int value, int arr[], unsigned int length);

}

int main(void){
    int condition;
    printf("cual Lab queres testear? \n");
    scanf("%d",&condition);
    switch(condition){
        case 1:
            lab_0();
            break;
    }

    return 0;
}