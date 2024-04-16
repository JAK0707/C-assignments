#include <stdio.h>

// Function to verify addresses of adjacent elements in arrays
void verifyAdjacentAddresses() {
    char char_array[5];
    int int_array[5];
    float float_array[5];

    printf("Addresses of adjacent elements in char array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%p ", &char_array[i]);
    }
    printf("\n");

    printf("Addresses of adjacent elements in int array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%p ", &int_array[i]);
    }
    printf("\n");

    printf("Addresses of adjacent elements in float array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%p ", &float_array[i]);
    }
    printf("\n");
}

// Main function
int main() {
    verifyAdjacentAddresses();
    return 0;
}