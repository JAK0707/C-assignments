#include <stdio.h>

// Function to calculate HCF of two numbers
int calculateHCF(int num1, int num2) {
    int hcf;
    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    hcf = num1;
    return hcf;
}

int main() {
    int num1, num2;

    // Input two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and print HCF
    printf("HCF of %d and %d is %d\n", num1, num2, calculateHCF(num1, num2));

    return 0;
}