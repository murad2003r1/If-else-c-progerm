#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;


    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);


    if (sellingPrice > costPrice)
    {
        amount = sellingPrice - costPrice;
        printf("Profit = %f\n", amount);
    }
    else if (costPrice > sellingPrice)
    {
        amount = costPrice - sellingPrice;
        printf("Loss = %f\n", amount);
    }
    else
    {
        printf("No Profit No Loss.\n");
    }

    return 0;
}

