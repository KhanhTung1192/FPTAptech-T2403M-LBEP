#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int a;
    printf("nhap so luong mang so nguyen: ");
    scanf("%d",&a);
    int Function[a];
    srand(time(NULL));
    for(int i=0;i<a;i++)
    {
        Function[i]=rand()%1000;
        printf("%d\t",Function[i]);
    }
    int max=Function[0];
    for(int j=1;j<a;j++)
    {
        if(Function[j]>max)
            max=Function[j];
    }
    printf("Gia tri lon nhat: %d",max);
}