#include <stdio.h>

int main() {
    int a, b, c, s;
    do {
        printf("Chieu dai Hinh Chu Nhat: ");
        scanf("%d", &a);
        printf("Chieu rong Hinh Chu Nhat: ");
        scanf("%d", &b);
        if (a <= b) {
            printf("Khong the thuc hien phep tinh vi CHIEU DAI PHAI LON HON CHIEU RONG\n");
        }
    } while (a <= b);
    c = (a + b) * 2;
    s = a * b;
    printf("Chu vi Hinh Chu Nhat la: %d\n", c);
    printf("Dien tich Hinh Chu Nhat la: %d", s);
    return 0;
}