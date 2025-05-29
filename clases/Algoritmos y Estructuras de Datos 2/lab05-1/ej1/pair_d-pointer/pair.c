#include <stdlib.h>
#include <assert.h>
#include "pair.h"

struct s_pair_t {
    int fst;
    int snd;
};

pair_t pair_new(int x, int y){
    pair_t p = NULL;
    p = malloc(sizeof(int)*2);
    p->fst = x;
    p->snd = y;
    return p;
}

int pair_first(pair_t p){
    assert(p != NULL);
    return p->fst;
}

int pair_second(pair_t p){
    assert(p != NULL);
    return p->snd;
}

pair_t pair_swapped(pair_t p){
    assert(p != NULL);
    pair_t q = NULL;
    q = pair_new(pair_second(p), pair_first(p));
    return q;
}

void pair_destroy(pair_t p){
    assert(p != NULL);
    free(p);
}