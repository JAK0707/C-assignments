#include<stdio.h>

int main(){
    int max_marks=0;
    int min_marks=101;
    int total_students=0;
    int rollno[500];
    int marks[500];
    int max_marks_rn=0;
    int min_marks_rn=0;
    FILE *fptr;
    fptr=fopen("marks500.txt","r");
    if(fptr==NULL){
        printf("Error in reading file");
        return 0;
    }
    while(fscanf(fptr,"%d %d",&rollno[total_students],&marks[total_students])){
        if(marks[total_students]>max_marks){
            max_marks=marks[total_students];
            max_marks_rn=rollno[total_students];
        }
        if(marks[total_students]<min_marks){
            min_marks=marks[total_students];
            min_marks_rn=rollno[total_students];
        }
        total_students++;
        if(total_students==500){
            break;
        }
    }
    fclose(fptr);

    printf("Max marks = %d",max_marks);
    printf("\nMax marks roll no = %d\n",max_marks_rn);
    printf("\nMin marks = %d",min_marks);
    printf("\nMin marks roll no = %d",min_marks_rn);

    return 0;
}