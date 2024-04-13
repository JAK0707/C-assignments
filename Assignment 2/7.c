#include <stdio.h>

// Program to utilize ternary operator (?:).
int main() {
    int num = 5;
    // Check if num is even or odd using ternary operator
    printf("%d is %s\n", num, (num % 2 == 0) ? "even" : "odd");
    return 0;
}
