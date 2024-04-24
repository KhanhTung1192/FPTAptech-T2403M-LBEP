#include <stdio.h>
#include <stdlib.h>
#define a 20
int main()
{
    //nhap
    int arr[a],x,min,max;
    for(int i=0;i<a;i++)
    {
        do
        {
            arr[i]=rand()%201;
            x=0;
            if(arr[i]==1)
                break;
            for(int j=1;j<=arr[i];j++)
            {
                if(arr[i]%j==0)
                {
                    x++;
                }
            }
        }while(x!=2);
    }
    //kiem tra min max
    min=max=arr[0];
    for (int j=1;j<a;j++)
    {
        if(arr[j]>max)
            max=arr[j];
        else if(arr[j]<min)
            min=arr[j];
    }
    //in ra
    for (int k=0;k<a;k++)
    {
        printf("%d ",arr[k]);
    }
    printf("\n");
    printf("min %d\n",min);
    printf("max %d",max);
    return 0;
}