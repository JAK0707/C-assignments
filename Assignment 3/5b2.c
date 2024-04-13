#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    (num<0)? printf("Negative Number"):printf("Positive Number");
    return 0;
} 