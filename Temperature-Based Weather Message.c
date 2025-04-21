#include <stdio.h>

int main() {
    float temperature;


    printf("Enter the temperature : ");
    scanf("%f", &temperature);


    if (temperature < 10) {
        printf("The weather is Cold \n");
    }
    else if (temperature >= 10 && temperature <= 25)
    {
        printf("The weather is Mild \n");
    }
    else if (temperature >= 26 && temperature <= 35)
    {
        printf("The weather is Hot \n");
    }
    else
    {
        printf("The weather is Very Hot \n");
    }

    return 0;
}

