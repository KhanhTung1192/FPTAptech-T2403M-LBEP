// #include <stdio.h>
// #include <string.h>
//
// int main () {
//     char str[100] ;
//
//     printf("\nNhap chuoi: ");
//     scanf("%[^\n]s",str);
//
//     int length = strlen(str);
//
//     int i, j;
//     char temp;
//
//     for (i = 0; i < length-1; i++)
//         {
//         for (j = i+1; j < length; j++)
//             {
//             if (str[i] > str[j])
//                 {
//                 temp = str[i];
//                 str[i] = str[j];
//                 str[j] = temp;
//                 }
//             }
//         }
//
//     printf("\nKet qua: %s \n", str);
//     return 0;
// }