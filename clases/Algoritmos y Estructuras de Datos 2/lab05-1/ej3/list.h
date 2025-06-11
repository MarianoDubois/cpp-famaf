#ifndef _LIST_H
#define _LIST_H

#include <stdlib.h>
#include <stdbool.h>

typedef int list_elem;

typedef struct Node {
    list_elem data;
    struct Node* next;
} Node;

typedef Node *list;


/* Constructors */
list empty(void);
/*
 * DESC: crea una lista vacia
 *
 * POS: {l != NULL}
 */

list addl(list l, list_elem e);
/*
 * DESC: agrega el elemento e al comienzo de la lista
 *
 * POS: {l[0] = e}
 */


 /* Operations */
bool is_empty(list l);
/*
 * DESC: devuelve true si l es vacia
 */

list_elem head(list l);
/*
 * DESC: devuelve el primer elemento de la lista
 *
 * POS: {list_elem e == T}
 */


list tail(list l);
/*
 * DESC: Elimina el primer elemento de la lista l
 * 
 * PRE: { ! is_empty(l) }
 */ 

list addr (list l, list_elem e);
/*
 * DESC: agrega el elemento e al final de la lista l
 */

int length(list l);
/*
 * DESC: Devuelve la cantidad de elementos de la lista l 
 */

 list copy_list(list l1);
/*
 * DESC: Copia todos los elementos de l1 en la nueva lista l2
 */
 
list concat(list l1, list l2);
/*
 * DESC: Agrega al final de l todos los elementos de l0 en el mismo orden
 */

list_elem index(list l, int i);
/*
 * DESC: Devuelve el n-ésimo elemento de la lista l 
 *
 * PRE: { length(l) > n }
 */

 list take(list l, int n);
/*
 * DESC: Deja en l sólo los primeros n elementos, eliminando el resto
 */

list drop(list l, int n);
/*
 * DESC: Elimina los primeros n elementos de l 
 */



 /* Destroy */
void list_destroy(list l);
/*
 * Frees memory for c.
 */

#endif
