#include <stdio.h>

// Function to check size of pointer variables
void checkPointerSize() {
    int *ptr_int;
    char *ptr_char;
    float *ptr_float;

    printf("Size of int pointer: %lu bytes\n", sizeof(ptr_int));
    printf("Size of char pointer: %lu bytes\n", sizeof(ptr_char));
    printf("Size of float pointer: %lu bytes\n", sizeof(ptr_float));
}

// Main function
int main() {
    checkPointerSize();
    return 0;
}