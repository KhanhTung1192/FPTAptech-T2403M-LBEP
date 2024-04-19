#include <stdio.h>
int main()
{
    int num,i,f;
    char true;
    do
    {
        printf("Input how many:");
        scanf("%d",&num);
        if (num<1||num>9)
            printf("Again plz\n");
    } while (num<1||num>9);

    for (i=1;i!=num;i++)
    {
        for (f=1;f<=9;f++)
        {
            printf("%d*%d=%d\n",i,f,i*f);
        }
        printf("do you want Continue (Y/N): ");
        scanf(" %s",&true);
        if (true!='y' && true!='Y')
            break;
    }
    return 0;
}
