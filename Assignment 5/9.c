//Union and intersection of elements of two arrays

#include<stdio.h>
int main(){
    int num1,num2,max;
    printf("Enter no. of elements in first array: ");
    scanf("%d",&num1);
    printf("Enter no. of elements in second array: ");
    scanf("%d",&num2);
    if(num1>num2) max=num1;
    else max = num2;
    int inter[max],uni[max],arr1[num1],arr2[num2];
    for(int i=0;i<num1;i++){
        printf("Enter %d element of array1: ",i+1);
        scanf("%d",&arr1[i]);
    }
    for(int j=0;j<num2;j++){
        printf("Enter %d element of array2: ",j+1);
        scanf("%d",&arr2[j]);
    }
    printf("First array: ");
    for(int i=0;i<num1;i++){
        printf("%d ",arr1[i]);
    }
    printf("Second array: ");
    for(int j=0;j<num2;j++){
        printf("%d ",arr2[j]);
    }
    for(int i=0;i<num1;i++){
        for(int j=0;i<num2;j++){
            if(arr1[i]==arr2[j]){ //intersection
                for(int k=0;k<max;k++){
                    inter[k]=arr1[i];
                }
            }
        }
    }
    printf("Intersection of the two arrays: ");
    for(int i=0;i<max;i++){
        printf("%d ",inter[i]);
    }
    return 0;
}  


