#include <stdio.h>

union Data {
    int integer;
    float decimal;
    char string[4];
};

int main() {
    union Data data;
    data.integer = 10;
    printf("Integer: %d\n", data.integer);

    data.decimal = 3.14;
    printf("Float: %.2f\n", data.decimal);

    // Accessing char array
    data.string[0] = 'A';
    data.string[1] = 'B';
    data.string[2] = 'C';
    data.string[3] = '\0';
    printf("String: %s\n", data.string);

    return 0;
}