#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks (1-100): ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("Grade: A+\n");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("Grade: A-\n");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 33 && marks <= 49)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 1 && marks <= 32)
    {
        printf("Grade: F\n");
    }
    else
    {
        printf("Invalid marks. Please enter a value between 1 and 100.\n");
    }

    return 0;
}

