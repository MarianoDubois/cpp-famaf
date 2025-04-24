#include <stdbool.h>
#include <stdio.h>
#include "cima_log.h"

#define MAX_LENGTH 10
#define N_TESTCASES_CIMA 10

int main() {
    struct testcase {
        int a[MAX_LENGTH];
        int length;
        int result;
    };

    struct testcase tests[N_TESTCASES_CIMA] = {
        { {8}, 1, 0 },
        { {1, 2, 3, 2, 1}, 5, 2 },                 // cima en medio
        { {5, 4, 3, 2, 1}, 5, 0 },                 // cima en 0
        { {1, 2, 3, 4, 5}, 5, 4 },                 // cima en n−1
        { {1, 3, 2}, 3, 1 },                       // cima en el medio exacto
        { {1, 5, 3, 2, 0}, 5, 1 },                 // cima al principio pero no en 0
        { {3, 7, 6}, 3, 1 },                       // cima al medio en arreglo corto
        { {-10, -5, 0, -1, -4}, 5, 2 },            // incluye negativos, cima en 2
        { {10, 20, 30, 40, 35, 25, 10}, 7, 3 },    // cima en el medio en arreglo largo
        { {3, 6, 9, 12, 15, 13, 10, 8, 5, 1}, 10, 4 }
    };
    int result;

    printf("TESTING cima\n");

    for (int i=0; i < N_TESTCASES_CIMA; i++) {
        printf("Test case %i: ", i+1);

        result = cima_log(tests[i].a, tests[i].length);

        if (result == tests[i].result) {
            printf("OK\n");
        } else {
            printf("FAILED. got %d expected %d\n", result, tests[i].result);
        }
    }

    return 0;
}
