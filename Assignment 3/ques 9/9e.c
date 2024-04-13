#include <stdio.h>

//Range of set of entered nos. by finding smallest and largest

int main() {
    int n, num, smallest, largest;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Prompt the user to enter the first number
    printf("Enter number 1: ");
    scanf("%d", &num);

    // Assume the first number as both smallest and largest
    smallest = largest = num;

    // Iterate over the remaining numbers
    for (int i = 2; i <= n; ++i) {
        // Prompt the user to enter the next number
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Update the smallest and largest numbers if necessary
        if (num < smallest) {
            smallest = num;
        }
        if (num > largest) {
            largest = num;
        }
    }

    // Print the smallest and largest numbers
    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}