#include <stdio.h>

// Program to implement assignment operators such as += , -= , *=, /= %= etc.
int main() {
    int num = 5;
    num += 2; // num = num + 2
    printf("+= operator: %d\n", num);
    num -= 2; // num = num - 2
    printf("-= operator: %d\n", num);
    num *= 2; // num = num * 2
    printf("*= operator: %d\n", num);
    num /= 2; // num = num / 2
    printf("/= operator: %d\n", num);
    num %= 3; // num = num % 3
    printf("%%= operator: %d\n", num);
    return 0;
}
