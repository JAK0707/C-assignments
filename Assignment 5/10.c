#include <stdio.h>

//Remove duplicates in an array

int main() {
    // Declare variables
    int n, i, j, count = 0;
    int arr[100];

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) {
        printf("Enter %d element of array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sort the array using bubble sort
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Remove duplicates by comparing adjacent elements
    for(i = 0; i < n - 1; i++) {
        if(arr[i] != arr[i + 1]) {
            arr[count++] = arr[i];
        }
    }

    // Add the last element to the array
    arr[count++] = arr[n - 1];

    // Print the array without duplicates
    printf("Array without duplicates: ");
    for(i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}