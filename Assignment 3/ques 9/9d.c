#include <stdio.h>

//Armstrong numbers between 1 to 500

int main() {
    // Initialize variables
    int number, temp, digit1, digit2, digit3;

    // Print a message indicating what the program does
    printf("Printing all Armstrong numbers between 1 and 500:\n\n");

    // Iterate from 1 to 500
    for(number = 1; number <= 500; number++) {
        // Calculate the digits of the number
        digit1 = number % 10;
        digit2 = (number / 10) % 10;
        digit3 = (number / 100) % 10;

        // Calculate the sum of the cubes of the digits
        temp = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);

        // Check if the sum is equal to the number
        if (temp == number) {
            // Print the number as an Armstrong number
            printf("Armstrong Number: %d\n", temp);
        }
    }

    return 0;
}