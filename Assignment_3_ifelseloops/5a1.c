#include<stdio.h>

//To check whether number is: (a) even or odd
//(i) if-else

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    // Read the number from user input
    scanf("%d", &num);

    // Check if the number is divisible by 2
    if (num % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}
