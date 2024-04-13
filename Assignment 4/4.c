//Find factorial

#include<stdio.h>

int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("Facrial of %d = %d",n,fact);
    return 0;
}