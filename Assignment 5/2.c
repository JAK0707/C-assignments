//To insert an element at a given location of an array

#include<stdio.h>
int main(){
    int location,element, arr[5]={24,1,2,78,100};
    printf("Original Array\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter location of insertion: ");
    scanf("%d",&location);
    printf("Enter element that you want to enter: ");
    scanf("%d",&element);
    for(int i=4;i>=location;i--){
        arr[i+1]=arr[i];
    }
    arr[location]=element;
    printf("New Array\n");
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}