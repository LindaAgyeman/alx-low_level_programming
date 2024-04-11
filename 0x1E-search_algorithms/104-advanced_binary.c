#include <stdio.h>

int advanced_binary_recursive(int *array, int low, int high, int value) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        
        if ((mid == 0 || value > array[mid - 1]) && array[mid] == value)
            return mid;
        else if (value > array[mid])
            return advanced_binary_recursive(array, mid + 1, high, value);
        else
            return advanced_binary_recursive(array, low, mid - 1, value);
    }
    return -1;
}

int advanced_binary(int *array, size_t size, int value) {
    if (array == NULL || size == 0) return -1;
    
    int result = advanced_binary_recursive(array, 0, size - 1, value);
    return result;
}

void print_array(int *array, int low, int high) {
    printf("Searching in array: ");
    for (int i = low; i <= high; ++i) {
        printf("%d", array[i]);
        if (i < high) printf(", ");
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 2;
    
    int index = advanced_binary(arr, size, value);
    printf("Index of %d: %d\n", value, index);
    return 0;
}
