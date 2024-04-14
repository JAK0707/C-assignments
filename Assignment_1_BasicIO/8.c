#include<stdio.h>

//WAP for the area of a circle

int main() {
    // Declare a variable to store the value of pi
    float pi = 3.14;
    // Declare a variable to store the radius of the circle
    float radius;

    // Prompt the user to enter the radius of the circle
    printf("Enter the Radius: ");
    // Read the radius from the user input
    scanf("%f", &radius);

    // Calculate the area of the circle using the formula: area = pi * radius * radius
    float area = pi * radius * radius;

    // Display the calculated area of the circle
    printf("The Area of Circle = %f", area);

    return 0;
}
