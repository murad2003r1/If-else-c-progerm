#include <stdio.h>

int main() {
    int number;


    printf("Enter The number: ");
    scanf("%d", &number);


    if (number > 0)
    {
        printf("Signum = 1\n");
    }
    else if (number == 0)
    {
        printf("Signum = 0\n");
    }
    else
    {
        printf("Signum = -1\n");
    }

    return 0;
}

