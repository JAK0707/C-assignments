#include <stdio.h>

// Program to shift left and shift right operators (>> and <<).
int main() {
    int num = 5;

    // Perform left shift operation
    printf("Left shift of %d by 1: %d\n", num, num << 1);

    // Perform right shift operation
    printf("Right shift of %d by 1: %d\n", num, num >> 1);

    return 0;
}
