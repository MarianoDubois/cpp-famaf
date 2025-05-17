#ifndef LIST_H
#define LIST_H

typedef struct node {
    int elem;
    struct node *next;
} node_t;

typedef node_t* list_t;

// Crea una lista vacía
list_t empty(void);

// Agrega un elemento al principio
void addl(int e, list_t *l);

// Libera toda la memoria de la lista
void destroy(list_t *l);

// Devuelve el primer elemento
int head(list_t l);

// Devuelve el resto de la lista
list_t tail(list_t l);

#endif
