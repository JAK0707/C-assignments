/*Write a program to read in numbers until the number -999 is encountered.The sum of all numbers read until this point should be printed out*/

#include<stdio.h>

int main() {
    int num;
    int sum = 0;

    // Infinite loop to continuously prompt the user for input
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        // Check if the entered number is -999 to break out of the loop
        if (num == -999) {
            break;
        }

        // Add the entered number to the sum
        sum += num;
    }

    // Display the sum
    printf("Sum = %d", sum);

    return 0;
}