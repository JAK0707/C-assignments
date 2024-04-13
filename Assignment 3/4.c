#include<stdio.h>

//WAP to display month name according to the month number using Switch Statement

int main() {
    int monthnumber;

    // Prompt the user to enter the month number
    printf("Enter The Month Number: ");
    // Read the month number from the user input
    scanf("%d", &monthnumber);

    // Use a switch statement to print the name of the month based on the month number
    switch(monthnumber) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid month number");
    }

    return 0;
}
