//HCF of two numbers

#include<stdio.h>

int main(){
	int num1,num2,min,hcf;
	printf("Enter First Number: ");
	scanf("%d",&num1);
	printf("Enter Second Number: ");
	scanf("%d",&num2);
	if(num1>=num2) min = num2;
	else min = num1;
	for(int i=1;i<=min;i++){
		if(num1%min==0 && num2%i==0){
			hcf = i;
		}
	}
	printf("HCF of %d and %d is %d",num1,num2,hcf);
	return 0;
}
