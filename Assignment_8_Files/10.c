#include<stdio.h>

int main(){
    int total_students = 0;
    int marks[500];
    int roll_number[500];
    int max_marks=0;
    int topper_rollno=0;    
    FILE *fptr;
    fptr = fopen("marks500.txt","r");
    if (fptr==NULL){
        printf("Error in opening file");
        return 0;
    }
    while(fscanf(fptr,"%d %d",&roll_number[total_students],&marks[total_students])==2){
        if (marks[total_students]>max_marks){
            max_marks=marks[total_students];
            topper_rollno=roll_number[total_students];
        }
        total_students++;
        if(total_students==500){
            break;
        }
    }
    fclose(fptr);

    //Print roll no of topper
    printf("Topper Roll No. -> %d",topper_rollno);

    //Print roll no of students who have failed
    printf("\nRoll no. of students who have failed: \n");
    for(int i=0;i<total_students;i++){
        if(marks[i]<33){
            printf("%d\n",roll_number[i]);
        }
    }

    return 0;
}