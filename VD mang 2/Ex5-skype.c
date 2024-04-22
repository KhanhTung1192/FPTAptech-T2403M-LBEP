#include <stdio.h>
#define a 5
int main()
{
    //nhap
    int arr[a],x,min,max;
    for(int i=0;i<a;i++)
    {
        do
        {
            printf("Input %d: ",i+1);
            scanf("%d",&arr[i]);
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
            if (x!=2)
                printf("again plz!!!\n");
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
    printf("min %d\n",min);
    printf("max %d",max);
    return 0;
}