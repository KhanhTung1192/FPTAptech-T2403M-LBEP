#include <stdio.h>

int main() {
    float r, p, c, s;
    printf("Ban Kinh Hinh Tron la: ");
    scanf("%f", &r);
    p = 3.14;
    c = r * 2 * p;
    s = r * r * p;
    printf("Chu Vi Hinh Tron la: %0.1f\n", c);
    printf("Dien Tich Hinh Tron la: %0.1f", s);
    return 0;
}