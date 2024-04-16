#include <stdio.h>

// Function to print address using different format specifiers
void printAddressDifference() {
    int num = 10;
    printf("Using %%u: %u\n", &num);  // Unsigned decimal integer
    printf("Using %%p: %p\n", &num);  // Pointer address
    printf("Using %%x: %x\n", &num);  // Hexadecimal integer
}

// Main function
int main() {
    printAddressDifference();
    return 0;
}