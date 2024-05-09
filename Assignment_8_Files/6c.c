#include <stdio.h>

int main() {
    FILE *fptr;
    int count = 0;
    char c;
    fptr = fopen("marks500.txt","r");
    if (fptr == NULL) {
        printf("File not found or cannot be opened.\n");
        return 1;
    }

    // Counting lines
    while((c = fgetc(fptr)) != EOF) {
        if (c == '\n') {
            count++;
        }
    }

    printf("Number of lines = %d",count);

    fclose(fptr);
    return 0;
}
