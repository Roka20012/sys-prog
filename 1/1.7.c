#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_number(double *arr, int arr_length, double search_number) {
    for (int i = 0; i < arr_length; i++) {
        if (arr[i] == search_number) {
            return arr[i];
        }
    }

    return -1;
}

int main() {
    int arr_length = 10;
    double arr[arr_length];

    for (int f = 0; f < arr_length; f++) {
        arr[f] = (rand() % 20) + 50;
        printf("element: %.3lf\n", arr[f]);
    }

    double search_number = -1;
    printf("Enter search_number: ");
    scanf("%lf", &search_number);

    double finded_number = find_number(arr, arr_length, search_number);

    if (finded_number < 0) {
        printf("Not found");
        return 0;
    }

    printf("number: %.3lf", finded_number);

    return 0;
}
