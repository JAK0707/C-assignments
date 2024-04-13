#include<stdio.h>

//Calculator

int main() {
    // Declare variables to store two numbers and the operation
    float num1, num2;
    char operation;

    // Prompt the user to enter the first number
    printf("Enter first number: ");
    // Read the first number from the user input
    scanf("%f", &num1);

    // Prompt the user to enter the second number
    printf("Enter second number: ");
    // Read the second number from the user input
    scanf("%f", &num2);

    // Calculate the result of each arithmetic operation
    float add = num1 + num2; // Addition
    float sub = num1 - num2; // Subtraction
    float mul = num1 * num2; // Multiplication
    float div = num1 / num2; // Division

    // Prompt the user to enter the operation
    printf("Operations:\n'+' = Addition\n'-' = Subtraction\n'*' = Multiplication\n'/' = Division\nEnter the operation: "); 
    // Read the operation from the user input
    scanf(" %c", &operation);

    // Perform the operation based on the user's choice using a switch statement
    switch (operation) {
        case '+': // Addition
            printf("Addition = %.3f", add);
            break;
        case '-': // Subtraction
            printf("Subtraction = %.3f", sub);
            break;
        case '*': // Multiplication
            printf("Multiplication = %.3f", mul);
            break;
        case '/': // Division
            printf("Division = %.2f", div);
            break;
        default: // If an invalid operation is entered
            printf("Enter a valid operation");
    }    

    return 0;
}