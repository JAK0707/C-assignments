#include<stdio.h>

// WAP for any character entered through keyboard check whether the entered character is capital letter, small letter, a digit or special symbol

int main() {
    char x; // Declare a variable to store user input

    // Prompt the user to enter a character
    printf("Enter: ");
    // Read the character from the user input
    scanf("%c", &x);

    // Check if the entered character is a small letter (a-z)
    if (x >= 'a' && x <= 'z') {
        printf("Small Letter");
    }
    // Check if the entered character is a capital letter (A-Z)
    else if (x >= 'A' && x <= 'Z') {
        printf("Capital Letter");
    }
    // Check if the entered character is a digit (0-9)
    else if (x >= '0' && x <= '9') {
        printf("Digit");
    }
    // If none of the above conditions are met, the character is a special character
    else {
        printf("Special Character");
    }

    return 0;
}
