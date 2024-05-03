#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int a);
int maximum(int a[],int b);
void main()
{
    int a;
    printf("nhap so luong mang so nguyen: ");
    scanf("%d",&a);
    int Function[a];
    srand(time(NULL));
    for(int i=0;i<a;i++)
    {
        Function[i]=random(a);
    }
    printf("\nGia tri lon nhat: %d",maximum(Function,a));
}

int random(int a)
{
    {
        a=rand()%1000;
        printf("%d\t",a);
    }
    return a;
}

int maximum(int a[],int b)
{
    int max=a[0];
    for(int j=1;j<b;j++)
    {
        if(a[j]>max)
            max=a[j];
    }
    return max;
}