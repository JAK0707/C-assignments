#include <stdio.h>
#include <stdlib.h> // Include <stdlib.h> for malloc, free, realloc

// Function to allocate memory for an integer array
int* allocateIntArray(int size) {
    int* arr = (int*)malloc(size * sizeof(int)); // Allocate memory for 'size' integers
    return arr; // Return the pointer to the allocated memory
}

// Function to free memory for an integer array
void freeIntArray(int* arr) {
    free(arr); // Free the dynamically allocated memory
}

// Function to demonstrate memory management
void memoryManagementFunctions() {
    int* ptr1 = allocateIntArray(5); // Allocate memory for an array of 5 integers
    if (ptr1 == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    int* ptr2 = allocateIntArray(5); // Allocate memory for another array of 5 integers
    if (ptr2 == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    int* ptr3 = (int*)realloc(ptr1, 10 * sizeof(int)); // Reallocate memory for ptr1 to hold 10 integers
    if (ptr3 == NULL) {
        printf("Memory reallocation failed.\n");
        return;
    }

    freeIntArray(ptr1); // Free memory allocated for ptr1
    freeIntArray(ptr2); // Free memory allocated for ptr2
    freeIntArray(ptr3); // Free memory allocated for ptr3
}

// Main function
int main() {
    memoryManagementFunctions(); // Call the function to demonstrate memory management
    return 0;
}