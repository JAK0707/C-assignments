#include <stdio.h>
#include <string.h>

// Function to copy one string to another without using string handling functions
void copyStringWithoutFunctions(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0'; // Add null terminator to the end of the destination string
}

// Main function
int main() {
    char src[] = "Hello, world!";
    char dest1[20]; // Destination string for copy without functions
    char dest2[20]; // Destination string for copy with strcpy

    // Copying with string handling function strcpy()
    strcpy(dest2, src);
    printf("Copied string using strcpy(): %s\n", dest2);

    // Copying without string handling function
    copyStringWithoutFunctions(dest1, src);
    printf("Copied string without using functions: %s\n", dest1);

    return 0;
}