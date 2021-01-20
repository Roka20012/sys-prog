#include <stdio.h>
#include <time.h>

int main() {
    time_t time = __INT32_MAX__;
    printf("%s", ctime(&time));

    return 0;
}
