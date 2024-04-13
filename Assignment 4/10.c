//Add digits of an integer using a function

#include<stdio.h>

int sum(int n){
    int r,sum=0;
    while(n>0){
        r=n%10;
        sum = sum+r;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum_of_digits = sum(n);
    printf("Sum of digits = %d",sum_of_digits);
}