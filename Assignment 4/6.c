//Display first n prime numbers

#include<stdio.h>

void prime(int n){
    if(n==0 || n==1){
        printf("%d is not a prime number",n);
        return;
    }
    //int count = 0;
    for(int i=2;i<=n;i++){//jo number bada raha hai
        int count = 0;
        for(int j=2;j<=i;j++){ //jo prime check kare
            if(i%j==0) count = count + 1;
            //if(count == 1) printf("%d\n",i);
        }
        if(count == 1) printf("%d\n",i);
    }    
    return;
} 

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}