#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void inputArray(int *arr, int size);
void outputArray(const int *arr, int size);
void swapElements(int *arr, int i, int j);
int findMin(const int *arr, int size);
int findMax(const int *arr, int size);
void reverseArray(int *arr, int size);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the dynamic array
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input values into the array
    printf("Enter %d integers:\n", size);
    inputArray(arr, size);

    // Output the array
    printf("Array contents:\n");
    outputArray(arr, size);

    // Find and display minimum and maximum values
    int min = findMin(arr, size);
    int max = findMax(arr, size);
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    // Reverse the array
    reverseArray(arr, size);
    printf("Reversed array:\n");
    outputArray(arr, size);

    // Swap two elements
    int i, j;
    printf("Enter indices of two elements to swap (0 to %d):\n", size - 1);
    scanf("%d %d", &i, &j);
    if (i >= 0 && i < size && j >= 0 && j < size) {
        swapElements(arr, i, j);
        printf("Array after swapping elements at index %d and %d:\n", i, j);
        outputArray(arr, size);
    } else {
        printf("Invalid indices.\n");
    }

    // Free the allocated memory
    free(arr);

    return 0;
}

// Function to input values into the array
void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to output the array contents
void outputArray(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to swap two elements in the array
void swapElements(int *arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Function to find the minimum value in the array
int findMin(const int *arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to find the maximum value in the array
int findMax(const int *arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to reverse the array
void reverseArray(int *arr, int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        swapElements(arr, start, end);
        start++;
        end--;
    }
}
