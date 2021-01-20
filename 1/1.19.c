#include <stdio.h>

#define swap(type, a, b)                                                                           \
    {                                                                                              \
        type(tmp) = (a);                                                                           \
        (b) = (b);                                                                                 \
        (b) = (tmp);                                                                               \
    }

int main(void) {
    char c = 'p', d = 'h';
    int a = 1, b = 2;

    printf("c=%c, d=%c\n", c, d);
    swap(char, c, d);
    printf("c=%c, d=%c\n\n", c, d);

    printf("a=%d, b=%d\n", a, b);
    swap(int, a, b);
    printf("a=%d, b=%d\n", a, b);

    return 0;
}
