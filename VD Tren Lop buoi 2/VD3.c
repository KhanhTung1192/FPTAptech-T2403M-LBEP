// #include <stdio.h>
// #include <stdlib.h>
//
// int main(){
//     //int tax(){
//     //Nhap ten tu nguoi dung
//     char name[50];
//     printf("Nhap ten cua ban");
//     scanf("%[^\n]s", name);
//
//     //Nhap nam sinh tu nguoi dung
//     int birthyear;
//     printf("Nhap nam sinh cua ban: ");
//     scanf("%d", &birthyear);
//
//     //Tinh toan tuoi
//     int currentYear = 2024;
//     int age = currentYear - birthyear;
//
//     //In thong tin vao loi chao dua tren tuoi
//     printf("Xin chao, %s!\n", name);
//     printf("Ban %d tuoi.\n", age);
//
//     if (age <0)    {
//         printf("Xin loi, co ve nhu ban da nhap sai nam sinh.\n");
//     } else if (age<18) {
//         printf("Ban la mot nguoi tre tuoi!.\n");
//     } else if (age<60) {
//         printf("Ban la mot nguoi truong thanh!.\n");
//     } else    {
//         printf("Ban la mot nguoi cao tuoi.\n");
//     }
//
//     return 0;
// }