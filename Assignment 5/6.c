#include<stdio.h>

//Sum and average of array elements

int main() {
    int n, sum = 0, avg;
    
    // Prompt the user to enter the number of elements in the array
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    for(int i = 0; i < n; i++) {
        printf("Enter %d element of array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Calculate the sum of elements in the array
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    
    // Calculate the average of elements in the array
    avg = sum / n;
    
    // Print the sum and average of elements in the array
    printf("Sum of elements of array = %d\n", sum);
    printf("Average of elements of array = %d", avg);
    
    return 0;
}