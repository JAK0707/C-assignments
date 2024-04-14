#include <stdio.h>

// Function to demonstrate storage classes
void storageClassesDemo() {
    // Automatic storage class (auto)
    auto int autoVar = 10;
    printf("autoVar = %d\n", autoVar);

    // Static storage class (static)
    static int staticVar = 20;
    printf("staticVar = %d\n", staticVar);

    // Register storage class (register)
    register int registerVar = 30;
    printf("registerVar = %d\n", registerVar);

    // Extern storage class (extern)
    extern int externVar;
    printf("externVar = %d\n", externVar);
}

// External variable declaration
int externVar = 40;

int main() {
    storageClassesDemo();

    return 0;
}