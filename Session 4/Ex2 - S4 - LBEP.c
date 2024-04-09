#include <stdio.h>

int main() {
    float a, b, c, d, e, f, z;
    printf("TA CO: \n");
    a = 10;
    b = 7;
    c = 15.75;
    d = 4;
    e = 2;
    f = 5.6;
    z = a * b + (c / d) - e * f;
    printf("a = %0.2f\n", a);
    printf("b = %0.2f\n", b);
    printf("c = %0.2f\n", c);
    printf("d = %0.2f\n", d);
    printf("e = %0.2f\n", e);
    printf("f = %0.2f\n", f);
    printf(" Gia tri cua bieu thuc z=a*b+(c/d)-e*f la: %0.2f", z);
    return 0;
}