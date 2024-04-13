#include<stdio.h>

//Reverse an array

int main() {
    int n, oldvalue, newvalue;

    // Prompt the user to enter the number of elements in the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Prompt the user to enter each element of the array
    for(int i = 0; i < n; i++) {
        printf("Enter %d element of array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original Array: ");
    for(int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    // Reverse the array
    for(int i = 0; i < (n / 2); i++) {
        oldvalue = arr[i];
        newvalue = arr[n - i - 1];
        arr[i] = newvalue;
        arr[n - i - 1] = oldvalue;
    }

    // Print the reversed array
    printf("\nReversed Array: ");
    for(int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
