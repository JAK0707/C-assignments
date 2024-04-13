#include <stdio.h>

//Generate Fibonacci series

int main() {
    int n, first = 0, second = 1, next;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    // Iterate from 0 to n-1
    for (int i = 0; i < n; i++) {
        // Print the current term
        printf("%d, ", first);
        
        // Calculate the next term
        next = first + second;
        
        // Update first and second for the next iteration
        first = second;
        second = next;
    }

    return 0;
}