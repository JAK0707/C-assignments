//WAP to read in 20 integers and count the even numbers

#include<stdio.h>

int main() {
    int num;
    int count = 0;

    // Iterate from 1 to 20 to prompt the user for input
    for (int i = 1; i <= 20; i++) {
        printf("Enter %d number: ", i);
        scanf("%d", &num);

        // Check if the entered number is even
        if (num % 2 == 0) {
            // Increment the count if the number is even
            count += 1;
        }
    }

    // Display the count of even numbers
    printf("Numbers of even numbers present in input = %d", count);

    return 0;
}