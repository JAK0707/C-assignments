#include<stdio.h>

//To check whether number is: (b) negative or positive by using
//(i) if-else

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    // Read the number from user input
    scanf("%d", &num);

    // Check if the number is less than 0
    if (num < 0)
        printf("Negative Number");
    else
        printf("Positive Number");

    return 0;
}
