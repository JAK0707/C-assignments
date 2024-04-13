#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num<0) printf("Negative Number");
    else printf("Positive Number");
    return 0;
} 