#include <stdio.h>
#include <stdlib.h>

// Function to dynamically allocate memory and free it
void dynamicMemoryAllocation() {
    int *ptr;
    ptr = (int*)malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1; // Initialize values
    }
    printf("Dynamically allocated array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]); // Print values
    }
    printf("\n");
    free(ptr); // Free dynamically allocated memory
}

// Main function
int main() {
    dynamicMemoryAllocation();
    return 0;
}