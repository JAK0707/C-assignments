#include <stdio.h>

// Program to interchange (swap) values of two variables using assignment operator.
int main() {
    int a = 5, b = 10, temp;

    // Display original values of variables
    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swap values using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped values of variables
    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
