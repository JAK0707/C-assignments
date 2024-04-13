//Merge two arrays

#include<stdio.h>
int main(){
    int n,m;
    printf("Enter no. of elements in first array: ");
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        printf("Enter %d element of first array: ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter no. of elements in second array: ");
    scanf("%d",&m);
    int arr2[m];
    for(int i=0;i<m;i++){
        printf("Enter %d element second array: ",i+1);
        scanf("%d",&arr2[i]);
    }
    printf("Array 1: ");
    for(int j=0;j<n;j++){
        printf("%d ",arr1[j]);
    }
    printf("\nArray 2: ");
    for(int j=0;j<m;j++){
        printf("%d ",arr2[j]);
    }
    for(int i=0;i<m;i++){
        arr1[n+i]=arr2[i];
    }
    printf("\nMerged Array\n");
    for(int i=0;i<m+n;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}