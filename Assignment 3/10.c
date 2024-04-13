/*Write a program to read in numbers until the number -999 is encountered.The sum of all numbers read until this point should be printed out*/

#include<stdio.h>

int main(){
    int num;
    int sum=0;
    while(1){
        printf("Enter a number: ");
        scanf("%d",&num);
        if (num==-999){
            break;
        }
        sum +=num;
        }
    printf("Sum = %d",sum);
    return 0;
}