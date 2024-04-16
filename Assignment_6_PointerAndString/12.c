#include <stdio.h>
#include <string.h>

// Function to count vowels in a string
int countVowels(char *str) {
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}

// Main function
int main() {
    char str[] = "Hello, how are you?";
    printf("Number of vowels in the string: %d\n", countVowels(str));
    return 0;
}