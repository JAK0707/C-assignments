#include <stdio.h>
#include <math.h>

// Program to practice math functions such as sin(), cos(), log(), pow(), sqrt() etc.
int main() {
    double angle = 45.0;
    // Printing sine of the angle
    printf("sin(%lf) = %lf\n", angle, sin(angle));
    // Printing cosine of the angle
    printf("cos(%lf) = %lf\n", angle, cos(angle));
    // Printing natural logarithm of the angle
    printf("log(%lf) = %lf\n", angle, log(angle));
    // Printing the power of 2 raised to 3
    printf("pow(2, 3) = %lf\n", pow(2, 3));
    // Printing square root of 25
    printf("sqrt(25) = %lf\n", sqrt(25));
    return 0;
}
