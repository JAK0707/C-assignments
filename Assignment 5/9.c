#include <stdio.h>

//Union and intersection of elements of two arrays

int main() {
    int num1, num2, max, i, j, countInter = 0, countUni = 0;

    // Input the number of elements in the first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &num1);

    // Input the number of elements in the second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &num2);

    // Determine the maximum size required for the union array
    max = (num1 > num2) ? num1 : num2;

    // Declare arrays for intersection, union, and input arrays
    int inter[max], uni[max], arr1[num1], arr2[num2];

    // Input elements of the first array
    printf("Enter elements of first array: \n");
    for(i = 0; i < num1; i++) {
        printf("Enter %d element of first array: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input elements of the second array
    printf("Enter elements of second array: \n");
    for(i = 0; i < num2; i++) {
        printf("Enter %d element of second array: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Print the elements of the first array
    printf("First array: ");
    for(i = 0; i < num1; i++) {
        printf("%d ", arr1[i]);
    }

    // Print the elements of the second array
    printf("\nSecond array: ");
    for(i = 0; i < num2; i++) {
        printf("%d ", arr2[i]);
    }

    // Find intersection of the two arrays
    for(i = 0; i < num1; i++) {
        for(j = 0; j < num2; j++) {
            if(arr1[i] == arr2[j]) {
                inter[countInter++] = arr1[i]; // Add the common element to the intersection array
                break; // Exit the inner loop once a match is found
            }
        }
    }

    // Find union of the two arrays
    for(i = 0; i < num1; i++) {
        uni[countUni++] = arr1[i]; // Add all elements of the first array to the union array
    }
    for(i = 0; i < num2; i++) {
        int flag = 0;
        for(j = 0; j < num1; j++) {
            if(arr2[i] == arr1[j]) {
                flag = 1; // Set flag to 1 if the element is already present in the first array
                break;
            }
        }
        if(flag == 0) {
            uni[countUni++] = arr2[i]; // Add the element to the union array if it's not already present
        }
    }

    // Print the intersection of the two arrays
    printf("\nIntersection of the two arrays: ");
    for(i = 0; i < countInter; i++) {
        printf("%d ", inter[i]);
    }

    // Print the union of the two arrays
    printf("\nUnion of the two arrays: ");
    for(i = 0; i < countUni; i++) {
        printf("%d ", uni[i]);
    }

    return 0;
}