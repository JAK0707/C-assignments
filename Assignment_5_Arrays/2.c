#include<stdio.h>

//To insert an element at a given location of an array

int main() {
    int location, element, arr[6] = {24, 1, 2, 78, 100}; // Initialized array size to 6 to accommodate the inserted element
    printf("Original Array\n");
    // Print the original array
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter location of insertion: ");
    scanf("%d", &location); // Input the location of insertion
    printf("Enter element that you want to enter: ");
    scanf("%d", &element); // Input the element to be inserted
    for(int i = 4; i >= location; i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right from the specified location
    }
    arr[location] = element; // Insert the element at the specified location
    printf("New Array\n");
    // Print the new array
    for(int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
