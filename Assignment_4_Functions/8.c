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

// Function to calculate LCM of two numbers
int calculateLCM(int num1, int num2) {
    int lcm;
    lcm = (num1 * num2) / calculateHCF(num1, num2);
    return lcm;
}

int main() {
    int num1, num2;

    // Input two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and print LCM
    printf("LCM of %d and %d is %d\n", num1, num2, calculateLCM(num1, num2));

    return 0;
}