#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef Node *List;

/*
//podria llamar la funcion addl tmb
void prepend(List *l, int n){      //pido por parametro un pointer a un pointer de nodo
    Node* p = NULL;               
    p = malloc(sizeof(Node));     //creo el nodo a appendear
    p->data = n;
    p->next = *l;                 //esto es lo que no se puede hacer si no pasas como parametro pointer al pointer l
    *l = p;                       //ni claramente esto tampoco
}
*/

/**
 * @brief Construye y devuelve una lista de ejemplo de 3 elementos
 */


List setup_example() {
    List l = NULL;
    Node* node = NULL;
    int N = 3;
    l = malloc(sizeof(Node));
    node = l;
    N--;

    for (int i = N; i > 0; i--)
    {
        node->data = i*10;
        node->next = malloc(sizeof(Node)); 
        node = node->next;
    }

    node->data = 0;
    node->next = NULL;
    node = NULL;

    return l;
}

void show_list(List xs) {
    printf("[ ");
    while (xs != NULL) {
        printf("%i, ", xs->data);
        xs = xs->next;
    }
    printf("]\n");
}

int main(void) {
    List my_list;
    printf("data_sum-size: %lu bytes\n", (long unsigned int)sizeof(Node));

    my_list = setup_example();

    show_list(my_list);

    free(my_list);              //yikes memmory leaks

    return 0;
}
