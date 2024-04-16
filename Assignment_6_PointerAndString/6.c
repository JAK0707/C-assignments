#include <stdio.h>

// Function to pass and return an array
int* processArray(int arr[], int size) {
    static int result[5]; // Static array to hold the result
    for (int i = 0; i < size; i++) {
        result[i] = arr[i] * 2; // Process the array (double each element)
    }
    return result;
}

// Main function
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *result = processArray(arr, 5);
    printf("Result array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}