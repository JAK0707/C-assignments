#include<stdio.h>

//Find largest and smallest in array

int main() {
    int n, max, min;
    
    // Prompt the user to enter the number of elements in the array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    for(int i = 0; i < n; i++) {
        printf("Enter %d element of array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Initialize max and min to the first element of the array
    max = arr[0];
    min = arr[0];
    
    // Find the largest and smallest numbers in the array
    for(int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Print the largest and smallest numbers
    printf("Largest number in the array is %d\n", max);
    printf("Smallest number in the array is %d", min);
    
    return 0;
}