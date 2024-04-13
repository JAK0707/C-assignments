#include<stdio.h>

//Sort the array elements in ascending order

int main() {
    int n;
    
    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n], temp;
    
    // Input array elements
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        printf("Enter %d element of array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Sorting the array using bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // Displaying the sorted array
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}