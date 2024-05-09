#include<stdio.h>

int main(){
    char word[100];
    int wordCount=0;
    FILE *fptr;
    fptr = fopen("marks500.txt","r");
    if(fptr==NULL){
        printf("Error in opening file");
        return 0;
    }
    while(fscanf(fptr,"%s",word)!=EOF){
        wordCount++;
    }
    fclose(fptr);
    
    printf("No. of words in the file = %d",wordCount);

    return 0;
}