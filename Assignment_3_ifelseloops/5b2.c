#include<stdio.h>

//To check whether number is: (b) negative or positive by using
//(ii) ternary operator

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    // Read the number from user input
    scanf("%d", &num);

    // Using ternary conditional operator to check if the number is positive or negative
    (num < 0) ? printf("Negative Number") : printf("Positive Number");

    return 0;
}
