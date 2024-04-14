#include<stdio.h>

//Rotate array elements (123,231,312) or (abcd, bcda, cdab, dabc) 

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    char arr[n][n];

    // Input array elements
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        printf("Enter %d element of array: ", i + 1);
        scanf("%s", arr[i]);
    }

    // Rotating the array elements
    printf("\nRotated array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i; j < i + n && j < n; j++) {
            printf("%c", arr[j][(i + n - 1) % n]);
        }
        printf("\n");
    }

    return 0;
}