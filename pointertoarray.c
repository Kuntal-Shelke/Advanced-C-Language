#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Pointer to the array
    int (*ptr)[5] = &arr;

    printf("Array elements using pointer to array:\n");

    // Access elements using the pointer to the array
    for (int i = 0; i < size; i++) {
        printf("value = %d ", (*ptr)[i]);
        printf("Address =%u \n", &(*ptr)[i]);
    }
    printf("\n");

    return 0;
}

