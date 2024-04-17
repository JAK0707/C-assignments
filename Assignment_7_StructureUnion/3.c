struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Initializing structures
    struct Student s1 = {"John", 101, 85.5};
    struct Student s2;

    // Copying one structure into another
    s2 = s1;

    // Copying just a few variables of one structure into another
    struct Student s3;
    s3.rollNumber = s1.rollNumber;
    // Similarly, copy other variables as needed

    return 0;
}