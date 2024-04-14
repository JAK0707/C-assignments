#include <stdio.h>

// Program to calculate gross salary.
int main() {
    float basic_salary, da, ta, gross_salary;
    // Input basic salary
    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);
    // Calculate Dearness Allowance (DA) and Travel Allowance (TA)
    da = 0.1 * basic_salary;
    ta = 0.12 * basic_salary;
    // Calculate gross salary
    gross_salary = basic_salary + da + ta;
    // Display gross salary
    printf("Gross Salary: %.2f\n", gross_salary);
    return 0;
}
