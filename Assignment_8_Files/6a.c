#include<stdio.h>

int main(){
    char ch;
    int charCount=0;
    FILE *fptr;
    fptr = fopen("marks500.txt","r");
    if(fptr==NULL){
        printf("Error in opening file");
        return 0;
    }
    while(fscanf(fptr,"%c",&ch)!=EOF){
        charCount++;
    }
    fclose(fptr);
    
    printf("No. of characters in file = %d",charCount);

    return 0;
}