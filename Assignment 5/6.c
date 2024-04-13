//Sum and average of array elements

#include<stdio.h>
int main(){
    int n,sum=0,avg;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    avg=sum/n;
    printf("Sum of elements of array = %d",sum);
    printf("\nAverage of elements of array = %d",avg);
    return 0;
}
