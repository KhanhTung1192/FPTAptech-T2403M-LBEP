#include <stdio.h>
int main()
{
    int year;
    //input
    printf("Input year you want to know:");
    scanf("%d",&year);
    //Calculator
    if (year%100!=0 && year%4==0 || year%400==0)
        printf("\nYour year \"%d\" is leap year",year);
    else
        printf("\nYour year \"%d\" is NOT leap year",year);
    return 0;
}