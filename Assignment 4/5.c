//If a number is prime or not

#include<stdio.h>

void prime(int n){
    if(n==0 || n==1){
        printf("%d is not a prime number",n);
        return;}    
    int count = 0;
    for(int i=2;i<=n;i++){
        if(n%i==0) count = count + 1;
    }
    if(count>1) printf("%d is not a prime number",n);
    else printf("%d is a prime number",n);
    return;
}

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}