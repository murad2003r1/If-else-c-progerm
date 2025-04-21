#include <stdio.h>

int main() {
    float marks_obtained, total_marks, percentage;


    printf("Enter total marks: ");
    scanf("%f", &total_marks);
    printf("Enter marks obtained by the student: ");
    scanf("%f", &marks_obtained);


    percentage = (marks_obtained / total_marks) * 100;


    printf("Percentage: %.2f%% \n", percentage);

    if (percentage >= 60) {
        printf("Division: First Division \n");
    }
    else if (percentage >= 50)
    {
        printf("Division: Second Division \n");
    }
    else if (percentage >= 40)
    {
        printf("Division: Third Division \n");
    }
    else
    {
        printf("Division: Fail \n");
    }

    return 0;
}

