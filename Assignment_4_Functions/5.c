#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    // If the number is less than or equal to 1, it is not prime
    if (num <= 1) {
        return 0;
    }

    // Check if the number is divisible by any number from 2 to its square root
    for (int i = 2; i <= num / i; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    // If no factors were found, the number is prime
    return 1;
}

int main() {
    // Declare and initialize the number variable
    int number = 0;

    // Prompt the user to enter a number
    printf("Enter a number: ");

    // Read the number from the user
    scanf("%d", &number);

    // Check if the number is prime
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    // Return 0 to indicate successful execution
    return 0;
}