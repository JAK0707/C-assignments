#include <stdio.h>

// Program to divide two numbers and use type casting operation.
int main() {
    int num1 = 10, num2 = 3;
    double result;

    // Divide two numbers and convert result to double using type casting
    result = (double)num1 / num2;

    // Display result
    printf("Result: %lf\n", result);

    return 0;
}
