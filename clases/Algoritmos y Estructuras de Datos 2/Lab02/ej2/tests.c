#include <stdbool.h>
#include <stdio.h>
#include "cima.h"

#define MAX_LENGTH 10
#define N_TESTCASES_TIENE_CIMA 10
#define N_TESTCASES_CIMA 10

void test_tiene_cima(void);
void test_cima(void);

int main() {
    test_tiene_cima();
    test_cima();

    return 0;
}

void test_tiene_cima(void) {
    struct testcase {
        int a[MAX_LENGTH];
        int length;
        bool result;
    };

    struct testcase tests[N_TESTCASES_TIENE_CIMA] = {
      { {8}, 1, true },
      { {1, 2, 3, 2, 1}, 5, true },           // cima en pos 2
      { {1, 2, 3, 4, 5}, 5, true },           // todo creciente, cima en n
      { {5, 4, 3, 2, 1}, 5, true },           // todo decreciente, cima en 0
      { {1, 3, 2}, 3, true },                 // cima en 1
      { {1, 2, 2, 1}, 4, false },             // no estrictamente creciente
      { {1, 2, 3, 4, 5, 4, 5}, 7, false },    // vuelve a subir
      { {2, 2, 2, 2}, 4, false },             // todo igual
      { {3, 2, 1, 2}, 4, false },             // baja y luego sube
      { {1, 3, 5, 7, 6, 4, 2}, 7, true } 
    };
    bool result;

    printf("TESTING tiene_cima\n");

    for (int i=0; i < N_TESTCASES_TIENE_CIMA; i++) {
        printf("Test case %i: ", i+1);

        result = tiene_cima(tests[i].a, tests[i].length);

        if (result != tests[i].result) {
            printf("FAILED\n");
        } else {
            printf("OK\n");
        }
    }
}

void test_cima(void) {
    struct testcase {
        int a[MAX_LENGTH];
        int length;
        int result;
    };

    struct testcase tests[N_TESTCASES_CIMA] = {
        { {8}, 1, 0 },
        { {1, 2, 3, 2, 1}, 5, 2 },               // cima en 2
        { {5, 4, 3, 2, 1}, 5, 0 },               // cima en 0 (todo decrece)
        { {1, 2, 3, 4, 5}, 5, 4 },               // cima en 4 (todo crece)
        { {1, 3, 2}, 3, 1 },                     // cima en 1
        { {1, 5, 3, 2, 0}, 5, 1 },               // cima en 1
        { {3, 7, 6}, 3, 1 },                     // cima en 1
        { {3, 2, 1}, 3, 0 },                     // cima en 0
        { {1, 2, 3}, 3, 2 },                     // cima en 2
        { {1, 3, 5, 7, 6, 4, 2}, 7, 3 }
    };
    int result;

    printf("TESTING cima\n");

    for (int i=0; i < N_TESTCASES_CIMA; i++) {
        printf("Test case %i: ", i+1);

        result = cima(tests[i].a, tests[i].length);

        if (result == tests[i].result) {
            printf("OK\n");
        } else {
            printf("FAILED. got %d expected %d\n", result, tests[i].result);
        }
    }
}
