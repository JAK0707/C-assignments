#include <stdio.h>

// Function to calculate the factorial of a number
long int factorial(int number) {
    // Initialize the factorial to 1
    long int fact = 1;
    
    // Loop through all the numbers from 1 to the given number
    for(int i = 1; i <= number; i++) {
        // Multiply the current number with the factorial
        fact = fact * i;
    }
    
    // Return the factorial
    return fact;
}

int main() {
    // Declare and initialize the number variable
    int number = 0;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the number from the user
    scanf("%d", &number);
    
    // Calculate the factorial of the number
    long int fact = factorial(number);
    
    // Print the factorial
    printf("Factorial of %d is: %ld\n", number, fact);
    
    // Return 0 to indicate successful execution
    return 0;
}