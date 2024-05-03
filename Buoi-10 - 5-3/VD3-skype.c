// #include <stdio.h>
// int main()
// {
//     //INPUT
//     int sochinh,a,b,j=0;
//     printf("Nhap so chinh: ");
//     scanf("%d",&sochinh);
//     printf("Nhap khoang tu a->b: ");
//     scanf("%d,%d",&a,&b);
//
//     //OUTPUT
//     int min,max;
//     if(a>b)
//         {
//         min=b;
//         max=a;
//         }
//     else
//         {
//         max=b;
//         min=a;
//         }
//
//     int Boiso[max-min+1];
//     for (int i=min;i<=max;i++)
//     {
//         if(i%sochinh==0)
//         {
//             Boiso[j]=i;
//             j++;
//         }
//     }
//     printf("Trong khoang tu %d-%d co cac so sau la boi so cua %d: \n",a,b,sochinh);
//     for(int k=0;k<j;k++)
//     {
//         printf("%d\t",Boiso[k]);
//     }
// }