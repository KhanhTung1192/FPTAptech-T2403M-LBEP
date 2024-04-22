// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int arr[10],a=0,total=0,min,max,nmin=0,nmax=0;
//     for (int i=0;i<10;i++)
//     {
//         printf("input %d: ",i+1);
//         scanf("%d",&arr[i]);
//         a++;
//         total=total+arr[i];
//     }
//     min=max=arr[0];
//     for (int j=1;j<10;j++)
//     {
//         if(arr[j]>max)
//             max=arr[j];
//         else if(arr[j]<min)
//             min=arr[j];
//         else
//             continue;
//     }
//     for (int k=0;k<10;k++)
//     {
//         if(min==arr[k])
//             nmin++;
//         if(max==arr[k])
//             nmax++;
//     }
//
//     printf("min %d appear %d\n",min,nmin);
//     printf("max %d appear %d",max,nmax);
//     return 0;
// }