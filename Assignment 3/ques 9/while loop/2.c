//Whether no. is prime or not

#include<stdio.h>

int main(){
	int num,count = 0,i = 2;
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
	while(i<=num){
		if(num%i!=0){
			count = count + 1;
		}
        i++;
	}
	if(count>0) printf("%d is not a prime number\n%d is a composite number",num,num);
	else printf("%d is a prime number",num);
	return 0;
}