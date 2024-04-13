//Multiplication table

#include<stdio.h>

int main(){
	int num,result=1;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(int i=1;i<=10;i++){
		result = num*i;
		printf("%d * %d = %d\n",num,i,result);
	}
	return 0;
}
