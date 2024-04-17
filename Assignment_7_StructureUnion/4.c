#include<stdio.h>
#include<string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date birthDate;
};

// Real world application: Storing personal information where each person has a birth date.
