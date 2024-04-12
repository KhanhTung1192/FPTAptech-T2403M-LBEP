#include <stdio.h>
int main()
{
    //INPUT
    int a,b;
    printf("INPUT a,b");
    scanf("%d,%d",&a,&b);
    //OUTPUT
    if (a%b==0)
        printf("%d divisible %d",a,b);
    else
        printf("\n%d NOT divisible %d",a,b);
    return 0;
}