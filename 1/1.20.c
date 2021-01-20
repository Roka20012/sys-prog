#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned int)time(NULL));
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("%f ", (n * ((float)rand() / RAND_MAX)));

    return 0;
}
