#include<stdio.h>
int main(){
    float num1,num2;
    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);
    float add=num1+num2;
    float sub=num1-num2;
    float mul=num1*num2;
    float div=num1/num2;
    char operation;
    printf("Enter the operation: ");//'+' = Addition,'-' = Substaction, '*' = Multiplication ,'/' = Division
    scanf(" %c",&operation);
    switch (operation){
        case '+': printf("Addition = %.2f",add);
            break;
        case '-': printf("Substaction = %.2f",sub);
            break;
        case '*': printf("Multiplication = %.2f",mul);
            break;
        case '/': printf("Division = %.2f",div);
            break;
        default : printf("Enter a valid operation");
    }    
    return 0;
}