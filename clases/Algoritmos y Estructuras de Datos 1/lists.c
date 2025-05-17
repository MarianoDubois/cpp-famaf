#include <stdlib.h>
#include <assert.h>
#include "lists.h"

list_t empty(void) {
    return NULL;
}

void addl(int e, list_t *l) {
    node_t *new_node = malloc(sizeof(node_t));
    new_node->elem = e;
    new_node->next = *l;
    *l = new_node;
}

void destroy(list_t *l) {
    node_t *current = *l;
    node_t *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *l = NULL;
}

int head(list_t l) {
    assert(l != NULL);
    return l->elem;
}

list_t tail(list_t l) {
    assert(l != NULL);
    return l->next;
}
