#include <stdio.h>

// Function to print the pattern
void printPattern() {
    char str[] = "UNIVERSITY";
    int len = strlen(str);

    // Print upper part of the pattern
    for (int i = 0; i < len; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    // Print lower part of the pattern
    for (int i = len - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    printPattern();
    return 0;
}