#include <stdio.h>
#include <string.h>
int main()
{
    int arr[5],a=0,total=0,min,max,avg;
    for (int i=0;i<5;i++)
    {
        printf("input %d: ",i+1);
        scanf("%d",&arr[i]);
        a++;
        total=total+arr[i];
    }
    avg=total/a;
    min=max=arr[0];
    for (int j=0;j<4;j++)
    {
        if(arr[j]<arr[j+1])
            max=arr[j+1];
        else if(arr[j]>arr[j+1])
            min=arr[j+1];
        else
            continue;
    }
    printf("min %d\n",min);
    printf("max %d\n",max);
    printf("avg %d\n",avg);
    return 0;
}