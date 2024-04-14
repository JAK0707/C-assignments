#include<stdio.h>

//HCF of two numbers

int main() {
    int num1, num2, min, hcf;
    
    // Prompt the user to enter the first number
    printf("Enter First Number: ");
    scanf("%d", &num1);
    
    // Prompt the user to enter the second number
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    
    // Determine the minimum of the two numbers
    min = (num1 < num2) ? num1 : num2;
    
    // Iterate from 1 to the minimum number
    for (int i = 1; i <= min; i++) {
        // Check if both numbers are divisible by i
        if (num1 % i == 0 && num2 % i == 0) {
            // If yes, update the HCF
            hcf = i;
        }
    }
    
    // Print the HCF
    printf("HCF of %d and %d is %d", num1, num2, hcf);
    
    return 0;
}