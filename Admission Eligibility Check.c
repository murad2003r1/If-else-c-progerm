#include <stdio.h>

int main() {
    int age;
    float marks;


    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your marks (out of 100): ");
    scanf("%f", &marks);


    if (age >= 18 && age <= 25 && marks >= 50)
    {
        printf("You are eligible for admission.\n");
    }
    else
    {
        printf("You are not eligible for admission.\n");
    }

    return 0;
}

