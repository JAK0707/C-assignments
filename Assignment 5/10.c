#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5};
    int loc,num;
    printf("Enter the location you want to insert element at: ");
    scanf("%d",&loc);
    printf("Enter the element that you want to enter: ");
    scanf("%d",&num);
    for(int i=4;i>=loc;i--){
        arr[i+1]=arr[i];
    }
    arr[loc]=num;
    printf("New Array: ");
    for(int i=0;i<7;i++){
        printf("%d",arr[i]);
    }
    return 0;
}