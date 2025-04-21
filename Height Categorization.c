#include <stdio.h>

int main() {
    int height;


    printf("Enter your height in cm: ");
    scanf("%d", &height);


    if (height < 150)
    {
        printf("You are Short \n");
    }
    else if (height >= 150 && height <= 170)
    {
        printf("You are Average height \n");
    }
    else if (height > 170 && height <= 190)
    {
        printf("You are Tall \n");
    }
    else
    {
        printf("You are Very Tall \n");
    }

    return 0;
}

