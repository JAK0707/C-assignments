#include <stdio.h>

int main() {
    char names[3][50];
    int rollNumbers[3];
    float marks[3];

    // Input
    printf("Enter 3 names, roll numbers, and marks:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i + 1);
        scanf("%s %d %f", names[i], &rollNumbers[i], &marks[i]);
    }

    // Output
    printf("\nNames\tRoll Number\tMarks\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\t%d\t\t%.2f\n", names[i], rollNumbers[i], marks[i]);
    }

    return 0;
}