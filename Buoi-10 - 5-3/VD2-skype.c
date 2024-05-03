// #include <stdio.h>
// #define TAX 0.1
// float calculate(int a,int b);
//
// void main()
// {
//     //nhap dau vao
//     int soluong,dongia;
//     float t = 0;
//     printf("Nhap so luong: ");
//     scanf("%d",&soluong);
//     printf("Nhap don gia: ");
//     scanf("%d",&dongia);
//     t = calculate(soluong,dongia);
//     //in gia tien
//     printf("Tong tien la: %.2f", t);
// }
//
// float calculate(int a,int b)
// {
//     float total = a * b;
//     if (total>=100)
//     {
//         total=total*0.98;
//     }
//     else if (total>=200)
//     {
//         total=total*0.95;
//     }
//     else
//         total=total*1;
//     int tax = total * TAX;
//     total = total + tax;
//     return total;
// }