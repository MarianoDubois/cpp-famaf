#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

#include "list.h"

#define MAX_LENGTH 100

struct _list {
    elem a[MAX_LENGTH];
    int start;
    int size;
};

//
// Constructors
//

/**
 * @brief Creates a new empty list.
 */
list empty(){
    list l = malloc(sizeof(list));
    l->start = 0;
    l->size = 0;
    return l;
}

/**
 * @brief Adds element `e` to the left of list `l`.
 */
list addl(elem e, list l){
    l->start = ((l->start - 1) % MAX_LENGTH);
    l->size++;
    l->a[l->start] = e;
    return l;
}

//
// Operations
//

/**
 * @brief Returns whether the list `l` is empty.
 */
bool is_empty(list l){
    return (l->size==0);
}

/**
 * @brief Returns first element of list `l`.
 *
 * PRECONDITION: !is_empty(l)
 */
elem head(list l){
    assert(!(is_empty(l)));
    return(l->a[l->start]);
}

/**
 * @brief Removes in-place the first element of list `l`.
 *
 * PRECONDITION: !is_empty(l)
 */
list tail(list l){
    assert(!(is_empty(l)));
    l->start = (l->start + 1) % MAX_LENGTH;
    l->size--;
    return l;
}

/**
 * @brief  Adds in-place element `e` to the right of list `l`.
 */
list addr(list l, elem e){
    l->a[ (l->start + l->size) % MAX_LENGTH ] = e;
    l->size++;
    return l;
}

/**
 * @brief Return the amount of elements of list `l`.
 */
int length(list l){
    return (l->size);
}

/**
 * @brief Adds to the end of `l` all elements of `l0`.
 */
list concat(list l, list l0){
    for (int i=0; i<l0->size; i++)
    {
        l = addr(l, l0->a[(l0->start + i) % MAX_LENGTH]);
    }
    return l;
}

/**
 * @brief Return the `n`-th element of `l`.
 *
 * PRECONDITION: n < length(l)
 */
elem index(list l, int n){
    assert(length(l)>n);
    return(l->a[ (l->start + n) % MAX_LENGTH]);
}

/**
 * @brief Takes the first `n` elements of `l` in-place, removing the rest.
 */
list take(list l, int n){
    l->size = n;
    return l;
}

/**
 * @brief Removes the first `n` elements of `l` in-place.
 */
list drop(list l, int n){
    l->start = (l->start+n) % MAX_LENGTH;
    l->size = l->size - n;
    return l;
}

/**
 * @brief  Makes a copy of list `l`. Allocates new memory.
 */
list copy_list(list l){
    list copy = empty();
    copy->start = l->start;
    copy->size = l->size;
    for (int i=0; i<l->size; i++)
    {
        copy->a[(l->start + i) % MAX_LENGTH] = l->a[(l->start + i) % MAX_LENGTH];
    }
    return copy;
}

/**
 * @brief Frees memory for `l`.
 */
void destroy_list(list l){
    free(l); //tmb podria ser simplemente poner l->size = 0;
    l = NULL;
}
