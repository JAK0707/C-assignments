#include <stdio.h>

// Function to print address/values of variables
void printVariableAddressValues() {
    int num = 10;
    float f_num = 3.14;
    char ch = 'A';

    printf("Address of num: %p, Value: %d\n", &num, *(&num));
    printf("Address of f_num: %p, Value: %.2f\n", &f_num, *(&f_num));
    printf("Address of ch: %p, Value: %c\n", &ch, *(&ch));
}

// Main function
int main() {
    printVariableAddressValues();
    return 0;
}