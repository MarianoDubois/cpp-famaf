#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

#include "list.h"

typedef struct _list {
    elem data;
    struct _list *next;
} Node;

/* Constructors */
list empty(void){
    list l = NULL;
    return l;
}

list addl(elem e, list l){
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

elem head(list l){
    assert(!(is_empty(l)));
    elem e = l->data;
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


list addr (list l, elem e){
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

list copy_list(list l1){
    Node* p = NULL;
    Node* q = NULL;
    list l2 = NULL;

    p = l1;
    
    if (p != NULL){
        q = malloc(sizeof(Node));
        q->data = p->data;
        q->next = NULL;
        l2 = q;
        p = p->next;
    }
    while (p != NULL)
    {
        q->next = malloc(sizeof(Node));
        q = q-> next;
        q->data = p->data;
        q->next = NULL;
        p = p->next;
    }
    return l2;
}
 
list concat(list l1, list l2){
    Node* p = NULL;
    list l2_copy = NULL;
    l2_copy = copy_list(l2);

    if (!(is_empty(l1)))
    {
        p = l1;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = l2_copy;
    }
    else 
    {
        l1 = l2_copy;
    }
    return l1;
}

elem index(list l, int n){
    assert(length(l)>n);
    Node* p = NULL;
    int i = 0;
    elem e;
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

 /* Destroy */
void list_destroy(list l){
    list l2 = NULL;
    
    l2 = l->next;
    
    if (l2 != NULL)
    {
        free(l);
        list_destroy(l2);
    }
    else
    {
        free(l);
    }
    l = NULL;
    l2 = NULL;
}
