//Delete a given element in an array

#include<stdio.h>
int main(){
    int location,element, arr[5]={24,1,2,78,100};
    printf("Original Array\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter location of deletion: ");
    scanf("%d",&location);
    if (location < 0 || location >= 5) {
        printf("Invalid location\n");
        return 1; // Exit with error
    }
    for(int i=4;i>location;i--){//dry run and check why this is wrong
        arr[i-1]=arr[i];
    }
    printf("New Array\n");
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}