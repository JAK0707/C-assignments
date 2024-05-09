#include<stdio.h>
#include<math.h> // Required for sqrt() function

int main(){
    int total_students = 0;
    int marks[500];
    int roll_number[500];
    int max_marks = 0;
    int topper_rollno = 0;
    double sum_marks = 0;
    double sum_squared_difference = 0;
    double average_marks = 0;
    double standard_deviation = 0;

    FILE *fptr;
    fptr = fopen("marks500.txt", "r");
    if (fptr == NULL){
        printf("Error in opening file");
        return 0;
    }

    while (fscanf(fptr, "%d %d", &roll_number[total_students], &marks[total_students]) == 2) {
        if (marks[total_students] > max_marks) {
            max_marks = marks[total_students];
            topper_rollno = roll_number[total_students];
        }
        sum_marks += marks[total_students];
        total_students++;
        if (total_students == 500) {
            break;
        }
    }
    fclose(fptr);

    // Calculate average
    average_marks = sum_marks / total_students;

    // Calculate sum of squares of differences
    for (int i = 0; i < total_students; i++) {
        sum_squared_difference += pow(marks[i] - average_marks, 2);
    }

    // Calculate standard deviation
    standard_deviation = sqrt(sum_squared_difference / total_students);

    // Print average and standard deviation
    printf("Average marks: %.2f\n", average_marks);
    printf("Standard deviation: %.2f\n", standard_deviation);

    return 0;
}
