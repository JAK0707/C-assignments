#include<stdio.h>

//Factorial of number

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    int factorial = 1;

    // Calculate the factorial of the entered number
    for (int i = num; i >= 1; i--) {
        factorial = factorial * i;
    }

    // Display the factorial of the entered number
    printf("Factorial of %d is %d", num, factorial);

    return 0;
}
