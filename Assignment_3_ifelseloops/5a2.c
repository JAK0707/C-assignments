#include<stdio.h>

//To check whether number is: (a) even or odd
//(ii) ternary operator

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    // Read the number from user input
    scanf("%d", &num);

    // Using ternary conditional operator to check if the number is even or odd
    (num % 2 == 0) ? printf("Even Number") : printf("Odd Number");

    return 0;
}
                