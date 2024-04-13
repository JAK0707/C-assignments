#include <stdio.h>

//Binary search for an element

int main() {
    int arr[] = {12, 32, 45, 67, 89, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index = -1; // Initialize index to -1, indicating element not found
    int low = 0, high = size - 1; // Initialize low and high indices for binary search

    // Prompt the user to enter the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Binary search algorithm
    while (low <= high) {
        int mid = (low + high) / 2; // Calculate mid index

        // If the key is found at mid index, update index and break
        if (arr[mid] == key) {
            index = mid;
            break;
        }

        // If key is greater than the middle element, ignore left half
        else if (arr[mid] < key) {
            low = mid + 1;
        }

        // If key is smaller than the middle element, ignore right half
        else {
            high = mid - 1;
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