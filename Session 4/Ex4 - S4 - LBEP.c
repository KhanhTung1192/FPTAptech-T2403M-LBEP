#include <stdio.h>

int main() {
    float r, h, p, v;
    printf("Ban kinh mat day hinh tru: ");
    scanf("%f", &r);
    printf("Chieu cao hinh tru: ");
    scanf("%f", &h);
    p = 3.14;
    v = p * r * r * h;
    printf("The tich hinh tru la: %0.2f", v);
    return 0;
}