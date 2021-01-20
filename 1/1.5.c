#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 60;
    int seconds = 0;

    printf("Enter seconds:");
    scanf("%d", &seconds);

    int minutes = seconds / a;
    int hours = minutes / a;

    printf("result: ");
    printf("%d hour ", hours);
    printf("%d minute ", minutes % 60);
    printf("%d second ", seconds % 60);

    return 0;
}
