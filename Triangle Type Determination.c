#include <stdio.h>

int main() {
    int a, b, c;


    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a == b && b == c)
    {
        printf("This is an equilateral triangle.\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("This is an isosceles triangle.\n");
    }
    else
    {
        printf("This is a scalene triangle.\n");
    }

    return 0;
}

