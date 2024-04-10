#include<stdio.h>

int main()
{
    int a=5,b=10,c=7;
    printf("a=", a);
    printf("b=", b);
    printf("c=", c);
    //Tong hop cac loaij toan tu
    printf("bieu thuc vi du la: a+b<c && a!=b\n");
    printf("ket qua bieu thuc (%d+%d<%d && %d!=%d)\n", a,b,c,a,b);
    int ketqua = a+b<c && a!=b;
    printf("Ket qua:%d\n", ketqua);

    printf("bieu thuc vi du la: a+b>c || a!=b\n");
    printf("ket qua bieu thuc (%d+%d>%d || %d!=%d)\n", a,b,c,a,b);
    int ketqua2 = a+b>c || a!=b;
    printf("Ket qua:%d\n", ketqua2);

    return 0;
}