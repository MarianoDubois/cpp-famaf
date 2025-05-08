#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "data.h"

void
print_data(data_t d) {
    printf("NOMBRE: %s\n"
           "EDAD  : %d años\n"
           "ALTURA: %d cm\n\n",
           d.name, d.age, d.height);
}

int main(void) {

    data_t messi = {"Leo Messi", 36, 169};
    print_data(messi);

    printf("\nname-size  : %lu bytes\n" //nope, es un array en el stack
           "age-size   : %lu bytes\n"
           "height-size: %lu bytes\n"
           "data_t-size: %lu bytes\n"
           "data_sum-size: %lu bytes\n",  
           (long unsigned int)sizeof(messi.name),
           (long unsigned int)sizeof(messi.age),
           (long unsigned int)sizeof(messi.height),
           (long unsigned int)sizeof(messi),
           ((long unsigned int)sizeof(messi.name)+
           (long unsigned int)sizeof(messi.age)+
           (long unsigned int)sizeof(messi.height))
        );
    
    data_t* p = NULL;
    p = &messi;

    printf("\nname-index-  : %lu // %p \n" //nope, es un array en el stack
        "age-index   : %lu // %p \n"
        "height-index: %lu // %p\n"
        "data_t-index: %lu // %p\n",  
        (long unsigned int) p->name,
        (void *) &p->name,
        (long unsigned int) (p->age),
        (void *) &p->age,
        (long unsigned int) p->height,
        (void *) &p->height,
        (long unsigned int) p,
        (void *) p
    );


    data_t* q = NULL;
    q = malloc(sizeof(data_t));
    *q->name = 'c';
    q->age = 58;
    q->height = 168;

    printf("\nname-index-  : %lu // %p \n" //nope, es un array en el stack
        "age-index   : %lu // %p \n"
        "height-index: %lu // %p\n"
        "data_t-index: %lu // %p\n",  
        (long unsigned int) q->name,
        (void *) &q->name,
        (long unsigned int) (q->age),
        (void *) &q->age,
        (long unsigned int) q->height,
        (void *) &q->height,
        (long unsigned int) q,
        (void *) q
    );


    printf("\nname-size  : %lu bytes\n" //nope, es un array en el stack
        "age-size   : %lu bytes\n"
        "height-size: %lu bytes\n"
        "data_t-size: %lu bytes\n"
        "data_sum-size: %lu bytes\n",  
        (long unsigned int)sizeof(*q->name),
        (long unsigned int)sizeof(q->age),
        (long unsigned int)sizeof(q->height),
        (long unsigned int)sizeof(q),
        ((long unsigned int)sizeof(*q->name)+
        (long unsigned int)sizeof(q->age)+
        (long unsigned int)sizeof(q->height))
     );

    free(q);

    return EXIT_SUCCESS;
}
