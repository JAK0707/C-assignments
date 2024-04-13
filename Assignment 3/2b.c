#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    printf("Enter Third Number: ");
    scanf("%d",&num3);
    (num1>num2 && num1<num3)? printf("%d is the greatest of the three numbers",num1): (num2>num3 && num2>num1)? printf("%d is the greatest of the three numbers",num2): printf("%d is the greatest of the three numbers",num3); 
    return 0;
}