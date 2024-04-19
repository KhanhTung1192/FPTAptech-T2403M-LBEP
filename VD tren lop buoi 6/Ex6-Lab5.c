// #include <stdio.h>
// int main()
// {
//     int num,f;
//     char true;
//     Chapter1:
//     do
//     {
//         printf("Input number:");
//         scanf("%d",&num);
//         if (num<1||num>9)
//             printf("Again plz\n");
//     } while (num<1||num>9);
//
//
//         for (f=1;f<=9;f++)
//         {
//             printf("%d*%d=%d\n",num,f,num*f);
//         }
//         printf("do you want Continue (Y/N): ");
//         scanf(" %s",&true);
//         if (true=='y' || true=='Y')
//             goto Chapter1;
//     fflush(stdin);
//
//     return 0;
// }
#include <stdio.h>
int main()
{
    int num,f;
    char true;
    Chapter1:
    do
    {
        printf("Input number:");
        scanf("%d",&num);
        if (num<1||num>9)
            printf("Again plz\n");
    } while (num<1||num>9);


    for (f=1;f<=9;f++)
    {
        printf("%d*%d=%d\n",num,f,num*f);
    }
    printf("do you want Continue (Y/N): ");
    scanf(" %s",&true);
    if (true=='y' || true=='Y')
        goto Chapter1;
    fflush(stdin);

    return 0;
}
