#include <stdio.h>
void displayMenu();
void placeOrder(char option);
float calculateTotalCost(char option, int quantity);
int main()
{
    char option;
    int quantity;
    do
    {
        displayMenu();
        printf("Enter option:");
        scanf(" %c",&option);
        if (option !='d')
        {
            printf("Enter Quantity");
            scanf("%d",&quantity);
            placeOrder(option);
            float totalCost=calculateTotalCost(option, quantity);
            printf("total cost: $%.2f\n", totalCost);
                    }
        } while (option !='d');
    return 0;
}
void displayMenu()
{
    printf("********Coffee Shop Menu*********\n");
    printf("a. Espresso - 2.5$\n");
    printf("b. Cappuccion - 2.3$\n");
    printf("c. Latte - 3.2$\n");
    printf("d. Quit\n");
}
void placeOrder (char option)
{
    switch(option)
    {
    case'a':
        printf("Place order: Espresso\n");
        break;
    case'b':
        printf("Place order: Cappuccion\n");
        break;
    case'c':
        printf("Place order: Latte\n");
        break;
    default:
        printf("Invalid, try again\n");
    }
}
float calculateTotalCost(char option, int quantity)
{
    float price;
    switch (option)
    {
    case'a':
        price = 2.5;
        break;
    case'b':
        price = 2.3;
        break;
    case'c':
        price = 3.2;
        break;
    default:
        price = 0.00;
    }
    return price*quantity;
}