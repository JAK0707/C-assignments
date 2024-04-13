//HCF of two numbers using a separate function

#include<stdio.h>
int min(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
int hcf(int a,int b){
	int hcf_result;
    for(int i=1;i<=min(a,b);i++){
		if(a%i==0 && b%i==0){
			hcf_result = i;
		}
	}
	return hcf_result;
}
int main(){	
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("HCF of %d and %d is %d",a,b,hcf(a,b));
	return 0;
}