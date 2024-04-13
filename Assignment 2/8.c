#include <stdio.h>

// Program using sizeof() function to find size of char, integer, long int, float and double.
int main() {
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of integer: %lu bytes\n", sizeof(int));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    return 0;
}
