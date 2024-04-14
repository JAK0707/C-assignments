#include<stdio.h>
#include<math.h>

//x raised to power n

int main() {
    int x, n, result;

    // Prompt the user to enter the base value
    printf("Enter Base Value: ");
    scanf("%d", &x);

    // Prompt the user to enter the power
    printf("Enter Power: ");
    scanf("%d", &n);

    // Calculate the result using the pow() function and typecasting
    result = (int)pow(x, n);

    // Display the result
    printf("%d^%d = %d", x, n, result);

    return 0;
}