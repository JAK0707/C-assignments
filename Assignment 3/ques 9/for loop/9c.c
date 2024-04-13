//x raised to power n

#include<stdio.h>
#include<math.h>

int main(){
	int x,n,result;
	printf("Enter Base Value: ");
	scanf("%d",&x);
	printf("Enter Power: ");
	scanf("%d",&n);
	result = pow(x,n);
	printf("%d^%d = %d",x,n,result);
	return 0;
}
