#include <stdio.h>
#include <math.h>

//Program to display first n prime numbers.

// Function to check if a number is prime
int isPrime(int num) {
    // If the number is less than or equal to 1, it is not prime
    if (num <= 1) {
        return 0;
    }

    // For 2, return true directly as it's the only even prime number
    if (num == 2) {
        return 1;
    }

    // Check if the number is divisible by any number from 2 to its square root
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    // If no factors were found, the number is prime
    return 1;
}

int main() {
    // Declare and initialize the number of primes variable
    int numOfPrimes = 0;

    // Prompt the user to enter the number of primes to display
    printf("Enter the number of primes to display: ");

    // Read the number of primes from the user
    scanf("%d", &numOfPrimes);

    // Initialize the counter variable
    int counter = 0;
    int num = 2; // Start checking from 2

    // Loop until the desired number of primes have been displayed
    while (counter < numOfPrimes) {
        // Check if the current number is prime
        if (isPrime(num)) {
            // If it is, display it
            printf("%d ", num);
            counter++;
        }

        // Move to the next number
        num++;
    }

    // Return 0 to indicate successful execution
    return 0;
}