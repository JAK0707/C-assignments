//Find largest and smallest in array

#include<stdio.h>
int main(){
    int n,max,min;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]>max) max = arr[i];
    }
    min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min) min = arr[i];
    }
    printf("Largest number in the array is %d",max);
    printf("\nSmallest number in the array is %d",min);
    return 0;
}