#include <stdio.h>
int main()
{
    //INPUT howmany number of array
    int a;
    printf("Input how many number of array: ");
    scanf("%d",&a);
    float arr[a];
    //INPUT ARRAYS TO STORE ELEMENTS
    for (int i=0;i<a;i++)
    {
        printf("Input number [%d]: ",i+1);
        scanf("%f",&arr[i]);
        fflush(stdin);
    }
    //FIND THE SMALLEST POSITIVE NUMBER IN THE ARRAY
    //value min
    float min;
    for(int j=0;j<a;j++)
    {
        if(arr[j]>=0)
        {
            min=arr[j];
            break;
        }
    }
    //check min
    for(int k=1;k<a;k++)
    {
        if(arr[k]>=0)
            {
            if(arr[k]<min)
                min=arr[k];
            }
    }
    //DISPLAY SMALLEST POSITIVE NUMBER ON THE SCREEN
    //OUPUT
    printf("Min of array[%d] is: %f",a,min);
    return 0;
}
