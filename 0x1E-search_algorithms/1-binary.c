#include <stdio.h>

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    size_t left = 0;
    left = 0;
    size_t right = size - 1;

    while (left <= right) {
        printf("Searching in array: ");
        size_t i;
        for ( i = left; i <= right; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        int mid = left + (right - left) / 2;

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}