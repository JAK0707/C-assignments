#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[3];

    // Input
    printf("Enter 3 names, roll numbers, and marks:\n");
    for (int i = 0; i < 3; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].rollNumber, &students[i].marks);
    }

    // Output
    printf("\nNames\tRoll Number\tMarks\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\t%d\t\t%.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    return 0;
}