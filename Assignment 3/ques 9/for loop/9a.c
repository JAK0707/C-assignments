/*WAP using loop (for, while, do-while):
*Factorial of number
Whether no. is prime or not
X raised to power n
Armstrong numbers between 1 to 500
Range of set of entered nos. by finding smallest and largest
Multiplication table 
HCF of two numbers
GCD of two numbers
*Generate Fibonacci series*/

#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	int factorial = 1;
	for(int i=num;i>=1;i--){
		factorial = factorial*i;
	}
	printf("Factorial of %d is %d",num,factorial);
	return 0;
}
