#include<stdio.h>

//Use functions, loops and arrays to convert a decimal number into (a) binary (b) octal (c) hexadecimal.

// Function to convert decimal to binary
void decimalToBinary(int decimalNum) {
    int binaryNum[32];
    int i = 0;

    // Convert decimal to binary by repeated division by 2
    while (decimalNum > 0) {
        binaryNum[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }

    // Print binary number in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decimalToOctal(int decimalNum) {
    int octalNum[100];
    int i = 0;

    // Convert decimal to octal by repeated division by 8
    while (decimalNum > 0) {
        octalNum[i] = decimalNum % 8;
        decimalNum = decimalNum / 8;
        i++;
    }

    // Print octal number in reverse order
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octalNum[j]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimalNum) {
    char hexaDeciNum[100];
    int i = 0;

    // Convert decimal to hexadecimal by repeated division by 16
    while (decimalNum > 0) {
        int temp = 0;
        temp = decimalNum % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        decimalNum = decimalNum / 16;
    }

    // Print hexadecimal number in reverse order
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexaDeciNum[j]);
    }
    printf("\n");
}

int main() {
    int decimalNum;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // Convert decimal to binary
    decimalToBinary(decimalNum);

    // Convert decimal to octal
    decimalToOctal(decimalNum);

    // Convert decimal to hexadecimal
    decimalToHexadecimal(decimalNum);

    return 0;
}