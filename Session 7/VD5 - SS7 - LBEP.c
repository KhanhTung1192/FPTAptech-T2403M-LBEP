#include <stdio.h>
int main()
{
    int num;
    //INPUT
    printf("Input number from 1 to 3:");
    scanf("%d",&num);
    //Condition
    if (num==1)
        printf("Your choice is: 1");
    else if (num==2)
        printf("your choice is: 2");
    else if (num==3)
        printf("your choice is: 3");
    else
        printf("Invalid choice");
    return 0;
}