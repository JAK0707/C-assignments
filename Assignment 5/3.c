#include<stdio.h>

//Delete a given element in an array

int main() {
    int location, element, arr[5] = {24, 1, 2, 78, 100};
    
    // Print the original array
    printf("Original Array\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    // Prompt the user to enter the location of deletion
    printf("\nEnter location of deletion: ");
    scanf("%d", &location);
    
    // Check if the entered location is valid
    if (location < 0 || location >= 5) {
        printf("Invalid location\n");
        return 1; // Exit with error
    }
    
    // Shift elements to the left starting from the specified location
    for(int i = location; i < 4; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left by overwriting the current element
    }
    
    // Print the new array
    printf("New Array\n");
    for(int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}