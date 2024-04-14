/*Keep reading in integers until one integer larger than 100 is not input. For example: 4 -90, 35, 78, 110 QUIT! (since 110 is bigger than 100)*/

#include<stdio.h>

int main() {
    int num;

    // Infinite loop to continuously prompt the user for input
    while (1) {
        printf("Enter a number less than 100: ");
        scanf("%d", &num);

        // Check if the entered number is greater than 100
        if (num > 100) {
            // Display a message and quit if the number is greater than 100
            printf("%d QUIT! You entered a number greater than 100", num);
            break;
        } else {
            // Display the entered number if it's less than or equal to 100
            printf("You entered %d\n", num);
        }
    }

    return 0;
}
