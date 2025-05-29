#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>

#include "counter.h"

struct _counter {
    unsigned int count;
};

counter counter_init(void) {
    counter c = NULL;
    c = malloc(sizeof(unsigned int));
    c->count = 0;
    return c;
}

void counter_inc(counter c) {
    c->count++;
}

bool counter_is_init(counter c) {
    return (c->count == 0);
}

void counter_dec(counter c) {
    assert(c->count != counter_is_init(c));
    c->count--;
}

counter counter_copy(counter c) {
    counter copy = counter_init();
    copy->count = c->count;
    return c;
}

void counter_destroy(counter c) {
    free(c);
    c = NULL;
}
