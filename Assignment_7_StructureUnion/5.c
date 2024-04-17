#include<stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int rollNumber;
};

int main() {
    struct Student s1;
    strcpy(s1.name, "John");
    s1.rollNumber = 101;

    // Dot operator
    printf("Name: %s, Roll Number: %d\n", s1.name, s1.rollNumber);

    // Arrow operator (when dealing with pointers)
    struct Student *ptr = &s1;
    printf("Name: %s, Roll Number: %d\n", ptr->name, ptr->rollNumber);

    return 0;
}