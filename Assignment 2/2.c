//Program for writing roots of a equation
#include<stdio.h>
#include<math.h>

int main(){
    int A,B,C,D;
    float root1,root2;
    printf("Quadratic Equation = Ax^2 + Bx + C = 0\n");
    printf("Enter A: ");
    scanf("%d",&A);
    printf("Enter B: ");
    scanf("%d",&B);
    printf("Enter C: ");
    scanf("%d",&C);
    D = B*B - 4*A*C;
    if(D>=0){
        root1 = -B + sqrt(D)/(2*A);
        root2 = -B - sqrt(D)/(2*A);
        printf("First Root = %.2f\n",root1);
        printf("Second Root = %.2f",root2);
    }
    else{
        printf("No real roots exist, Discriminant is negative");
    }
    return 0;
}