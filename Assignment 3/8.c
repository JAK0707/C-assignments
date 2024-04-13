#include <stdio.h>
#include <math.h>

//WAP to read in 5 numbers and compute the average, max, min, standard deviation.

int main() {
    // Initialize the necessary variables
    int i, n = 5;
    float num[n], sum = 0.0, average, variance = 0.0;
    float min = num[0], max = num[0];

    // Read in 5 numbers
    for(i = 0; i < n; ++i) {
        printf("Enter number %d: ", i+1);
        scanf("%f", &num[i]);

        // Keep track of the minimum and maximum numbers
        if(num[i] < min)
            min = num[i];

        if(num[i] > max)
            max = num[i];

        // Calculate the sum of the numbers
        sum += num[i];
    }

    // Calculate the average
    average = sum / n;

    // Calculate the variance (the square of the standard deviation)
    for(i = 0; i < n; ++i)
        variance += pow(num[i] - average, 2);

    variance = variance/n;

    // Calculate the standard deviation
    printf("Average = %.2f\n", average);
    printf("Min = %.2f\n", min);
    printf("Max = %.2f\n", max);
    printf("Standard Deviation = %.2f\n", sqrt(variance));

    return 0;
}