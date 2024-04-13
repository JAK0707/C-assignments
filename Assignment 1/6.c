#include<stdio.h>

// Program to perform arithmetic operations.

#include <stdio.h>

int main() {
    // Declare variables to store two numbers
    float num1, num2;
    
    // Prompt the user to enter the first number
    printf("Enter first number: ");
    // Read the first number from the user input
    scanf("%f", &num1);
    
    // Prompt the user to enter the second number
    printf("Enter second number: ");
    // Read the second number from the user input
    scanf("%f", &num2);
    
    // Perform arithmetic operations
    float add = num1 + num2; // Addition
    float sub = num1 - num2; // Subtraction
    float mul = num1 * num2; // Multiplication
    float div = num1 / num2; // Division
    
    // Display the results of arithmetic operations
    printf("Sum = %f\nSubtraction = %f\nMultiplication = %f\nDivision = %f\n", add, sub, mul, div);
    
    return 0;
}
