#include<stdio.h>

//To find greatest of 3 integers using two methods
//(a) if-else

int main() {
    int num1, num2, num3;

    // Prompt the user to enter the first number
    printf("Enter First Number: ");
    // Read the first number from the user input
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter Second Number: ");
    // Read the second number from the user input
    scanf("%d", &num2);

    // Prompt the user to enter the third number
    printf("Enter Third Number: ");
    // Read the third number from the user input
    scanf("%d", &num3);

    // Compare the numbers to find the greatest among them
    if (num1 > num2 && num1 > num3)
        printf("%d is the greatest of the three numbers", num1);
    else if (num2 > num1 && num2 > num3)
        printf("%d is the greatest of the three numbers", num2);
    else
        printf("%d is the greatest of the three numbers", num3);

    return 0;
}
