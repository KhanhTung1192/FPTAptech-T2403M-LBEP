#include <stdio.h>
#include <conio.h>
int main()
{
    char drink[150];
    int member, quantity;
    float total, cost;

    printf("Input drink: ");
    scanf("%[^\n]c",&drink);
    printf("Input cost: ");
    scanf("%f",&cost);
    printf("Input quantity: ");
    scanf("%d",&quantity);
    do
    {
        printf("Input membership: ");
        scanf("%d",&member);
        if(member<0||member>2)
            printf("Wrong number, again plz\n");
    } while(member<0||member>2);
    switch (member)
    {
    case 0:
        printf("Discount 0%%");
        break;

    case 1:
        printf("Discount 5%%");
        cost=cost*95/100;
        break;

    case 2:
        printf("Discount 10%%");
        cost=cost*90/100;
        break;

    }
    printf("\nYour bill\nType: %s \nCost: %d \nTotal %.2f",drink,quantity,total=cost*quantity);
    return 0;
}