#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initialize a string containing a floating-point number
    char *s = "3.145";
    
    // Convert the string to a double using atof() function
    double number = atof(s);
    printf("Converted string to double: %lf\n", number);
    
    // Convert the double to an integer using type casting
    int integerPart = (int)number;
    printf("Integer part of the number: %d\n", integerPart);
    
    return 0;
}
