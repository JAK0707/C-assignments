/*Keep reading in integers until one integer larger than 100 is not input. For example: 4 -90, 35, 78, 110 QUIT! (since 110 is bigger than 100)*/

#include<stdio.h>

int main(){
    int num;
    while(1){
        printf("Enter a number less than 100: ");
        scanf("%d",&num);
        if(num>100){
            printf("%d QUIT! You entered a number greater than 100",num);
            break;
        } 
        printf("You entered %d\n",num);
    }
    return 0;
}