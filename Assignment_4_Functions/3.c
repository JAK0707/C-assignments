#include <stdio.h>

//WAP to swap two variables using with and without a temp variable using a function besides the main function.

// Function declaration
void swapWithTemp(int *a, int *b);
void swapWithoutTemp(int *a, int *b);

int main() {
    int x, y;

    // Taking input from the user
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    // Swapping using a temporary variable
    swapWithTemp(&x, &y);

    printf("After swapping with temp variable:\n");
    printf("x = %d, y = %d\n", x, y);

    // Reset values
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Swapping without using a temporary variable
    swapWithoutTemp(&x, &y);

    printf("After swapping without temp variable:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

// Function definition to swap using a temporary variable
void swapWithTemp(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Function definition to swap without using a temporary variable
void swapWithoutTemp(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}