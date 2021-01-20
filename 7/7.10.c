#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned int)time(NULL));

    for (int i = 0; i < 6; i += 1) {
        printf("%f \n", ((float)rand() / RAND_MAX));
    }

    printf("\n\n");

    for (int i = 0; i < 6; i += 1) {
        printf("%f \n", (100 * ((float)rand() / RAND_MAX)));
    }

    return 0;
}
