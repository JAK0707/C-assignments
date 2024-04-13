//Reverse an array
#include<stdio.h>

int main(){
    int n,oldvalue,newvalue;
    printf("Enter no. of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Original Array: ");
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    for(int i=0;i<(n/2);i++){
        oldvalue=arr[i];
        newvalue=arr[n-i-1];
        arr[i]=newvalue;
        arr[n-i-1]=oldvalue;
    }
    printf("\nReversed Array: ");
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}