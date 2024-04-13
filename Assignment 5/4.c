#include <stdio.h>

//Linear search for element

int main() {
    int arr[] = {12, 45, 32, 67, 89, 42};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index = -1; // Initialize index to -1, indicating element not found

    // Prompt the user to enter the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Iterate through the array to find the key
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            index = i; // Update index if key is found
            break;     // Exit loop as soon as key is found
        }
    }

    // Check if the key is found
    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}