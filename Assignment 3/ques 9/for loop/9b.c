//Whether no. is prime or not

#include<stdio.h>

int main(){
	int num;
	int count=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num<=0){
		printf("Enter a number greater than 0");
		return 0;
	}
	if(num==1){
		printf("1 is neither prime nor a composite number");
		return 0;
	}
	for(int i=2;i<=num;i++){
		if(num%i!=0){
			count = count + 1;
		}
	}
	if(count>0) printf("%d is not a prime number\n%d is a composite number",num,num);
	else printf("%d is a prime number",num);
	return 0;
}
//wrong