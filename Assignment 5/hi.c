#include<stdio.h>
int main(){
    int n,m;
    printf("Enter no. of elements in first array: ");
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter no. of elemets in second array: ");
    scanf("%d",&m);
    int arr2[m];
    for(int i=0;i<m;i++){
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&arr2[i]);
    }
    printf("First Array: ");
    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
    printf("\nSecond Array: ");
    for(int i=0;i<m;i++){
        printf("%d",arr2[i]);
    }
    for(int i=0;i<m;i++){
        arr1[n+i]=arr2[m];
    }
    printf("\nMerged Array: ");
    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
    return 0;
}