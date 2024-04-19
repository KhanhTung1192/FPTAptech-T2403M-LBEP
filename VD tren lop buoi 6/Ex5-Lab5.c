#include <stdio.h>
int main()
{
    int num,result=0;
    do
        {
        printf("Input num: ");
        scanf("%d",&num);
        if(num>=0 && num<100)
            result++;
    } while(num>=0 && num<100);
    if (num<0 || num>=100)
    {
        printf("Input wrong");
    }
    printf("Have %d num inside 0-100",result);
}