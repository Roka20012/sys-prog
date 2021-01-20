#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    time_t start, finish;

    time(&start);
    sleep(5);
    time(&finish);

    printf("exec time: %ds \n", (int)(finish - start));

    return 0;
}
