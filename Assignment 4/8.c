//LCM of two numbers using a function

//HCF of two numbers using a separate function

// #include<stdio.h>
// int min(int a,int b){
// 	if(a<b){
// 		return a;
// 	}
// 	else{
// 		return b;
// 	}
// }
// int max(int a,int b){
// 	if(a<b){
// 		return b;
// 	}
// 	else{
// 		return a;
// 	}
// }
// int lcm(int a,int b){
//     if(max(a,b)%min(a,b)==0){
//         for(int i=1;i<=max(a,b);i++){
//             if(a*i==b*i) return a*i;
//         }
//     }
    
// }
        
// int main(){	
// 	int a,b;
// 	printf("Enter first number : ");
// 	scanf("%d",&a);
// 	printf("Enter second number : ");
// 	scanf("%d",&b);
// 	printf("LCM of %d and %d is %d",a,b,lcm(a,b));
// 	return 0;
// }

//LCM of two numbers using a separate function

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
    if(a==0 || b==0) printf("Enter number greater than 0");
    else{
        int hcf_result = hcf(a,b);
        printf("LCM of %d and %d = %d",a,b,((a*b)/hcf_result));
    }
	return 0;
}