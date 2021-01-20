#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

int main()
{
    time_t start, finish;

    time(&start);
    sleep(5);
    time(&finish);

    printf("exec time: %ds \n", (int)(finish - start));

    return 0;
}
