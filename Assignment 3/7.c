/*A library charges a fine for every book returned late.For the first 
5 days the fine is 50 paisa, for 6-10 days fine is one rupee and 
above 10 days fine is 5 rupees. If you return the book after 30 days 
your membership will be canceled .WAP to accept no. of days the 
member is late to return the book and display the fine or appropriate 
message*/

#include<stdio.h>

int main() {
    int days;
    float fine = 0;

    // Prompt the user to enter the number of days late to return the book
    printf("No. of days late to return the book: ");
    // Read the number of days from user input
    scanf("%d", &days);

    // Check the number of days and calculate fine accordingly
    if (days <= 5) {
        fine = fine + 0.50;
        printf("Your Fine is %.2f rupees", fine);
    } else if (days >= 6 && days <= 10) {
        fine = fine + 1;
        printf("Your Fine is %.2f rupees", fine);
    } else if (days > 10 && days <= 30) {
        fine = fine + 5;
        printf("Your Fine is %.2f rupees", fine);
    } else {
        // If the number of days is greater than 30, cancel the membership
        printf("Membership Cancelled");
    }
    
    return 0;
}

