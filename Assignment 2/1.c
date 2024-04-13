#include<stdio.h>
#include<math.h>

int main(){
    float num1,num2;
    char operation;
    printf("Operations\nsin value(s)\ncos value(c)\nlog value(l)\nsquare root value(r)\npower(p)\nEnter the Operation: ");
    scanf("%c",&operation);
    switch (operation){
        case's':
            printf("Enter a Number: ");
            scanf("%f",&num1);
            float sinvalue = sin(num1);
            printf("sin(%f) is = %f",num1,sinvalue);
            break;
        case'c':
            printf("Enter a Number: ");
            scanf("%f",&num1);
            float cosvalue = cos(num1);
            printf("cos(%f) is = %f",num1,cosvalue);
            break;
        case'l':
            printf("Enter a Number: ");
            scanf("%f",&num1);
            float logvalue = log(num1);
            printf("log(%f) is = %f",num1,logvalue);
            break;
        case'r':
            printf("Enter a Number: ");
            scanf("%f",&num1);
            float sqrtvalue = sqrt(num1);
            printf("sqrt(%f) is = %f",num1,sqrtvalue);
            break;
        case'p':
            printf("Enter Base Number: ");
            scanf("%f",&num1);
            printf("Enter Power Number: ");
            scanf("%f",&num2);
            float powvalue = pow(num1,num2);
            printf("%.0f^%.0f = %.0f",num1,num2,powvalue);
            break;
        default:
            printf("Invalid Operation");
    }
    return 0;
}