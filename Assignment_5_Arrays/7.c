#include<stdio.h>

//Merge two arrays

int main() {
    int n, m;
    
    // Input the number of elements in the first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n);
    
    int arr1[n];
    
    // Input elements of the first array
    for(int i = 0; i < n; i++) {
        printf("Enter %d element of first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    
    // Input the number of elements in the second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &m);
    
    int arr2[m];
    
    // Input elements of the second array
    for(int i = 0; i < m; i++) {
        printf("Enter %d element second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }
    
    // Print the elements of the first array
    printf("Array 1: ");
    for(int j = 0; j < n; j++) {
        printf("%d ", arr1[j]);
    }
    
    // Print the elements of the second array
    printf("\nArray 2: ");
    for(int j = 0; j < m; j++) {
        printf("%d ", arr2[j]);
    }
    
    // Merge the second array into the first array
    for(int i = 0; i < m; i++) {
        arr1[n + i] = arr2[i];
    }
    
    // Print the merged array
    printf("\nMerged Array\n");
    for(int i = 0; i < m + n; i++) {
        printf("%d ", arr1[i]);
    }
    
    return 0;
}