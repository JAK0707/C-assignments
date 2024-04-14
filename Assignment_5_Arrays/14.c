#include <stdio.h>

//Find mean, median, mode of an array

int main() {
    // Declare variables
    int arr[100], n, i, j, count, max_count, mode_val;
    double mean, median;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        printf("Enter %d element of array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate mean
    mean = 0;
    for (i = 0; i < n; i++) {
        mean += arr[i];
    }
    mean /= n;

    // Sort the array for calculating median and mode
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Calculate median
    if (n % 2 == 0) {
        median = (arr[n / 2] + arr[n / 2 - 1]) / 2.0;
    } else {
        median = arr[(n - 1) / 2];
    }

    // Calculate mode
    count = 0;
    max_count = 0;
    mode_val = arr[0];
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            mode_val = arr[i];
        }
    }

    // Print the results
    printf("Mean = %.2f\n", mean);
    printf("Median = %.2f\n", median);
    printf("Mode = %d\n", mode_val);

    return 0;
}