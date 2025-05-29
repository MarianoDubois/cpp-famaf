#include "pair.h"
#include <assert.h>

pair_t pair_new(int x, int y){
    pair_t new;
    new.fst = x;
    new.snd = y;
    return new;
}

int pair_first(pair_t p){
    return p.fst;
}


int pair_second(pair_t p){
    return p.snd;
}


pair_t pair_swapped(pair_t p){
    int swap = p.fst;
    p.fst = p.snd;
    p.snd = swap;
    return p;
}


pair_t pair_destroy(pair_t p){
    return p;
}
