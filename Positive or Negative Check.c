#include <stdio.h>

int main() {
    int number;

    printf("Enter The number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("%d is positive.\n", number);
    }
    else if (number < 0)
    {
        printf("%d is negative.\n", number);
    }
    else
    {
        printf("The number is 0.\n");
    }

    return 0;
}

