#include <stdio.h>
#include <string.h>
#define a 5
#define b 10
int main()
{
    int arr1[a];
    float arr2[b];
    for (int i=0;i<a;i++)
    {
        printf("input %d: ",i+1);
        scanf("%d",&arr1[i]);
        arr2[i]=arr1[i];
    }
    for (int i=b-a;i<b;i++)
    {
        arr2[i]=0;
    }
    for (int j=0;j<a;j++)
    {
        printf("%d ",arr1[j]);
    }
    printf("\n");
    for (int k=0;k<b;k++)
    {
        printf("%f ",arr2[k]);
    }
}