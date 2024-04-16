#include <stdio.h>
#include <string.h>

// Function to concatenate two strings and compare them
void concatAndCompareStrings() {
    char str1[20] = "Hello";
    char str2[] = "World";

    strcat(str1, str2); // Concatenate str2 to str1

    printf("Concatenated string: %s\n", str1);

    // Compare strings
    if (strcmp(str1, "HelloWorld") == 0) {
        printf("The concatenated string is equal to 'HelloWorld'.\n");
    } else {
        printf("The concatenated string is not equal to 'HelloWorld'.\n");
    }
}

// Main function
int main() {
    concatAndCompareStrings();
    return 0;
}