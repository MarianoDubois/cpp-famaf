#include <stdlib.h>
#include <stdbool.h>

#include "list.h"

/* Constructors */
list empty(void){
    list l = NULL;
    return l;
}

list addl(list l, list_elem e){
    Node* p = NULL;
    p = malloc(sizeof(Node));
    p->data = e;
    p->next = l;
    l = p;
    p = NULL;
    return l;
}


 /* Operations */
bool is_empty(list l){
    return (l == NULL);
}

list_elem head(list l){
    assert(!(is_empty(l)));
    list_elem e = l->data;
    return e;
}


list tail(list l){
    assert(!(is_empty(l)));
    Node* p = NULL;
    p = l;
    l = l->next;
    free(p);
    p = NULL;
    return l;
}


list addr (list l, list_elem e){
    Node* p = NULL; 
    Node* q = NULL;
    q = malloc(sizeof(Node));
    q->data = e;
    q->next = NULL;
    
    if (!(is_empty(l)))
    {
        p = l;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = q;
    }
    else 
    {
        l = q;
    }
    
    return l;
}

int length(list l){
    Node* p = NULL;
    int n = 0;

    p = l;
    
    while (p != NULL)
    {
        n++;
        p = p->next;
    }
    
    return n;
}
 
list concat(list l1, list l2){
    Node* p = NULL;
    if (!(is_empty(l1)))
    {
        p = l1;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = l2;
    }
    else 
    {
        l1 = l2;
    }
    return l1;
}

list_elem index(list l, int n){
    assert(length(l)>n);
    Node* p = NULL;
    int i = 0;
    list_elem e;
    p = l;
    while (i != n)
    {
        p = p->next;
        i++;
    }
    e = p->data; 
    return e;
}

list take(list l, int n){
    Node* p = NULL;
    Node* q = NULL;
    
    p = l;
    
    for(int i = 0 ; i<n ; i++)
    {
        p = p->next;
    }

    if (p != NULL)
    {
        q = p;
        p = p->next;
        q->next = NULL;
        q = p;
        while (p != NULL)
        {
            p = p->next;
            free(q);
            q = p;
        }
    }
    
    return l;
}

list drop(list l, int n){
    Node* p = NULL;
    Node* q = NULL;
    
    p = l;
    
    for(int i = 0 ; i<n ; i++)
    {
        q = p;
        p = p->next;
        free(q);
    }

    l = p;

    return l;
}

list copy_list(list l1){
    Node* p = NULL;
    Node* q = NULL;
    list l2 = NULL;

    p = l1;
    
    while (p != NULL)
    {
        q = p;
        p = p->next;
        q = malloc(sizeof(Node));
    }
}

 /* Destroy */
void list_destroy(list l);
/*
 * Frees memory for c.
 */
