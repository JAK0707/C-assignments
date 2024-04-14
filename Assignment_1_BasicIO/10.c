#include <stdio.h>

// Program to calculate compound interest.
int main() {
    float principal, rate, time, compound_interest;
    // Input principal amount, rate of interest, and time period
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    // Calculate compound interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;
    // Display compound interest
    printf("Compound Interest: %.2f\n", compound_interest);
    return 0;
}
