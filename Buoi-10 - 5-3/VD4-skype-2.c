// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int random(int a[],int b);
// int maximum(int a[],int b);
// void main()
// {
//     int a;
//     printf("nhap so luong mang so nguyen: ");
//     scanf("%d",&a);
//     int Function[a];
//     srand(time(NULL));
//     random(Function,a);
//     printf("\nGia tri lon nhat: %d",maximum(Function,a));
// }
//
// int random(int a[],int b)
// {
//     for(int i=0;i<b;i++)
//     {
//         a[i]=rand()%1000;
//         printf("%d\t",a[i]);
//     }
//     return a;
// }
//
// int maximum(int a[],int b)
// {
//     int max=a[0];
//     for(int j=1;j<b;j++)
//     {
//         if(a[j]>max)
//             max=a[j];
//     }
//     return max;
// }