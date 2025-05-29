#include <stdlib.h>
#include <assert.h>
#include "pair.h"

struct s_pair_t {
    elem fst;
    elem snd;
};

pair_t pair_new(elem x, elem y){
    pair_t p = NULL;
    p = malloc(sizeof(elem)*2);
    p->fst = x;
    p->snd = y;
    return p;
}

elem pair_first(pair_t p){
    assert(p != NULL);
    return p->fst;
}

elem pair_second(pair_t p){
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