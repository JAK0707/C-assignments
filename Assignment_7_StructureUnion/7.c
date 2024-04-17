#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
};

void swapStudents(struct Student *s1, struct Student *s2) {
    struct Student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main() {
    struct Student s1 = {"John", 101};
    struct Student s2 = {"Alice", 102};

    // Before swapping
    printf("Before swapping:\n");
    printf("Student 1: Name - %s, Roll Number - %d\n", s1.name, s1.rollNumber);
    printf("Student 2: Name - %s, Roll Number - %d\n", s2.name, s2.rollNumber);

    // Swapping
    swapStudents(&s1, &s2);

    // After swapping
    printf("\nAfter swapping:\n");
    printf("Student 1: Name - %s, Roll Number - %d\n", s1.name, s1.rollNumber);
    printf("Student 2: Name - %s, Roll Number - %d\n", s2.name, s2.rollNumber);

    return 0;
}