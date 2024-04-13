#include<stdio.h>

//GCD of two numbers

int main() {
    int num1, num2, min, gcd;
    
    // Prompt the user to enter the first number
    printf("Enter First Number: ");
    scanf("%d", &num1);
    
    // Prompt the user to enter the second number
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    
    // Determine the minimum of the two numbers
    min = (num1 < num2) ? num1 : num2;
    
    // Iterate from the minimum number to 1
    for (int i = min; i >= 1; i--) {
        // Check if both numbers are divisible by the current iterator (`i`)
        if (num1 % i == 0 && num2 % i == 0) {
            // If yes, update the GCD and break the loop
            gcd = i;
            break;
        }
    }
    
    // Print the GCD
    printf("GCD of %d and %d is %d", num1, num2, gcd);
    
    return 0;
}