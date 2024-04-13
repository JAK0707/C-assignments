/*WAP using loop (for, while, do-while):
*Factorial of number
Whether no. is prime or not
X raised to power n
Armstrong numbers between 1 to 500
Range of set of entered nos. by finding smallest and largest
Multiplication table 
HCF of two numbers
GCD of two numbers
*Generate Fibonacci series
*/

#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	int i = num, factorial = 1;
	while(i>=1){
		factorial = factorial*i;
        i--;
	}
	printf("Factorial of %d is %d",num,factorial);
	return 0;
}
