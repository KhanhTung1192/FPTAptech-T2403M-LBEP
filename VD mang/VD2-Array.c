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
    for (int j=1;j<5;j++)
    {
        if(arr[j]>max)
            max=arr[j];
        else if(arr[j]<min)
            min=arr[j];
        else
            continue;
    }
    printf("min %d\n",min);
    printf("max %d\n",max);
    printf("avg %d\n",avg);
    return 0;
}