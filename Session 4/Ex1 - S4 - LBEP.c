#include <stdio.h>

int main() {
    int a, b, c, sum;
    printf("Nhap so thu nhat= ");
    scanf("%d", &a);
    printf("Nhap so thu hai= ");
    scanf("%d", &b);
    printf("Nhap so thu ba= ");
    scanf("%d", &c);
    sum = a + b + c;
    printf("Tong ba so = %d", sum);
    return 0;
}