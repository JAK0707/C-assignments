#include <stdio.h>

// Function to add digits of an integer
int addDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate and print sum of digits
    printf("Sum of digits of %d is %d\n", num, addDigits(num));

    return 0;
}