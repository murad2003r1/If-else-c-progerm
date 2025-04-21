#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);


    if (x > 0 && y > 0)
    {
        printf("Point is in Quadrant I\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Point is in Quadrant II\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Point is in Quadrant III\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("Point is in Quadrant IV\n");
    }
    else if (x == 0 && y == 0)
    {
        printf("Point is at the Origin\n");
    }
    else if (x == 0)
    {
        printf("Point lies on the Y-axis\n");
    }
    else if (y == 0)
    {
        printf("Point lies on the X-axis\n");
    }

    return 0;
}

