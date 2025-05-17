#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef Node *List;

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

/**
 * @brief Agrega un elemento de ejemplo al final de la lista
 *
 * Precondicion: la lista xs no debe ser vacía
 */
void append_example(List xs) {
    Node* p = NULL;
    p = xs;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = malloc(sizeof(Node));
    p->next->data = 88;
    p->next->next = NULL;
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

    my_list = setup_example();

    printf("Lista antes del append: ");

    show_list(my_list);

    append_example(my_list);

    printf("Lista después del append: ");

    show_list(my_list);

    free(my_list);

    return 0;
}
