#include <stdio.h>

int main() {
    int customerID;
    char name[50];
    int units;
    float chargePerUnit, totalAmount;


    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Units Consumed: ");
    scanf("%d", &units);


    if (units < 200)
    chargePerUnit = 1.20;
    else if (units < 400)
    chargePerUnit = 1.50;
    else if (units < 600)
    chargePerUnit = 1.80;
    else
    chargePerUnit = 2.00;


    totalAmount = units * chargePerUnit;


    printf("\nElectricity Bill\n");
    printf("----------------------\n");
    printf("Customer ID    : %d\n", customerID);
    printf("Customer Name  : %s\n", name);
    printf("Units Consumed : %d\n", units);
    printf("Charge/Unit    : %.2f\n", chargePerUnit);
    printf("Total Amount   : %.2f\n", totalAmount);

    return 0;
}

