#include<stdio.h>

//WAP to check whether no. is prime or not

int main() {
    int num;
    int count = 0;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the entered number is less than or equal to 0
    if (num <= 0) {
        printf("Enter a number greater than 0");
        return 0;
    }

    // Check if the entered number is 1
    if (num == 1) {
        printf("1 is neither prime nor a composite number");
        return 0;
    }

    // Check for factors of the entered number
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            count = 1;  // If the number is divisible by any number other than 1 and itself, set count to 1
            break;
        }
    }

    // Display the result based on the count value
    if (count == 1) {
        printf("%d is not a prime number\n%d is a composite number", num, num);
    } else {
        printf("%d is a prime number", num);
    }

    return 0;
}