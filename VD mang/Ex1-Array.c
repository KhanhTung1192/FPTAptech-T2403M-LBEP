// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i,j,a,k,l;
//     printf("How many name?:");
//     scanf("%d",&a);
//     char name[a][100], tmp[100];
//     //input
//     for(i=1;i<=a;i++)
//     {
//         printf("Input name %d:",i);
//         fflush(stdin);
//         scanf("%[^\n]s",name[i]);
//     }
//     //arrange
//     for(k=1;k<=a;k++){
//         for(l=1;l<=a;l++){
//             if(strcmp(name[l-1], name[l])>0){
//                 strcpy(tmp, name[l-1]);
//                 strcpy(name[l-1], name[l]);
//                 strcpy(name[l], tmp);
//             }
//         }
//     }
//     //output
//     for(j=1;j<=a;j++)
//     {
//         printf("Name: %s\n",name[j]);
//         fflush(stdin);
//     }
//     return 0;
// }