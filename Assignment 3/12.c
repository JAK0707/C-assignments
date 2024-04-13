//Read in 20 integers and count the even numbers

#include<stdio.h>
int main(){
	int num;
	int count=0;
	for(int i=1;i<=20;i++){
		printf("Enter %d number: ",i);
		scanf("%d",&num);
		if(num%2==0) count+=1;
	}
	printf("Numbers of even numbers present in input = %d",count);		
	return 0;
}
