#include <stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int rollNumber;
};

void displayStudent(struct Student s) {
    printf("Name: %s, Roll Number: %d\n", s.name, s.rollNumber);
}

struct Student createStudent(char name[], int rollNumber) {
    struct Student s;
    strcpy(s.name, name);
    s.rollNumber = rollNumber;
    return s;
}

int main() {
    struct Student s1 = createStudent("John", 101);
    displayStudent(s1);
    return 0;
}