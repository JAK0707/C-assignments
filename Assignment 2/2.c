#include<stdio.h>
#include<math.h>

// Program for finding roots of a quadratic equation

int main() {
    int A, B, C, D; // Declare variables for coefficients and discriminant
    float root1, root2; // Declare variables for roots
    
    // Prompt the user to enter coefficients of the quadratic equation
    printf("Quadratic Equation = Ax^2 + Bx + C = 0\n");
    printf("Enter A: ");
    scanf("%d", &A);
    printf("Enter B: ");
    scanf("%d", &B);
    printf("Enter C: ");
    scanf("%d", &C);
    
    // Calculate the discriminant
    D = B * B - 4 * A * C;
    
    // Check if discriminant is non-negative (real roots exist)
    if (D >= 0) {
        // Calculate the roots
        root1 = (-B + sqrt(D)) / (2 * A);
        root2 = (-B - sqrt(D)) / (2 * A);
        
        // Print the roots
        printf("First Root = %.2f\n", root1);
        printf("Second Root = %.2f", root2);
    } else {
        // If discriminant is negative, no real roots exist
        printf("No real roots exist, Discriminant is negative");
    }
    
    return 0;
}
