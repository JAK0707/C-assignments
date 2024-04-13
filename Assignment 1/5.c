#include <stdio.h>

// Program to input a fraction (rational number) and display it.
int main() {
    int numerator, denominator;
    // Input numerator and denominator
    printf("Enter the numerator: ");
    scanf("%d", &numerator);
    printf("Enter the denominator: ");
    scanf("%d", &denominator);
    // Display the fraction
    printf("Fraction: %d/%d\n", numerator, denominator);
    return 0;
}
