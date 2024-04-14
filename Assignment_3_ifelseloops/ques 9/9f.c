#include<stdio.h>

//Multiplication table

int main() {
    int num, result = 1;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Iterate from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Multiply the number by the current integer
        result = num * i;
        
        // Print the multiplication expression and result
        printf("%d * %d = %d\n", num, i, result);
    }

    return 0;
}