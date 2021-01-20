#include <stdio.h>
#include <string.h>

int replace(char **str) {
    int spaces = 0;
    int i = 0;

    while (str[i] != NULL) {
        if ((*str)[i] == ' ') {
            (*str)[i] = '-';
            spaces++;
        }
        i++;
    }

    return spaces;
}

int main(int _, char *argv[]) {
    char *str = argv[1];

    printf("input: %s\n", str);

    int spaces = replace(&str);

    printf("result: %s\n", str);
    printf("spaces replaced: %d\n", spaces);
    return spaces;
}
