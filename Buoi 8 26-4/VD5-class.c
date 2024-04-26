// #include <stdio.h>
// void printMenu();
// void kiemTraSoDu();
// void rutTien();
// void guiTien();
// float soDu = 0.0;
// int main()
// {
//     char luaChon;
//     do
//     {
//         printMenu();
//         printf("Your choice?: ");
//         scanf(" %c",&luaChon);
//         switch (luaChon)
//         {
//         case 'a':
//             kiemTraSoDu();
//             break;
//         case 'b':
//             rutTien();
//             break;
//         case 'c':
//             guiTien();
//             break;
//         case 'd':
//             printf("Ty for uing ATM, see u again!\n");
//             break;
//         default:
//             printf("Wrong, again plz\n");
//         }
//         printf("\n");
//     } while(luaChon!='d');
//     return 0;
// }
// void printMenu()
// {
//     printf("**********ATM*********\n");
//     printf("a. Check account\n");
//     printf("b. Output\n");
//     printf("c. Input\n");
//     printf("d. Exit\n");
// }
// void kiemTraSoDu()
// {
//     printf("Your account have: $%.2f\n",soDu);
// }
// void rutTien()
// {
//     float soTien;
//     printf("Output Number: $");
//     scanf("%f",&soTien);
//     if (soTien>0&&soTien<=soDu)
//     {
//         soDu-=soTien;
//         printf("Ouput Success, Still: $%.2f\n", soDu);
//     }
//     else
//         printf("Wrong or not enough\n");
// }
// void guiTien()
// {
//     float soTien;
//     printf("Input number: $");
//     scanf("%f",&soTien);
//     if(soTien>0)
//     {
//         soDu+=soTien;
//         printf("Input Success, Still: $%.2f\n",soDu);
//     }
//     else
//         printf("Wrong");
// }