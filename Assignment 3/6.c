#include<stdio.h>

//WAP to check a no. say ‘n’ divisible by 5 and/or 8. Print the appropriate message accordingly

int main() {
    int n;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    // Read the number from user input
    scanf("%d", &n);

    // Check if the number is divisible by both 5 and 8
    if (n % 5 == 0 && n % 8 == 0) {
        printf("%d is divisible both by 5 and 8", n);
    }
    // Check if the number is divisible only by 5
    else if (n % 5 == 0) {
        printf("%d is divisible only by 5", n);
    }
    // Check if the number is divisible only by 8
    else if (n % 8 == 0) {
        printf("%d is divisible only by 8", n);
    }
    // If none of the above conditions are met, the number is neither divisible by 5 nor by 8
    else {
        printf("%d is neither divisible by 5 nor by 8", n);
    }

    return 0;
}
