#include <stdio.h>
#include <math.h>

// Program to find Nth root of a number.
int main() {
    double num, root;
    int n;
    // Input a number and N
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("Enter the value of N: ");
    scanf("%d", &n);
    // Calculate Nth root
    root = pow(num, 1.0 / n);
    // Display the result
    printf("%dth root of %.2lf is %.2lf\n", n, num, root);
    return 0;
}
